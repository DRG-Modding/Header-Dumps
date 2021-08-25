// BlueprintGeneratedClass ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C
// Size: 0x4f0 (Inherited: 0x4b4)
struct AENE_Spider_RapidShooter_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UProjectileAttackComponent* ProjectileAttack; // 0x4c0(0x08)
	struct UCapsuleComponent* Capsule; // 0x4c8(0x08)
	struct UArmorHealthDamageComponent* ArmorHealthDamage; // 0x4d0(0x08)
	struct UPointLightComponent* PointLight; // 0x4d8(0x08)
	struct UBP_BurrowComponent_C* BP_BurrowComponent; // 0x4e0(0x08)
	struct AActor* Target; // 0x4e8(0x08)

	void OnRep_Target(); // Function ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C.OnRep_Target
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature(); // Function ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C.BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_0_OnUnBurrow__DelegateSignature
	void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature(); // Function ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C.BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrow__DelegateSignature
	void OnDeathBase(); // Function ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C.OnDeathBase
	void OnRagdoll(); // Function ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C.OnRagdoll
	void ExecuteUbergraph_ENE_Spider_RapidShooter(int32_t EntryPoint); // Function ENE_Spider_RapidShooter.ENE_Spider_RapidShooter_C.ExecuteUbergraph_ENE_Spider_RapidShooter
};

