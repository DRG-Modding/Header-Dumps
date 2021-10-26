// BlueprintGeneratedClass PRJ_Mactera_Shooter.PRJ_Mactera_Shooter_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Mactera_Shooter_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_CactusSpikeTrail1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_CactusSpikeProjectile; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* ImpactParticle; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Mactera_Shooter(int32_t EntryPoint);
};

