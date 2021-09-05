// BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
// Size: 0x230 (Inherited: 0x228)
struct UBP_ZipLineState_C : UZipLineStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)

	FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
	void ReceiveSpeedBoostActivated();
	void ReceiveSpeedBoostDeactivated();
	void ExecuteUbergraph_BP_ZipLineState(int32_t EntryPoint);
};

