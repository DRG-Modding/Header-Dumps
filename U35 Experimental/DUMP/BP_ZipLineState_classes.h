// BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
// Size: 0x238 (Inherited: 0x230)
struct UBP_ZipLineState_C : UZipLineStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)

	FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
	void ReceiveSpeedBoostActivated();
	void ReceiveSpeedBoostDeactivated();
	void ExecuteUbergraph_BP_ZipLineState(int32_t EntryPoint);
};

