using UnityEngine;
using System.Collections;
using System.IO;
using System.Net;



public class Networking : MonoBehaviour {
	int frames = 0; 
	int refreshInterval = 180; // number of frames between network hits (eg the update rate)

	//WebSocket ws = new WebSocket ("ws://54.163.48.22:5000/test/receive_image");

	//Client socket = new Client("ws://54.163.48.22:5000/test");

	WebClient client;

	// Use this for initialization
	void Start () {
		//ws.Connect ();
		//socket.On ("connect", (fn) => {
		//	Debug.Log ("connection made");
		//});

		client = new WebClient ();
		client.Headers[HttpRequestHeader.ContentType] = "application/json";

		Debug.Log ("Connection was made");
	}
	
	// Update is called once per frame
	void Update () {
		if (frames == refreshInterval) {
			// send the screen to the server
			//Application.CaptureScreenshot ("test.png");
			StartCoroutine(ScreenshotEncode());
			frames = 0; // reset counter
		} else {
			frames++;
		}
	}

	IEnumerator ScreenshotEncode()
	{
		// wait for graphics to render
		yield return new WaitForEndOfFrame();

		// create a texture to pass to encoding
		Texture2D texture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);

		// put buffer into texture
		texture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		texture.Apply();

		// split the process up--ReadPixels() and the GetPixels() call inside of the encoder are both pretty heavy
		yield return 0;


		byte[] bytes = texture.EncodeToJPG();

		yield return 0;

		string encodedText = System.Convert.ToBase64String (bytes);

		yield return 0;

		string json = "{\"data\": \"" + encodedText + "\"}";
		string result = "";

		yield return 0;

		//WWWForm form = new WWWForm ();

		string url = "http://54.163.48.22:5000/push_image";

//		using (var client = new WebClient ()) {
//			client.Headers[HttpRequestHeader.ContentType] = "application/json";
//			result = client.UploadString(url, "POST", json);
//			Debug.Log (result);
//		}

		result = client.UploadString(url, "POST", json);
		Debug.Log (result);


		//WWW www = new WWW ("http://54.163.48.22:5000/push_image");

		// save our test image (could also upload to WWW)
		//File.WriteAllBytes(Application.dataPath + "/../testscreen-" + count + ".png", bytes);
		//count++;
		//ws.Send ("{\"type\": \"receive_image\",\"message\": \"hello\"}");

		// Added by Karl. - Tell unity to delete the texture, by default it seems to keep hold of it and memory crashes will occur after too many screenshots.
		DestroyObject( texture );

		//Debug.Log( Application.dataPath + "/../testscreen-" + count + ".png" );
	}
}
