// BlueprintGeneratedClass AFE_PowerAttack.AFE_PowerAttack_C
// Size: 0x30 (Inherited: 0x28)
struct UAFE_PowerAttack_C : UAfflictionEffect {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)

	void ReceiveBeginEffect(UPawnAfflictionComponent* Target);
	void ReceiveEndEffect(UPawnAfflictionComponent* Target);
	void ExecuteUbergraph_AFE_PowerAttack(int32_t EntryPoint);
};

