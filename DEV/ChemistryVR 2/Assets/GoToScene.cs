using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GoToScene : MonoBehaviour {

	public void LoadScene()
	{
		Application.LoadLevel ("h2o copy");
		//SceneManager.LoadScene(2); // reload the current scene
	}

	public void LoadMainLevel() {
		Application.LoadLevel ("chemistry");
	}
		
	public void ResetLevel() {
		Scene curr = SceneManager.GetActiveScene();
		SceneManager.LoadScene(curr.buildIndex); // reload the current scene
	}
}