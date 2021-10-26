// BlueprintGeneratedClass PRJ_RedThorn.PRJ_RedThorn_C
// Size: 0x310 (Inherited: 0x2f0)
struct APRJ_RedThorn_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_CactusSpikeTrail1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_CactusSpikeProjectile; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_RedThorn(int32_t EntryPoint);
};

