// BlueprintGeneratedClass ENE_Spider_Boss_TwinA.ENE_Spider_Boss_TwinA_C
// Size: 0x5e8 (Inherited: 0x5ba)
struct AENE_Spider_Boss_TwinA_C : AENE_Spider_Boss_TwinBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	UProjectileAttackComponent* Projectile_MinesBarrage; // 0x5c8(0x08)
	UMeleeAttackComponent* MeleeAttack; // 0x5d0(0x08)
	UProjectileAttackComponent* Projectile_Mines; // 0x5d8(0x08)
	UProjectileAttackComponent* Projectile_Fireball; // 0x5e0(0x08)

	void ReceiveBeginPlay();
	void BndEvt__Projectile_MinesBarrage_K2Node_ComponentBoundEvent_1_ProjectileAttackDelegate__DelegateSignature();
	void ExecuteUbergraph_ENE_Spider_Boss_TwinA(int32_t EntryPoint);
};

