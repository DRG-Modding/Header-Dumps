// BlueprintGeneratedClass PRJ_Spider_Shooter.PRJ_Spider_Shooter_C
// Size: 0x31c (Inherited: 0x2f0)
struct APRJ_Spider_Shooter_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SK_ShootingPlant_Projectile; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleComponent; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) float Damageold; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Spider_Shooter(int32_t EntryPoint);
};

