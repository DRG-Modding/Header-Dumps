// BlueprintGeneratedClass BP_Boss_AoEAttack.BP_Boss_AoEAttack_C
// Size: 0x140 (Inherited: 0x128)
struct UBP_Boss_AoEAttack_C : USpecialDamageAttackComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x128(0x08)
	struct TArray<struct UAnimMontage*> SPMontages; // 0x130(0x10)

	struct UAnimMontage* SelectMontage(); // Function BP_Boss_AoEAttack.BP_Boss_AoEAttack_C.SelectMontage
	void Receive_OnPerformAttack(); // Function BP_Boss_AoEAttack.BP_Boss_AoEAttack_C.Receive_OnPerformAttack
	void ExecuteUbergraph_BP_Boss_AoEAttack(int32_t EntryPoint); // Function BP_Boss_AoEAttack.BP_Boss_AoEAttack_C.ExecuteUbergraph_BP_Boss_AoEAttack
};

