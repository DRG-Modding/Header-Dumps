// BlueprintGeneratedClass ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C
// Size: 0x4f0 (Inherited: 0x4b4)
struct AENE_Spider_RapidShooter_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	UProjectileAttackComponent* ProjectileAttack; // 0x4c0(0x08)
	UCapsuleComponent* Capsule; // 0x4c8(0x08)
	UArmorHealthDamageComponent* ArmorHealthDamage; // 0x4d0(0x08)
	UPointLightComponent* PointLight; // 0x4d8(0x08)
	UBP_BurrowComponent_C* BP_BurrowComponent; // 0x4e0(0x08)
	AActor* Target; // 0x4e8(0x08)

	void OnRep_Target();
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature();
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature();
	void OnDeathBase();
	void OnRagdoll();
	void ExecuteUbergraph_ENE_Spider_RapidShooter(int32_t EntryPoint);
};

