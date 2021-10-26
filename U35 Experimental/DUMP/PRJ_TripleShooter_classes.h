// BlueprintGeneratedClass PRJ_TripleShooter.PRJ_TripleShooter_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_TripleShooter_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SK_ShootingPlant_Projectile; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_CactusSpikeTrail1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_CactusSpikeProjectile; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* ImpactParticle; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_TripleShooter(int32_t EntryPoint);
};

