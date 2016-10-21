using UnityEngine;
using UnityEngine.UI;  // add to the top
using System.Collections;
using UnityEngine.EventSystems;

public class FlashCamera : MonoBehaviour {
	public CanvasGroup flashCanvas;
	private bool flash = false;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		//flashCanvas = GameObject.Find ("CameraFlash").GetComponent<CanvasGroup> ();
		if (flash)
		{
			flashCanvas.alpha = flashCanvas.alpha - Time.deltaTime;
			Debug.Log("Flash should happen with alpha " + flashCanvas.alpha);
			if (flashCanvas.alpha <= 0)
			{
				flashCanvas.alpha = 0;
				flash = false;
			}
		}

		//GazeInputModule gazeTest = GameObject.Find ("EventSystem").GetComponent<GazeInputModule> ();
	}

	public void TakePhoto() {
		Invoke ("DoIt", 1);
	}

	public void DoIt() {
		//flashCanvas = GameObject.Find ("CameraFlash").GetComponent<CanvasGroup> ();
		// should delay to allow student to move view
		Debug.Log ("Send to teacher pressed");
		flash = true;
		flashCanvas.alpha = 1;
	}
}
