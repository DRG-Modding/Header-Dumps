// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size: 0x3d8 (Inherited: 0x308)
struct AMagicLeapSharedWorldGameMode : AGameMode {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308(0x10)
	FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318(0x10)
	float PinSelectionConfidenceThreshold; // 0x328(0x04)
	AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d0(0x08)

	bool SendSharedWorldDataToClients();
	void SelectChosenOne();
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData NewSharedWorldData);
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size: 0x2d0 (Inherited: 0x290)
struct AMagicLeapSharedWorldGameState : AGameState {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290(0x10)
	FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a0(0x10)
	FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b0(0x10)
	FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c0(0x10)

	void OnReplicate_SharedWorldData();
	void OnReplicate_AlignmentTransforms();
	void MagicLeapSharedWorldEvent__DelegateSignature();
	FTransform CalculateXRCameraRootTransform();
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size: 0x588 (Inherited: 0x570)
struct AMagicLeapSharedWorldPlayerController : APlayerController {

	void ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData LocalWorldReplicationData);
	void ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms);
	bool IsChosenOne();
	void ClientSetChosenOne(bool bChosenOne);
	void ClientMarkReadyForSendingLocalData();
	bool CanSendLocalDataToServer();
};

