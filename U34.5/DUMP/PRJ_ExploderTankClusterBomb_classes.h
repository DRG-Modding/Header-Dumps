// BlueprintGeneratedClass PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C
// Size: 0x329 (Inherited: 0x2f0)
struct APRJ_ExploderTankClusterBomb_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* Damage; // 0x2f8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x300(0x08)
	UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x308(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x310(0x08)
	float FuseTime; // 0x318(0x04)
	float BurnThickness; // 0x31c(0x04)
	UTerrainMaterial* OverrideMaterial; // 0x320(0x08)
	bool HasExploded; // 0x328(0x01)

	void Explode(FVector Location);
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void GoBoom();
	void ReceiveBeginPlay();
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void ExecuteUbergraph_PRJ_ExploderTankClusterBomb(int32_t EntryPoint);
};

