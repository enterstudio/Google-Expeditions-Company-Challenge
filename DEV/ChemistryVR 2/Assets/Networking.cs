using UnityEngine;
using System.Collections;
using System.IO;
using WebSocketSharp;

public class Networking : MonoBehaviour {
	int frames = 0; 
	int refreshInterval = 60; // number of frames between network hits (eg the update rate)
	int count = 0;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (frames == refreshInterval) {

			// send the screen to the server
			StartCoroutine(ScreenshotEncode());
			frames = 0; // reset counter
		} else {
			frames++;
		}
	}


	// from http://wiki.unity3d.com/index.php?title=TakeScreenshot
	IEnumerator ScreenshotEncode()
	{
		// wait for graphics to render
		yield return new WaitForEndOfFrame();

		// create a texture to pass to encoding
		Texture2D texture = new Texture2D(Screen.width/2, Screen.height/2, TextureFormat.RGBAHalf, false);
		// put buffer into texture
		texture.ReadPixels(new Rect(0, Screen.height/4, Screen.width/2, Screen.height - (Screen.height/4)), 0, 0);
		texture.Apply();

		// split the process up--ReadPixels() and the GetPixels() call inside of the encoder are both pretty heavy
		yield return 0;

		byte[] bytes = texture.EncodeToJPG();

		// save our test image (could also upload to WWW)
		Debug.Log("Writing screenshot to file");
		File.WriteAllBytes(Application.dataPath + "/../testscreen.png", bytes);
		//count++;

		// Added by Karl. - Tell unity to delete the texture, by default it seems to keep hold of it and memory crashes will occur after too many screenshots.
		DestroyObject( texture );

		//Debug.Log( Application.dataPath + "/../testscreen-" + count + ".png" );
	}
}
