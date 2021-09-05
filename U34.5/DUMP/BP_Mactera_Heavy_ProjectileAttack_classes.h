// BlueprintGeneratedClass BP_Mactera_Heavy_ProjectileAttack.BP_Mactera_Heavy_ProjectileAttack_C
// Size: 0x191 (Inherited: 0x180)
struct UBP_Mactera_Heavy_ProjectileAttack_C : UProjectileAttackComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	UAnimMontage* BrokenAmorMontage; // 0x188(0x08)
	bool ArmorBroken; // 0x190(0x01)

	void SetArmorBroken(bool Broken);
	UAnimMontage* SelectMontage();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Mactera_Heavy_ProjectileAttack(int32_t EntryPoint);
};

