// BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
// Size: 0x230 (Inherited: 0x228)
struct UBP_ZipLineState_C : UZipLineStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)

	struct FVector GetJumpVector(struct FVector LookVector, struct FVector CurrentVelocity); // Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector
	void ReceiveSpeedBoostActivated(); // Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostActivated
	void ReceiveSpeedBoostDeactivated(); // Function BP_ZipLineState.BP_ZipLineState_C.ReceiveSpeedBoostDeactivated
	void ExecuteUbergraph_BP_ZipLineState(int32_t EntryPoint); // Function BP_ZipLineState.BP_ZipLineState_C.ExecuteUbergraph_BP_ZipLineState
};

