// BlueprintGeneratedClass PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C
// Size: 0x32c (Inherited: 0x2f0)
struct APRJ_Spider_Tank_Boss_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UProjectileExplosion* ProjectileExplosion; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleComponent; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) float LightIntensity; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Spider_Tank_Boss(int32_t EntryPoint);
};

