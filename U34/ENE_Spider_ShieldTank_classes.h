// BlueprintGeneratedClass ENE_Spider_ShieldTank.ENE_Spider_ShieldTank_C
// Size: 0x580 (Inherited: 0x53c)
struct AENE_Spider_ShieldTank_C : AENE_Spider_Tank_Base_C {
	char UnknownData_53C[0x4]; // 0x53c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UMeleeAttackComponent* CarveAttack; // 0x548(0x08)
	struct UMeleeAttackComponent* GroundSlam; // 0x550(0x08)
	struct UMeleeAttackComponent* MeleeAttack; // 0x558(0x08)
	struct UParticleSystemComponent* TremorParticles; // 0x560(0x08)
	struct UTremorAttackComponent* TremorAttack; // 0x568(0x08)
	struct UBoxComponent* Box; // 0x570(0x08)
	struct UAlignEnemyComponent* AlignEnemy; // 0x578(0x08)

	void UserConstructionScript(); // Function ENE_Spider_ShieldTank.ENE_Spider_ShieldTank_C.UserConstructionScript
	void BndEvt__GroundSlamDamage_K2Node_ComponentBoundEvent_0_OnEnemyDamagedDelegate__DelegateSignature(struct UHealthComponentBase* Health, float amount, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_Spider_ShieldTank.ENE_Spider_ShieldTank_C.BndEvt__GroundSlamDamage_K2Node_ComponentBoundEvent_0_OnEnemyDamagedDelegate__DelegateSignature
	void All_PlayImpactSound(struct AActor* Actor); // Function ENE_Spider_ShieldTank.ENE_Spider_ShieldTank_C.All_PlayImpactSound
	void ExecuteUbergraph_ENE_Spider_ShieldTank(int32_t EntryPoint); // Function ENE_Spider_ShieldTank.ENE_Spider_ShieldTank_C.ExecuteUbergraph_ENE_Spider_ShieldTank
};

