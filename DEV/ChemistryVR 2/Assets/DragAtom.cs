// Copyright 2014 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DragAtom : MonoBehaviour, IGvrGazeResponder {
	private Vector3 startingPosition;
	private bool tracker = false;
	private bool moving = false;
	private Vector3 movement_start;
	private Vector3 movement_end;

	private float speed;
	private float distanceToObject;
	private Vector3 originalAngle;

	private bool hydro1connect = false;
	private bool hydro2connect = false;

	private bool fadeIn = false;
	private bool fadeOut = false;

	private bool doFade = false;


	private int partsConnected = 0;


	CanvasGroup flashCanvas;

	void Start() {
		startingPosition = transform.localPosition;
		SetGazedAt(false);


		if (SceneManager.GetActiveScene ().name == "chemistry") {
			GameObject wellPrompt = GameObject.FindGameObjectWithTag ("WellPrompt");
			Canvas hello = wellPrompt.GetComponent<Canvas> ();
			hello.enabled = false;		
		}

		if (SceneManager.GetActiveScene ().name == "h2o copy") {
			flashCanvas = GameObject.FindGameObjectWithTag ("InstructionsCanvas").GetComponent<CanvasGroup> ();
		}
	}

	void LateUpdate() {
		GvrViewer.Instance.UpdateState();
		if (GvrViewer.Instance.BackButtonPressed) {
			Application.Quit();
		}
	}

	public void SetGazedAt(bool gazedAt) {
		// tooltip implementation would go here
	}

	public void Reset() {
		//transform.localPosition = startingPosition;
	}

	public void ToggleVRMode() {
		GvrViewer.Instance.VRModeEnabled = !GvrViewer.Instance.VRModeEnabled;
	}

	public void ToggleDistortionCorrection() {
		GvrViewer.Instance.DistortionCorrectionEnabled =
			!GvrViewer.Instance.DistortionCorrectionEnabled;
	}

	#if !UNITY_HAS_GOOGLEVR || UNITY_EDITOR
	public void ToggleDirectRender() {
		GvrViewer.Controller.directRender = !GvrViewer.Controller.directRender;
	}
	#endif  //  !UNITY_HAS_GOOGLEVR || UNITY_EDITOR

	public void Track(){
		if (tracker) {			
			//transform.parent = null;
		} else {
			//transform.parent = Camera.main.transform;

			Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();

			distanceToObject = Vector3.Distance (transform.position, cam.transform.position);
			originalAngle = cam.transform.forward;
		}

		tracker = !tracker;
	}

	public void Update(){

		// object tracking code
		if (tracker) {
			GazeInputModule gazeTest = GameObject.Find ("EventSystem").GetComponent<GazeInputModule> ();
			Vector3 test =  gazeTest.GetIntersectionPosition();

			Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();

			//var ray = new Ray(Camera.main.position, cam.forward);
			Ray rayFromCenter = new Ray(cam.transform.position, cam.transform.forward);
			Vector3 currentAngle = cam.transform.forward;

			float diffInAngles = Vector3.Angle (originalAngle, currentAngle);
			float diffInAnglesRad = diffInAngles * Mathf.Deg2Rad;

			float cosOfTransform = Mathf.Cos (diffInAnglesRad);

			float x = distanceToObject;

			//Debug.Log ("Original Angle is " + originalAngle + " and curr is " + currentAngle + " and diff is " + diffInAngles);
			//Debug.Log ("cosine between = " + cosOfTransform);
			//Debug.Log("old distance was " + distanceToObject + " and new distance should be " + x);

			Vector3 newPos = rayFromCenter.GetPoint (x);
			//Debug.Log("New position of object should be " + newPos);

			transform.position = newPos;

			// following line is working implementation
			//transform.position = new Vector3 (test.x, test.y, transform.position.z);

			// attach the object to the camera
			//transform.parent = Camera.main.transform;

		}

		// player movement code
		if (moving) {
			Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();
			float step = speed * Time.deltaTime;

			if (cam.transform.position != movement_end) {
				cam.transform.position = Vector3.MoveTowards (cam.transform.position, movement_end, step);
			} else {
				moving = false;
			}
		}

		if (fadeIn) {
			Debug.Log (gameObject.name);
			flashCanvas.alpha = flashCanvas.alpha + Time.deltaTime;
			Debug.Log("Flash should happen with alpha " + flashCanvas.alpha);
			if (flashCanvas.alpha >= 1)
			{
				flashCanvas.alpha = 1;
				fadeIn = false;
			}
		}

		if (fadeOut) {
			Debug.Log (gameObject.name);
			flashCanvas.alpha = flashCanvas.alpha - Time.deltaTime;
			Debug.Log("Flash should happen with alpha " + flashCanvas.alpha);
			if (flashCanvas.alpha <= 0)
			{
				flashCanvas.alpha = 0;
				fadeOut = false;
			}
		}

		if (SceneManager.GetActiveScene ().name == "chemistry") {
			InitOnPlayerClose ();
		}
	}

	void OnCollisionEnter(Collision col) {
		Debug.Log (name);
		Debug.Log (col.gameObject.name);


		if (((name == "Ox2") & (col.gameObject.name == "H")) | ((name == "H") & (col.gameObject.name == "Ox2"))) {
			Debug.Log("H and Ox2 Connected");
			hydro1connect = true;
			partsConnected++;
			Debug.Log (partsConnected);
			FlashMessage ();
		}

		if (((name == "Ox2") & (col.gameObject.name == "H(Clone)")) | ((name == "H(Clone)") & (col.gameObject.name == "Ox2"))) {
			Debug.Log("H(Clone) and Ox2 Connected");
			hydro2connect = true;
			partsConnected++;
			Debug.Log (partsConnected);
			FlashMessage ();
		}
		Text instructions = GameObject.FindGameObjectWithTag ("Instructions").GetComponent<Text> ();
		// connection code
		if (hydro1connect ^ hydro2connect) {
			instructions.text = "Halfway there! Make the final connection!";
		}
		if (hydro1connect & hydro2connect) {
			instructions.text = "You did it! Press finish to return to the level.";		
		}

		// IMPLEMENT:
		// check that the right objects are colliding,
		// stop moving the objects (stop tracking)
		// display progress message or level over screen (enable UI elements)
	}

	void OnTriggerEnter(Collider col) {
		Debug.Log (col.gameObject.name);
	}

	public void TeleportRandomly() {
		//Vector3 current_pos = transform.localPosition;
		//Vector3 new_pos =  new Vector3(current_pos.x + 1, current_pos.y + 1, current_pos.z + 1);
		//transform.localPosition = new_pos;
		Debug.Log("Teleport called");
		Vector3 current_scale = transform.localScale;
		transform.localScale = new Vector3(current_scale.x * 2, current_scale.y * 2, current_scale.z * 2);
	}

	public void TeleportCameraToObject() {
		GazeInputModule gazeTest = GameObject.FindGameObjectWithTag("EventSystem").GetComponent<GazeInputModule> ();
		Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();

		Vector3 curr_intersect =  gazeTest.GetIntersectionPosition();
		Vector3 mid_object = transform.position;
		movement_start = cam.transform.position;
		movement_end = new Vector3(mid_object.x, 1, mid_object.z);
		speed = 5;
		moving = true;

		//cam.transform.position = new Vector3 (curr_intersect.x, 1, curr_intersect.z);
	}

	public void TeleportFast() {
		GazeInputModule gazeTest = GameObject.FindGameObjectWithTag("EventSystem").GetComponent<GazeInputModule> ();
		Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();

		Vector3 curr_intersect =  gazeTest.GetIntersectionPosition();
		movement_start = cam.transform.position;
		movement_end = new Vector3(curr_intersect.x, 1, curr_intersect.z);
		speed = 20;
		moving = true;
	}

	#region IGvrGazeResponder implementation

	/// Called when the user is looking on a GameObject with this script,
	/// as long as it is set to an appropriate layer (see GvrGaze).
	public void OnGazeEnter() {
		SetGazedAt(true);
		Debug.Log("Enter gaze called");
	}

	/// Called when the user stops looking on the GameObject, after OnGazeEnter
	/// was already called.
	public void OnGazeExit() {
		SetGazedAt(false);
		Debug.Log("Exit gaze called");
	}

	/// Called when the viewer's trigger is used, between OnGazeEnter and OnGazeExit.
	public void OnGazeTrigger() {
		TeleportRandomly();
	}

	//Called in order to duplicate current game object, with current coordinates but shifted over slightly
	public void DuplicateModel() {
		Debug.Log ("Clicked Duplication Button");

		if (gameObject.active == false) {
			ActivateModel ();
		} else {
			Vector3 parent_pos = transform.position;
			Vector3 child_pos = new Vector3 (parent_pos.x + 1, parent_pos.y, parent_pos.z);
			GameObject thing = Instantiate (gameObject, child_pos, transform.rotation) as GameObject;
			Debug.Log (gameObject.transform.localScale + " is local and lossy is " + gameObject.transform.lossyScale);

			thing.transform.localScale = gameObject.transform.lossyScale;
		}
	}

	public void ActivateModel() {
		Debug.Log ("Activate model button pressed");
		gameObject.SetActive (true);
	}

	public void DeactivateModel() {
		Debug.Log ("Deactivate model button pressed");
		gameObject.SetActive (false);	
	}

	public void CameraAbout() {
		Debug.Log ("CameraAbout called");
		Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();
		Debug.Log (cam.transform.rotation);
		cam.transform.rotation *= Quaternion.Euler(0, 180, 0);
		Debug.Log (cam.transform.rotation);
	}

	public void InitOnPlayerClose() {
		Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();
		GameObject wellPrompt = GameObject.FindGameObjectWithTag ("WellPrompt");
		Canvas hello = wellPrompt.GetComponent<Canvas> ();
		Vector3 cam_pos = cam.transform.position;

		if (Vector3.Distance (cam_pos, hello.transform.position) <= 30) {
			hello.enabled = true;
		}
	}

	public void FlashMessage() {
		FadeMessageIn ();
		Invoke ("FadeMessageOut", 2);
	}

	public void FadeMessageIn() {
		fadeIn = true;
		flashCanvas.alpha = 0;
	}

	public void FadeMessageOut() {
		fadeOut = true;
		flashCanvas.alpha = 1;
	}

	#endregion
}
