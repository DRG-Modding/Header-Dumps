// BlueprintGeneratedClass PRJ_HydraWeedSpawn.PRJ_HydraWeedSpawn_C
// Size: 0x328 (Inherited: 0x300)
struct APRJ_HydraWeedSpawn_C : AHydraWeedSpawnProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* SeedImpactParticles; 
	UPROPERTY(BlueprintReadWrite) USoundBase* SeedImpactSound; 

	UFUNCTION(BlueprintCallable) bool NewFunction_1();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_HydraWeedSpawn(int32_t EntryPoint);
};

