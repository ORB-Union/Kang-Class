using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

    public void PressdButton()
    {
        SceneManager.LoadScene("0419(2)");
        Debug.Log("Hello World");
    }

    // Update is called once per frame
    void Update () {
	
	}
}
