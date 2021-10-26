// BlueprintGeneratedClass PRJ_Spider_RapidShooter.PRJ_Spider_RapidShooter_C
// Size: 0x318 (Inherited: 0x2f0)
struct APRJ_Spider_RapidShooter_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SK_ShootingPlant_Projectile; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleComponent; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Spider_RapidShooter(int32_t EntryPoint);
};

