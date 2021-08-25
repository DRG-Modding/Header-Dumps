// Class FSDAnsel.FSDAnselFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFSDAnselFunctionLibrary : UBlueprintFunctionLibrary {

	void StopPhotographySession(struct UObject* WorldContextObject); // Function FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession
	void StartPhotographySession(struct UObject* WorldContextObject); // Function FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession
	void SetUIControlVisibility(struct UObject* WorldContextObject, char UIControlTarget, bool bIsVisible); // Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility
	void SetSettleFrames(int32_t NumSettleFrames); // Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames
	void SetIsPhotographyAllowed(bool bIsPhotographyAllowed); // Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed
	void SetCameraMovementSpeed(float TranslationSpeed); // Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed
	void SetCameraConstraintDistance(float MaxCameraDistance); // Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance
	void SetCameraConstraintCameraSize(float CameraSize); // Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize
	void SetAutoPostprocess(bool bShouldAutoPostprocess); // Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess
	void SetAutoPause(bool bShouldAutoPause); // Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause
	bool IsPhotographyAvailable(); // Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable
	bool IsPhotographyAllowed(); // Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed
	void ConstrainCameraByGeometry(struct UObject* WorldContextObject, struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector OutCameraLocation); // Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry
	void ConstrainCameraByDistance(struct UObject* WorldContextObject, struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector OutCameraLocation, float MaxDistance); // Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance
};

