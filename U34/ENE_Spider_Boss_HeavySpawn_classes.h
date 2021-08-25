// BlueprintGeneratedClass ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C
// Size: 0x4e8 (Inherited: 0x4b4)
struct AENE_Spider_Boss_HeavySpawn_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UMeleeAttackComponent* CarveAttack; // 0x4c0(0x08)
	struct UAlignEnemyComponent* AlignEnemy; // 0x4c8(0x08)
	struct UCapsuleComponent* Capsule; // 0x4d0(0x08)
	struct UMeleeAttackComponent* BiteAttack; // 0x4d8(0x08)
	struct UMeleeAttackComponent* StabAttack; // 0x4e0(0x08)

	void OnRagdoll(); // Function ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C.OnRagdoll
	void OnDeathBase(); // Function ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C.OnDeathBase
	void OnFrozen(struct AActor* Source); // Function ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C.OnFrozen
	void OnUnFrozen(); // Function ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C.OnUnFrozen
	void Play Frozen Death(); // Function ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C.Play Frozen Death
	void ExecuteUbergraph_ENE_Spider_Boss_HeavySpawn(int32_t EntryPoint); // Function ENE_Spider_Boss_HeavySpawn.ENE_Spider_Boss_HeavySpawn_C.ExecuteUbergraph_ENE_Spider_Boss_HeavySpawn
};

