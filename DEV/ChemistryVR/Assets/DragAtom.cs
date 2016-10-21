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
		tracker = !tracker;
	}

	public void Update(){
		if (tracker) {
			GazeInputModule gazeTest = GameObject.Find ("EventSystem").GetComponent<GazeInputModule> ();

			Vector3 test =  gazeTest.GetIntersectionPosition();
			float mouseX = test.x;
			float mouseY = test.y;

			transform.position = new Vector3 (mouseX, mouseY, transform.position.z);

			//Vector3 current_scale = transform.localScale;
			//transform.localScale = new Vector3(current_scale.x * (float)1.001, current_scale.y * (float)1.001, current_scale.z * (float)1.001);
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
		Vector3 parent_pos = transform.position;
		Vector3 child_pos = new Vector3 (parent_pos.x + 2, parent_pos.y, parent_pos.z);
		Instantiate (gameObject, child_pos, transform.rotation);
	}

	#endregion
}
