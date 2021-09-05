// Class MagicLeap.InAppPurchaseComponent
// Size: 0x128 (Inherited: 0xb0)
struct UInAppPurchaseComponent : UActorComponent {
	FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xb0(0x10)
	FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xc0(0x10)
	FMulticastInlineDelegate GetItemsDetailsFailure; // 0xd0(0x10)
	FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xe0(0x10)
	FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xf0(0x10)
	FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x100(0x10)
	FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x110(0x10)

	bool TryPurchaseItemAsync(FPurchaseItemDetails ItemDetails);
	bool TryGetPurchaseHistoryAsync(int32_t InNumPages);
	bool TryGetItemsDetailsAsync(TArray<FString> ItemIDs);
	void PurchaseConfirmationSuccess__DelegateSignature(FPurchaseConfirmation PurchaseConfirmations);
	void PurchaseConfirmationFailure__DelegateSignature();
	void InAppPurchaseLogMessage__DelegateSignature(FString LogMessage);
	void GetPurchaseHistorySuccess__DelegateSignature(TArray<FPurchaseConfirmation> PurchaseHistory);
	void GetPurchaseHistoryFailure__DelegateSignature();
	void GetItemsDetailsSuccess__DelegateSignature(TArray<FPurchaseItemDetails> ItemsDetails);
	void GetItemsDetailsFailure__DelegateSignature();
};

// Class MagicLeap.LuminApplicationLifecycleComponent
// Size: 0x190 (Inherited: 0x140)
struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140(0x10)
	FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150(0x10)
	FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160(0x10)
	FMulticastInlineDelegate FocusLostDelegate; // 0x170(0x10)
	FMulticastInlineDelegate FocusGainedDelegate; // 0x180(0x10)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// Size: 0x1d0 (Inherited: 0x140)
struct UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	FMulticastInlineDelegate OnHeadTrackingLost; // 0x140(0x10)
	FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x150(0x10)
	FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x160(0x10)
	FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170(0x10)
};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHMDFunctionLibrary : UBlueprintFunctionLibrary {

	void SetStabilizationDepthActor(AActor* InStabilizationDepthActor, bool bSetFocusActor);
	void SetFocusActor(AActor* InFocusActor, bool bSetStabilizationActor);
	void SetBaseRotation(FRotator InBaseRotation);
	void SetBasePosition(FVector InBasePosition);
	void SetBaseOrientation(FQuat InBaseOrientation);
	bool SetAppReady();
	bool IsRunningOnMagicLeapHMD();
	int32_t GetPlatformAPILevel();
	int32_t GetMLSDKVersionRevision();
	int32_t GetMLSDKVersionMinor();
	int32_t GetMLSDKVersionMajor();
	FString GetMLSDKVersion();
	int32_t GetMinimumAPILevel();
	bool GetHeadTrackingState(FMagicLeapHeadTrackingState State);
	bool GetHeadTrackingMapEvents(TSet<enum class EMagicLeapHeadTrackingMapEvent> MapEvents);
	bool GetGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo);
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
// Size: 0x280 (Inherited: 0x1f0)
struct UMagicLeapMeshTrackerComponent : USceneComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1f8(0x10)
	bool ScanWorld; // 0x208(0x01)
	enum class EMagicLeapMeshType MeshType; // 0x209(0x01)
	UBoxComponent* BoundingVolume; // 0x210(0x08)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x218(0x01)
	float PerimeterOfGapsToFill; // 0x21c(0x04)
	bool Planarize; // 0x220(0x01)
	float DisconnectedSectionArea; // 0x224(0x04)
	bool RequestNormals; // 0x228(0x01)
	bool RequestVertexConfidence; // 0x229(0x01)
	enum class EMagicLeapMeshVertexColorMode VertexColorMode; // 0x22a(0x01)
	TArray<FColor> BlockVertexColors; // 0x230(0x10)
	FLinearColor VertexColorFromConfidenceZero; // 0x240(0x10)
	FLinearColor VertexColorFromConfidenceOne; // 0x250(0x10)
	bool RemoveOverlappingTriangles; // 0x260(0x01)
	UMRMeshComponent* MRMesh; // 0x268(0x08)
	int32_t BricksPerFrame; // 0x270(0x04)

	void SelectMeshBlocks(FMagicLeapTrackingMeshInfo NewMeshInfo, TArray<FMagicLeapMeshBlockRequest> RequestedMesh);
	void OnMeshTrackerUpdated__DelegateSignature(FGuid ID, TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector> Normals, TArray<float> Confidence);
	int32_t GetNumQueuedBlockUpdates();
	void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	void DisconnectBlockSelector();
	void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	void ConnectBlockSelector(TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector);
};

// Class MagicLeap.MagicLeapSettings
// Size: 0x30 (Inherited: 0x28)
struct UMagicLeapSettings : UObject {
	bool bEnableZI; // 0x28(0x01)
	bool bUseVulkanForZI; // 0x29(0x01)
	bool bUseMLAudioForZI; // 0x2a(0x01)
};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapMeshBlockSelectorInterface : UInterface {

	void SelectMeshBlocks(FMagicLeapTrackingMeshInfo NewMeshInfo, TArray<FMagicLeapMeshBlockRequest> RequestedMesh);
};

// Class MagicLeap.MagicLeapRaycastComponent
// Size: 0x118 (Inherited: 0xb0)
struct UMagicLeapRaycastComponent : UActorComponent {

	bool RequestRaycast(FMagicLeapRaycastQueryParams RequestParams, FDelegate ResultDelegate);
	void RaycastResultDelegate__DelegateSignature(FMagicLeapRaycastHitResult HitResult);
};

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapRaycastFunctionLibrary : UBlueprintFunctionLibrary {

	FMagicLeapRaycastQueryParams MakeRaycastQueryParams(FVector Position, FVector Direction, FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData);
};

