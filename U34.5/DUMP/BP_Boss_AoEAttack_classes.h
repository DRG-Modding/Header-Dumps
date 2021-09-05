// BlueprintGeneratedClass BP_Boss_AoEAttack.BP_Boss_AoEAttack_C
// Size: 0x140 (Inherited: 0x128)
struct UBP_Boss_AoEAttack_C : USpecialDamageAttackComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x128(0x08)
	TArray<UAnimMontage*> SPMontages; // 0x130(0x10)

	UAnimMontage* SelectMontage();
	void Receive_OnPerformAttack();
	void ExecuteUbergraph_BP_Boss_AoEAttack(int32_t EntryPoint);
};

