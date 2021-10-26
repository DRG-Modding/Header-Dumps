// Class MagicLeap.InAppPurchaseComponent
// Size: 0x128 (Inherited: 0xb0)
struct UInAppPurchaseComponent : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate InAppPurchaseLogMessage; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate GetItemsDetailsSuccess; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate GetItemsDetailsFailure; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate PurchaseConfirmationSuccess; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate PurchaseConfirmationFailure; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate GetPurchaseHistorySuccess; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate GetPurchaseHistoryFailure; 

	UFUNCTION(BlueprintCallable) bool TryPurchaseItemAsync(FPurchaseItemDetails ItemDetails);
	UFUNCTION(BlueprintCallable) bool TryGetPurchaseHistoryAsync(int32_t InNumPages);
	UFUNCTION(BlueprintCallable) bool TryGetItemsDetailsAsync(TArray<FString> ItemIDs);
	UFUNCTION(BlueprintCallable) void PurchaseConfirmationSuccess__DelegateSignature(FPurchaseConfirmation PurchaseConfirmations);
	UFUNCTION(BlueprintCallable) void PurchaseConfirmationFailure__DelegateSignature();
	UFUNCTION(BlueprintCallable) void InAppPurchaseLogMessage__DelegateSignature(FString LogMessage);
	UFUNCTION(BlueprintCallable) void GetPurchaseHistorySuccess__DelegateSignature(TArray<FPurchaseConfirmation> PurchaseHistory);
	UFUNCTION(BlueprintCallable) void GetPurchaseHistoryFailure__DelegateSignature();
	UFUNCTION(BlueprintCallable) void GetItemsDetailsSuccess__DelegateSignature(TArray<FPurchaseItemDetails> ItemsDetails);
	UFUNCTION(BlueprintCallable) void GetItemsDetailsFailure__DelegateSignature();
};

// Class MagicLeap.LuminApplicationLifecycleComponent
// Size: 0x190 (Inherited: 0x140)
struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DeviceHasReactivatedDelegate; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate FocusLostDelegate; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate FocusGainedDelegate; 
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// Size: 0x1d0 (Inherited: 0x140)
struct UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnHeadTrackingLost; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnHeadTrackingRecovered; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; 
};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHMDFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void SetStabilizationDepthActor(AActor* InStabilizationDepthActor, bool bSetFocusActor);
	UFUNCTION(BlueprintCallable) void SetFocusActor(AActor* InFocusActor, bool bSetStabilizationActor);
	UFUNCTION(BlueprintCallable) void SetBaseRotation(FRotator InBaseRotation);
	UFUNCTION(BlueprintCallable) void SetBasePosition(FVector InBasePosition);
	UFUNCTION(BlueprintCallable) void SetBaseOrientation(FQuat InBaseOrientation);
	UFUNCTION(BlueprintCallable) bool SetAppReady();
	UFUNCTION(BlueprintCallable) bool IsRunningOnMagicLeapHMD();
	UFUNCTION(BlueprintCallable) int32_t GetPlatformAPILevel();
	UFUNCTION(BlueprintCallable) int32_t GetMLSDKVersionRevision();
	UFUNCTION(BlueprintCallable) int32_t GetMLSDKVersionMinor();
	UFUNCTION(BlueprintCallable) int32_t GetMLSDKVersionMajor();
	UFUNCTION(BlueprintCallable) FString GetMLSDKVersion();
	UFUNCTION(BlueprintCallable) int32_t GetMinimumAPILevel();
	UFUNCTION(BlueprintCallable) bool GetHeadTrackingState(FMagicLeapHeadTrackingState State);
	UFUNCTION(BlueprintCallable) bool GetHeadTrackingMapEvents(TSet<enum class EMagicLeapHeadTrackingMapEvent> MapEvents);
	UFUNCTION(BlueprintCallable) bool GetGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo);
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
// Size: 0x280 (Inherited: 0x1f0)
struct UMagicLeapMeshTrackerComponent : USceneComponent {
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnMeshTrackerUpdated; 
	UPROPERTY(BlueprintReadWrite) bool ScanWorld; 
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapMeshType MeshType; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* BoundingVolume; 
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapMeshLOD LevelOfDetail; 
	UPROPERTY(BlueprintReadWrite) float PerimeterOfGapsToFill; 
	UPROPERTY(BlueprintReadWrite) bool Planarize; 
	UPROPERTY(BlueprintReadWrite) float DisconnectedSectionArea; 
	UPROPERTY(BlueprintReadWrite) bool RequestNormals; 
	UPROPERTY(BlueprintReadWrite) bool RequestVertexConfidence; 
	UPROPERTY(BlueprintReadWrite) enum class EMagicLeapMeshVertexColorMode VertexColorMode; 
	UPROPERTY(BlueprintReadWrite) TArray<FColor> BlockVertexColors; 
	UPROPERTY(BlueprintReadWrite) FLinearColor VertexColorFromConfidenceZero; 
	UPROPERTY(BlueprintReadWrite) FLinearColor VertexColorFromConfidenceOne; 
	UPROPERTY(BlueprintReadWrite) bool RemoveOverlappingTriangles; 
	UPROPERTY(BlueprintReadWrite) UMRMeshComponent* MRMesh; 
	UPROPERTY(BlueprintReadWrite) int32_t BricksPerFrame; 

	UFUNCTION(BlueprintCallable) void SelectMeshBlocks(FMagicLeapTrackingMeshInfo NewMeshInfo, TArray<FMagicLeapMeshBlockRequest> RequestedMesh);
	UFUNCTION(BlueprintCallable) void OnMeshTrackerUpdated__DelegateSignature(FGuid ID, TArray<FVector> Vertices, TArray<int32_t> Triangles, TArray<FVector> Normals, TArray<float> Confidence);
	UFUNCTION(BlueprintCallable) int32_t GetNumQueuedBlockUpdates();
	UFUNCTION(BlueprintCallable) void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	UFUNCTION(BlueprintCallable) void DisconnectBlockSelector();
	UFUNCTION(BlueprintCallable) void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
	UFUNCTION(BlueprintCallable) void ConnectBlockSelector(TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector);
};

// Class MagicLeap.MagicLeapSettings
// Size: 0x30 (Inherited: 0x28)
struct UMagicLeapSettings : UObject {
	UPROPERTY(BlueprintReadWrite) bool bEnableZI; 
	UPROPERTY(BlueprintReadWrite) bool bUseVulkanForZI; 
	UPROPERTY(BlueprintReadWrite) bool bUseMLAudioForZI; 
};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapMeshBlockSelectorInterface : UInterface {

	UFUNCTION(BlueprintCallable) void SelectMeshBlocks(FMagicLeapTrackingMeshInfo NewMeshInfo, TArray<FMagicLeapMeshBlockRequest> RequestedMesh);
};

// Class MagicLeap.MagicLeapRaycastComponent
// Size: 0x118 (Inherited: 0xb0)
struct UMagicLeapRaycastComponent : UActorComponent {

	UFUNCTION(BlueprintCallable) bool RequestRaycast(FMagicLeapRaycastQueryParams RequestParams, FDelegate ResultDelegate);
	UFUNCTION(BlueprintCallable) void RaycastResultDelegate__DelegateSignature(FMagicLeapRaycastHitResult HitResult);
};

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapRaycastFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) FMagicLeapRaycastQueryParams MakeRaycastQueryParams(FVector Position, FVector Direction, FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData);
};

