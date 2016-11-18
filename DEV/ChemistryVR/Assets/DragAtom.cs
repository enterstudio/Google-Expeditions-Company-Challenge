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

[RequireComponent(typeof(Collider))]
public class DragAtom : MonoBehaviour, IGvrGazeResponder {
	private Vector3 startingPosition;
	private bool tracker = false;
	private bool moving = false;
	private Vector3 movement_start;
	private Vector3 movement_end;

	private float speed;
	private float distanceToObject;
	private Vector3 originalAngle;

	void Start() {
		startingPosition = transform.localPosition;
		SetGazedAt(false);
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
		transform.localPosition = startingPosition;
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

			float x = distanceToObject/cosOfTransform;

			Debug.Log ("Original Angle is " + originalAngle + " and curr is " + currentAngle + " and diff is " + diffInAngles);
			Debug.Log ("cosine between = " + cosOfTransform);
			Debug.Log("old distance was " + distanceToObject + " and new distance should be " + x);

			Vector3 newPos = rayFromCenter.GetPoint (x);
			Debug.Log("New position of object should be " + newPos);

			transform.position = newPos;

			// following line is working implementation
			//transform.position = new Vector3 (test.x, test.y, transform.position.z);

			// attach the object to the camera
			//transform.parent = Camera.main.transform;

		}

		if (moving) {
			Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();
			speed = 4;
			float step = speed * Time.deltaTime;

			if (cam.transform.position != movement_end) {
				cam.transform.position = Vector3.MoveTowards (cam.transform.position, movement_end, step);
			} else {
				moving = false;
			}
		}
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
		GazeInputModule gazeTest = GameObject.Find ("EventSystem").GetComponent<GazeInputModule> ();
		Camera cam = GameObject.FindGameObjectWithTag ("MainCamera").GetComponent<Camera> ();

		Vector3 curr_intersect =  gazeTest.GetIntersectionPosition();
		movement_start = cam.transform.position;
		movement_end = new Vector3(curr_intersect.x, 1, curr_intersect.z);
		moving = true;

		//cam.transform.position = new Vector3 (curr_intersect.x, 1, curr_intersect.z);
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

	#endregion
}
