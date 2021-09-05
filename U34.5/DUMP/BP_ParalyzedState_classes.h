// BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C
// Size: 0x150 (Inherited: 0x138)
struct UBP_ParalyzedState_C : UParalyzedStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	FRotator StoredRotation; // 0x140(0x0c)
	float Camera Arm Y Rotation ; // 0x14c(0x04)

	void ReceiveStateEnter();
	void ReceiveStateExit();
	void ExecuteUbergraph_BP_ParalyzedState(int32_t EntryPoint);
};

