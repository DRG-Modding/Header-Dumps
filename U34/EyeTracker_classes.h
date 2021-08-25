// Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetEyeTrackedPlayer(struct APlayerController* PlayerController); // Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	bool IsStereoGazeDataAvailable(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	bool IsEyeTrackerConnected(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	bool GetGazeData(struct FEyeTrackerGazeData OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
};

