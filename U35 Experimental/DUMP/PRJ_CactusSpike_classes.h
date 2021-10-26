// BlueprintGeneratedClass PRJ_CactusSpike.PRJ_CactusSpike_C
// Size: 0x310 (Inherited: 0x2f0)
struct APRJ_CactusSpike_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_CactusSpikeTrail1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_CactusSpikeProjectile; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_CactusSpike(int32_t EntryPoint);
};

