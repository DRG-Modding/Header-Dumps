// BlueprintGeneratedClass ENE_Spider_Spitter.ENE_Spider_Spitter_C
// Size: 0x4e0 (Inherited: 0x4b4)
struct AENE_Spider_Spitter_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UProjectileAttackComponent* ProjectileAttack; // 0x4c0(0x08)
	struct UAudioComponent* SpiderSpitterIdle_Cue; // 0x4c8(0x08)
	struct USimpleArmorDamageComponent* SimpleArmorDamage; // 0x4d0(0x08)
	struct USphereComponent* Sphere; // 0x4d8(0x08)

	void GetEnemySpawnedCount(int32_t SpawnCount); // Function ENE_Spider_Spitter.ENE_Spider_Spitter_C.GetEnemySpawnedCount
	void OnRagdoll(); // Function ENE_Spider_Spitter.ENE_Spider_Spitter_C.OnRagdoll
	void OnDeathBase(); // Function ENE_Spider_Spitter.ENE_Spider_Spitter_C.OnDeathBase
	void ExecuteUbergraph_ENE_Spider_Spitter(int32_t EntryPoint); // Function ENE_Spider_Spitter.ENE_Spider_Spitter_C.ExecuteUbergraph_ENE_Spider_Spitter
};

