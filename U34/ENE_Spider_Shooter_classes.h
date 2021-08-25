// BlueprintGeneratedClass ENE_Spider_Shooter.ENE_Spider_Shooter_C
// Size: 0x4d8 (Inherited: 0x4b4)
struct AENE_Spider_Shooter_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct USimpleArmorDamageComponent* SimpleArmorDamage; // 0x4c0(0x08)
	struct USphereComponent* Sphere; // 0x4c8(0x08)
	struct AActor* Target; // 0x4d0(0x08)

	void GetEnemySpawnedCount(int32_t SpawnCount); // Function ENE_Spider_Shooter.ENE_Spider_Shooter_C.GetEnemySpawnedCount
	void OnRep_Target(); // Function ENE_Spider_Shooter.ENE_Spider_Shooter_C.OnRep_Target
	void OnRagdoll(); // Function ENE_Spider_Shooter.ENE_Spider_Shooter_C.OnRagdoll
	void OnDeathBase(); // Function ENE_Spider_Shooter.ENE_Spider_Shooter_C.OnDeathBase
	void ExecuteUbergraph_ENE_Spider_Shooter(int32_t EntryPoint); // Function ENE_Spider_Shooter.ENE_Spider_Shooter_C.ExecuteUbergraph_ENE_Spider_Shooter
};

