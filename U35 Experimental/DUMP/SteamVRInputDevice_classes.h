// Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USteamVRInputDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowSteamVR_ActionOrigin(FSteamVRAction SteamVRAction, FSteamVRActionSet SteamVRActionSet);
	void ShowAllSteamVR_ActionOrigins();
	float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
	void SetPoseSource(bool bUseSkeletonPose);
	void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
	bool ResetSeatedPosition();
	void PlaySteamVR_HapticFeedback(enum class ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
	float GetUserIPD();
	bool GetSteamVR_OriginTrackedDeviceInfo(FSteamVRAction SteamVRAction, FSteamVRInputOriginInfo InputOriginInfo);
	void GetSteamVR_OriginLocalizedName(FSteamVRAction SteamVRAction, TArray<enum class ESteamVRInputStringBits> LocalizedParts, FString OriginLocalizedName);
	TArray<FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(FSteamVRAction SteamVRActionHandle);
	bool GetSteamVR_HandPoseRelativeToNow(FVector Position, FRotator Orientation, enum class ESteamVRHand hand, float PredictedSecondsFromNow);
	float GetSteamVR_GlobalPredictedSecondsFromNow();
	void GetSteamVR_ActionSetArray(TArray<FSteamVRActionSet> SteamVRActionSets);
	void GetSteamVR_ActionArray(TArray<FSteamVRAction> SteamVRActions);
	void GetSkeletalTransform(FSteamVRSkeletonTransform LeftHand, FSteamVRSkeletonTransform RightHand, bool bWithController);
	void GetSkeletalState(bool LeftHandState, bool RightHandState);
	void GetRightHandPoseData(FVector Position, FRotator Orientation, FVector AngularVelocity, FVector Velocity);
	void GetPoseSource(bool bUsingSkeletonPose);
	void GetLeftHandPoseData(FVector Position, FRotator Orientation, FVector AngularVelocity, FVector Velocity);
	void GetFingerCurlsAndSplays(enum class EHand hand, FSteamVRFingerCurls FingerCurls, FSteamVRFingerSplays FingerSplays, enum class ESkeletalSummaryDataType SummaryDataType);
	void GetCurlsAndSplaysState(bool LeftHandState, bool RightHandState);
	void GetControllerFidelity(enum class EControllerFidelity LeftControllerFidelity, enum class EControllerFidelity RightControllerFidelity);
	void FindSteamVR_OriginTrackedDeviceInfo(FName ActionName, bool bResult, FSteamVRInputOriginInfo InputOriginInfo, FName ActionSet);
	TArray<FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(FName ActionName, FName ActionSet);
	bool FindSteamVR_ActionOrigin(FName ActionName, FName ActionSet);
	void FindSteamVR_Action(FName ActionName, bool bResult, FSteamVRAction FoundAction, FSteamVRActionSet FoundActionSet, FName ActionSet);
};

// Class SteamVRInputDevice.SteamVRTrackingReferences
// Size: 0x108 (Inherited: 0xb0)
struct USteamVRTrackingReferences : UActorComponent {
	FMulticastInlineDelegate OnTrackedDeviceActivated; // 0xb0(0x10)
	FMulticastInlineDelegate OnTrackedDeviceDeactivated; // 0xc0(0x10)
	float ActiveDevicePollFrequency; // 0xd0(0x04)
	FVector TrackingReferenceScale; // 0xd4(0x0c)
	TArray<UStaticMeshComponent*> TrackingReferences; // 0xe0(0x10)

	bool ShowTrackingReferences(UStaticMesh* TrackingReferenceMesh);
	void HideTrackingReferences();
};

