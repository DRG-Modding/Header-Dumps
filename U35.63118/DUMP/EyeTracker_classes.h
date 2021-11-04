// Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetEyeTrackedPlayer(APlayerController* PlayerController);
	bool IsStereoGazeDataAvailable();
	bool IsEyeTrackerConnected();
	bool GetStereoGazeData(FEyeTrackerStereoGazeData OutGazeData);
	bool GetGazeData(FEyeTrackerGazeData OutGazeData);
};

