// BlueprintGeneratedClass PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C
// Size: 0x329 (Inherited: 0x2f0)
struct APRJ_ExploderTankClusterBomb_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SK_ShootingPlant_Projectile; 
	UPROPERTY(BlueprintReadWrite) UProjectileExplosion* ProjectileExplosion; 
	UPROPERTY(BlueprintReadWrite) float FuseTime; 
	UPROPERTY(BlueprintReadWrite) float BurnThickness; 
	UPROPERTY(BlueprintReadWrite) UTerrainMaterial* OverrideMaterial; 
	UPROPERTY(BlueprintReadWrite) bool HasExploded; 

	UFUNCTION(BlueprintCallable) void Explode(FVector Location);
	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void GoBoom();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_ExploderTankClusterBomb(int32_t EntryPoint);
};

