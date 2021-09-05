// BlueprintGeneratedClass ENE_Spider_Shooter.ENE_Spider_Shooter_C
// Size: 0x4d8 (Inherited: 0x4b4)
struct AENE_Spider_Shooter_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	USimpleArmorDamageComponent* SimpleArmorDamage; // 0x4c0(0x08)
	USphereComponent* Sphere; // 0x4c8(0x08)
	AActor* Target; // 0x4d0(0x08)

	void GetEnemySpawnedCount(int32_t SpawnCount);
	void OnRep_Target();
	void OnRagdoll();
	void OnDeathBase();
	void ExecuteUbergraph_ENE_Spider_Shooter(int32_t EntryPoint);
};

