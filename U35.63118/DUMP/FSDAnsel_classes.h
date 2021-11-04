// Class FSDAnsel.FSDAnselFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFSDAnselFunctionLibrary : UBlueprintFunctionLibrary {

	void StopPhotographySession(UObject* WorldContextObject);
	void StartPhotographySession(UObject* WorldContextObject);
	void SetUIControlVisibility(UObject* WorldContextObject, enum class EUIControlEffectTarget UIControlTarget, bool bIsVisible);
	void SetSettleFrames(int32_t NumSettleFrames);
	void SetIsPhotographyAllowed(bool bIsPhotographyAllowed);
	void SetCameraMovementSpeed(float TranslationSpeed);
	void SetCameraConstraintDistance(float MaxCameraDistance);
	void SetCameraConstraintCameraSize(float CameraSize);
	void SetAutoPostprocess(bool bShouldAutoPostprocess);
	void SetAutoPause(bool bShouldAutoPause);
	bool IsPhotographyAvailable();
	bool IsPhotographyAllowed();
	void ConstrainCameraByGeometry(UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector OutCameraLocation);
	void ConstrainCameraByDistance(UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector OutCameraLocation, float MaxDistance);
};

