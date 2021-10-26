// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateExternalTrackingHMDPosition(FTransform ExternalTrackingTransform);
	void SetWorldToMetersScale(UObject* WorldContext, float newScale);
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin);
	void SetSpectatorScreenTexture(UTexture* InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode);
	void SetClippingPlanes(float Near, float Far);
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector options);
	bool IsSpectatorScreenModeControllable();
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool IsHeadMountedDisplayConnected();
	bool IsDeviceTracking(FXRDeviceId XRDeviceId);
	bool HasValidTrackingPosition();
	float GetWorldToMetersScale(UObject* WorldContext);
	void GetVRFocusState(bool bUseFocus, bool bHasFocus);
	FTransform GetTrackingToWorldTransform(UObject* WorldContext);
	void GetTrackingSensorParameters(FVector Origin, FRotator Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, float Distance, float NearPlane, float FarPlane, bool IsActive, int32_t Index);
	enum class EHMDTrackingOrigin GetTrackingOrigin();
	float GetScreenPercentage();
	void GetPositionalTrackingCameraParameters(FVector CameraOrigin, FRotator CameraRotation, float HFOV, float VFOV, float CameraDistance, float NearPlane, float FarPlane);
	float GetPixelDensity();
	void GetOrientationAndPosition(FRotator DeviceRotation, FVector DevicePosition);
	int32_t GetNumOfTrackingSensors();
	enum class EHMDWornState GetHMDWornState();
	FName GetHMDDeviceName();
	void GetDeviceWorldPose(UObject* WorldContext, FXRDeviceId XRDeviceId, bool bIsTracked, FRotator Orientation, bool bHasPositionalTracking, FVector Position);
	void GetDevicePose(FXRDeviceId XRDeviceId, bool bIsTracked, FRotator Orientation, bool bHasPositionalTracking, FVector Position);
	TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, enum class EXRTrackedDeviceType DeviceType);
	void EnableLowPersistenceMode(bool bEnable);
	bool EnableHMD(bool bEnable);
	void CalibrateExternalTrackingToHMD(FTransform ExternalTrackingTransform);
};

// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x4b0 (Inherited: 0x3f0)
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x3f0(0x04)
	enum class EControllerHand hand; // 0x3f4(0x01)
	FName MotionSource; // 0x3f8(0x08)
	char bDisableLowLatencyUpdate : 1; // 0x400(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x404(0x01)
	bool bDisplayDeviceModel; // 0x405(0x01)
	FName DisplayModelSource; // 0x408(0x08)
	UStaticMesh* CustomDisplayMesh; // 0x410(0x08)
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x418(0x10)
	UPrimitiveComponent* DisplayComponent; // 0x490(0x08)

	void SetTrackingSource(enum class EControllerHand NewSource);
	void SetTrackingMotionSource(FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(FName NewDisplayModelSource);
	void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int32_t NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	enum class EControllerHand GetTrackingSource();
	float GetParameterValue(FName InName, bool bValueFound);
	FVector GetHandJointPosition(int32_t jointIndex, bool bValueFound);
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName);
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand hand);
	bool IsMotionTrackingEnabledForComponent(UMotionControllerComponent* MotionControllerComponent);
	bool IsMotionTrackedDeviceCountManagementNecessary();
	bool IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName);
	int32_t GetMotionTrackingEnabledControllerCount();
	int32_t GetMaximumMotionTrackedControllerCount();
	FName GetActiveTrackingSystemName();
	TArray<FName> EnumerateMotionSources();
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand hand);
	bool EnableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent);
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand hand);
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent);
};

// Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x140 (Inherited: 0xb0)
struct UVRNotificationsComponent : UActorComponent {
	FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xb0(0x10)
	FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xc0(0x10)
	FMulticastInlineDelegate HMDRecenteredDelegate; // 0xd0(0x10)
	FMulticastInlineDelegate HMDLostDelegate; // 0xe0(0x10)
	FMulticastInlineDelegate HMDReconnectedDelegate; // 0xf0(0x10)
	FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100(0x10)
	FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110(0x10)
	FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120(0x10)
	FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130(0x10)
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary {

	UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform RelativeTransform, FXRDeviceId XRDeviceId);
	UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(AActor* Target, FXRDeviceId XRDeviceId, bool bManualAttachment, FTransform RelativeTransform);
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x60 (Inherited: 0x30)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnModelLoaded; // 0x30(0x10)
	FMulticastInlineDelegate OnLoadFailure; // 0x40(0x10)
	UPrimitiveComponent* SpawnedComponent; // 0x58(0x08)

	UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform RelativeTransform, FXRDeviceId XRDeviceId, UPrimitiveComponent* NewComponent);
	UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, FXRDeviceId XRDeviceId, bool bManualAttachment, FTransform RelativeTransform, UPrimitiveComponent* NewComponent);
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingScreen();
	void SetLoadingScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	void AddLoadingScreenSplash(UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);
};

