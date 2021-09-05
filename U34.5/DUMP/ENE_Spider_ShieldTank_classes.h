// BlueprintGeneratedClass ENE_Spider_ShieldTank.ENE_Spider_ShieldTank_C
// Size: 0x580 (Inherited: 0x53c)
struct AENE_Spider_ShieldTank_C : AENE_Spider_Tank_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	UMeleeAttackComponent* CarveAttack; // 0x548(0x08)
	UMeleeAttackComponent* GroundSlam; // 0x550(0x08)
	UMeleeAttackComponent* MeleeAttack; // 0x558(0x08)
	UParticleSystemComponent* TremorParticles; // 0x560(0x08)
	UTremorAttackComponent* TremorAttack; // 0x568(0x08)
	UBoxComponent* Box; // 0x570(0x08)
	UAlignEnemyComponent* AlignEnemy; // 0x578(0x08)

	void UserConstructionScript();
	void BndEvt__GroundSlamDamage_K2Node_ComponentBoundEvent_0_OnEnemyDamagedDelegate__DelegateSignature(UHealthComponentBase* Health, float amount, UFSDPhysicalMaterial* PhysicalMaterial);
	void All_PlayImpactSound(AActor* Actor);
	void ExecuteUbergraph_ENE_Spider_ShieldTank(int32_t EntryPoint);
};

