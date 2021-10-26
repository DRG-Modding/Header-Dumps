// BlueprintGeneratedClass BP_TrackMovementState.BP_TrackMovementState_C
// Size: 0x258 (Inherited: 0x250)
struct UBP_TrackMovementState_C : UTrackMovementStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TrackMovementState(int32_t EntryPoint);
};

