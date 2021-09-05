// BlueprintGeneratedClass ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C
// Size: 0x4e8 (Inherited: 0x4b4)
struct AENE_Spider_Boss_HeavySpawn_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	UMeleeAttackComponent* CarveAttack; // 0x4c0(0x08)
	UAlignEnemyComponent* AlignEnemy; // 0x4c8(0x08)
	UCapsuleComponent* Capsule; // 0x4d0(0x08)
	UMeleeAttackComponent* BiteAttack; // 0x4d8(0x08)
	UMeleeAttackComponent* StabAttack; // 0x4e0(0x08)

	void OnRagdoll();
	void OnDeathBase();
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void Play Frozen Death();
	void ExecuteUbergraph_ENE_Spider_Boss_HeavySpawn(int32_t EntryPoint);
};

