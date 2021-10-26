// BlueprintGeneratedClass PRJ_ShootingPlant.PRJ_ShootingPlant_C
// Size: 0x340 (Inherited: 0x2f0)
struct APRJ_ShootingPlant_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) URotatingMovementComponent* RotatingMovement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SK_ShootingPlant_Projectile; 
	UPROPERTY(BlueprintReadWrite) UProjectileExplosion* ProjectileExplosion; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleComponent; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void GoBoom();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_ShootingPlant(int32_t EntryPoint);
};

