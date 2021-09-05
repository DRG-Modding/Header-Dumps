// BlueprintGeneratedClass ENE_Mactera_Shooter_HeavyVeteran.ENE_Mactera_Shooter_HeavyVeteran_C
// Size: 0x4b9 (Inherited: 0x4a0)
struct AENE_Mactera_Shooter_HeavyVeteran_C : AENE_Mactera_Shooter_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	UBP_Mactera_Heavy_ProjectileAttack_C* Mactera_Heavy_ProjectileAttack; // 0x4a8(0x08)
	UArmorHealthDamageComponent* ArmorHealthDamage; // 0x4b0(0x08)
	bool DoEliteExplosion; // 0x4b8(0x01)

	void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
	void MakeElite();
	void Death_Normal();
	void ExecuteUbergraph_ENE_Mactera_Shooter_HeavyVeteran(int32_t EntryPoint);
};

