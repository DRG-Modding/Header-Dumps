// BlueprintGeneratedClass PRJ_Spider_Tank_Boss_Eggshot.PRJ_Spider_Tank_Boss_Eggshot_C
// Size: 0x34c (Inherited: 0x2f0)
struct APRJ_Spider_Tank_Boss_Eggshot_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) URotatingMovementComponent* RotatingMovement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Egg; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UProjectileExplosion* ProjectileExplosion; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Particle_Smoke; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) float LightIntensity; 
	UPROPERTY(BlueprintReadWrite) UEnemyDescriptor* EnemyToSpawn; 
	UPROPERTY(BlueprintReadWrite) int32_t SpawnAmount; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot(int32_t EntryPoint);
};

