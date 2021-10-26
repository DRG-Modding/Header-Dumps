// BlueprintGeneratedClass ENE_Spider_Spitter.ENE_Spider_Spitter_C
// Size: 0x4e0 (Inherited: 0x4b4)
struct AENE_Spider_Spitter_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* ProjectileAttack; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* SpiderSpitterIdle_Cue; 
	UPROPERTY(BlueprintReadWrite) USimpleArmorDamageComponent* SimpleArmorDamage; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 

	UFUNCTION(BlueprintCallable) void GetEnemySpawnedCount(int32_t SpawnCount);
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Spitter(int32_t EntryPoint);
};

