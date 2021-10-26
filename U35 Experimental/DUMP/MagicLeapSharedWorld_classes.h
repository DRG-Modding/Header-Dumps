// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size: 0x3d8 (Inherited: 0x308)
struct AMagicLeapSharedWorldGameMode : AGameMode {
	UPROPERTY(BlueprintReadWrite) FMagicLeapSharedWorldSharedData SharedWorldData; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnNewLocalDataFromClients; 
	UPROPERTY(BlueprintReadWrite) float PinSelectionConfidenceThreshold; 
	UPROPERTY(BlueprintReadWrite) AMagicLeapSharedWorldPlayerController* ChosenOne; 

	UFUNCTION(BlueprintCallable) bool SendSharedWorldDataToClients();
	UFUNCTION(BlueprintCallable) void SelectChosenOne();
	UFUNCTION(BlueprintCallable) void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	UFUNCTION(BlueprintCallable) void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData NewSharedWorldData);
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size: 0x2d0 (Inherited: 0x290)
struct AMagicLeapSharedWorldGameState : AGameState {
	UPROPERTY(BlueprintReadWrite) FMagicLeapSharedWorldSharedData SharedWorldData; 
	UPROPERTY(BlueprintReadWrite) FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnSharedWorldDataUpdated; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnAlignmentTransformsUpdated; 

	UFUNCTION(BlueprintCallable) void OnReplicate_SharedWorldData();
	UFUNCTION(BlueprintCallable) void OnReplicate_AlignmentTransforms();
	UFUNCTION(BlueprintCallable) void MagicLeapSharedWorldEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) FTransform CalculateXRCameraRootTransform();
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size: 0x588 (Inherited: 0x570)
struct AMagicLeapSharedWorldPlayerController : APlayerController {

	UFUNCTION(BlueprintCallable) void ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData LocalWorldReplicationData);
	UFUNCTION(BlueprintCallable) void ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms);
	UFUNCTION(BlueprintCallable) bool IsChosenOne();
	UFUNCTION(BlueprintCallable) void ClientSetChosenOne(bool bChosenOne);
	UFUNCTION(BlueprintCallable) void ClientMarkReadyForSendingLocalData();
	UFUNCTION(BlueprintCallable) bool CanSendLocalDataToServer();
};

