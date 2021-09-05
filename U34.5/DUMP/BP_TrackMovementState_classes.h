// BlueprintGeneratedClass BP_TrackMovementState.BP_TrackMovementState_C
// Size: 0x248 (Inherited: 0x240)
struct UBP_TrackMovementState_C : UTrackMovementStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TrackMovementState(int32_t EntryPoint);
};

