// BlueprintGeneratedClass ENE_Spider_Spitter.ENE_Spider_Spitter_C
// Size: 0x4e0 (Inherited: 0x4b4)
struct AENE_Spider_Spitter_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	UProjectileAttackComponent* ProjectileAttack; // 0x4c0(0x08)
	UAudioComponent* SpiderSpitterIdle_Cue; // 0x4c8(0x08)
	USimpleArmorDamageComponent* SimpleArmorDamage; // 0x4d0(0x08)
	USphereComponent* Sphere; // 0x4d8(0x08)

	void GetEnemySpawnedCount(int32_t SpawnCount);
	void OnRagdoll();
	void OnDeathBase();
	void ExecuteUbergraph_ENE_Spider_Spitter(int32_t EntryPoint);
};

