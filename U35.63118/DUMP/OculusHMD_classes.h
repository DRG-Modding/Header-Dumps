// Class OculusHMD.OculusFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOculusFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingSplashScreen();
	void ShowLoadingIcon(UTexture2D* Texture);
	void SetReorientHMDOnControllerRecenter(bool recenterMode);
	void SetPositionScale3D(FVector PosScale3D);
	void SetLoadingSplashParams(FString TexturePath, FVector DistanceInMeters, FVector2D SizeInMeters, FVector RotationAxis, float RotationDeltaInDeg);
	void SetGuardianVisibility(bool GuardianVisible);
	void SetFixedFoveatedRenderingLevel(enum class EFixedFoveatedRenderingLevel Level);
	void SetDisplayFrequency(float RequestedFrequency);
	void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel);
	void SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers);
	void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, enum class EOrientPositionSelector options);
	void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, enum class EOrientPositionSelector options);
	bool IsLoadingIconEnabled();
	bool IsGuardianDisplayed();
	bool IsGuardianConfigured();
	bool IsDeviceTracked(enum class ETrackedDeviceType DeviceType);
	bool IsAutoLoadingSplashScreenEnabled();
	void HideLoadingSplashScreen(bool bClear);
	void HideLoadingIcon();
	bool HasSystemOverlayPresent();
	bool HasInputFocus();
	bool GetUserProfile(FHmdUserProfile Profile);
	void GetRawSensorData(FVector AngularAcceleration, FVector LinearAcceleration, FVector AngularVelocity, FVector LinearVelocity, float TimeInSeconds, enum class ETrackedDeviceType DeviceType);
	void GetPose(FRotator DeviceRotation, FVector DevicePosition, FVector NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, FVector PositionScale);
	FGuardianTestResult GetPointGuardianIntersection(FVector Point, enum class EBoundaryType BoundaryType);
	FTransform GetPlayAreaTransform();
	FGuardianTestResult GetNodeGuardianIntersection(enum class ETrackedDeviceType DeviceType, enum class EBoundaryType BoundaryType);
	void GetLoadingSplashParams(FString TexturePath, FVector DistanceInMeters, FVector2D SizeInMeters, FVector RotationAxis, float RotationDeltaInDeg);
	TArray<FVector> GetGuardianPoints(enum class EBoundaryType BoundaryType, bool UsePawnSpace);
	FVector GetGuardianDimensions(enum class EBoundaryType BoundaryType);
	void GetGPUUtilization(bool IsGPUAvailable, float GPUUtilization);
	float GetGPUFrameTime();
	enum class EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
	FString GetDeviceName();
	float GetCurrentDisplayFrequency();
	void GetBaseRotationAndPositionOffset(FRotator OutRot, FVector OutPosOffset);
	void GetBaseRotationAndBaseOffsetInMeters(FRotator OutRotation, FVector OutBaseOffsetInMeters);
	TArray<float> GetAvailableDisplayFrequencies();
	void EnablePositionTracking(bool bPositionTracking);
	void EnableOrientationTracking(bool bOrientationTracking);
	void EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
	void ClearLoadingSplashScreens();
	void AddLoadingSplashScreen(UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd);
};

// Class OculusHMD.OculusHMDRuntimeSettings
// Size: 0x58 (Inherited: 0x28)
struct UOculusHMDRuntimeSettings : UObject {
	bool bAutoEnabled; // 0x28(0x01)
	TArray<FOculusSplashDesc> SplashDescs; // 0x30(0x10)
	bool bSupportsDash; // 0x40(0x01)
	bool bCompositesDepth; // 0x41(0x01)
	bool bHQDistortion; // 0x42(0x01)
	float PixelDensityMin; // 0x44(0x04)
	float PixelDensityMax; // 0x48(0x04)
	int32_t CPULevel; // 0x4c(0x04)
	int32_t GPULevel; // 0x50(0x04)
	enum class EFixedFoveatedRenderingLevel FFRLevel; // 0x54(0x01)
	bool bChromaCorrection; // 0x55(0x01)
	bool bRecenterHMDWithController; // 0x56(0x01)
};

// Class OculusHMD.OculusSceneCaptureCubemap
// Size: 0x90 (Inherited: 0x28)
struct UOculusSceneCaptureCubemap : UObject {
	TArray<USceneCaptureComponent2D*> CaptureComponents; // 0x38(0x10)
};

