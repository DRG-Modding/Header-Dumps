// BlueprintGeneratedClass ENE_Spider_Boss_TwinA.ENE_Spider_Boss_TwinA_C
// Size: 0x5e8 (Inherited: 0x5ba)
struct AENE_Spider_Boss_TwinA_C : AENE_Spider_Boss_TwinBase_C {
	char UnknownData_5BA[0x6]; // 0x5ba(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UProjectileAttackComponent* Projectile_MinesBarrage; // 0x5c8(0x08)
	struct UMeleeAttackComponent* MeleeAttack; // 0x5d0(0x08)
	struct UProjectileAttackComponent* Projectile_Mines; // 0x5d8(0x08)
	struct UProjectileAttackComponent* Projectile_Fireball; // 0x5e0(0x08)

	void ReceiveBeginPlay(); // Function ENE_Spider_Boss_TwinA.ENE_Spider_Boss_TwinA_C.ReceiveBeginPlay
	void BndEvt__Projectile_MinesBarrage_K2Node_ComponentBoundEvent_1_ProjectileAttackDelegate__DelegateSignature(); // Function ENE_Spider_Boss_TwinA.ENE_Spider_Boss_TwinA_C.BndEvt__Projectile_MinesBarrage_K2Node_ComponentBoundEvent_1_ProjectileAttackDelegate__DelegateSignature
	void ExecuteUbergraph_ENE_Spider_Boss_TwinA(int32_t EntryPoint); // Function ENE_Spider_Boss_TwinA.ENE_Spider_Boss_TwinA_C.ExecuteUbergraph_ENE_Spider_Boss_TwinA
};

