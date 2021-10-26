// BlueprintGeneratedClass ENE_Spider_Shooter.ENE_Spider_Shooter_C
// Size: 0x4d8 (Inherited: 0x4b4)
struct AENE_Spider_Shooter_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleArmorDamageComponent* SimpleArmorDamage; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) AActor* Target; 

	UFUNCTION(BlueprintCallable) void GetEnemySpawnedCount(int32_t SpawnCount);
	UFUNCTION(BlueprintCallable) void OnRep_Target();
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Shooter(int32_t EntryPoint);
};

