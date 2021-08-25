// BlueprintGeneratedClass PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C
// Size: 0x329 (Inherited: 0x2f0)
struct APRJ_ExploderTankClusterBomb_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* Damage; // 0x2f8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x300(0x08)
	struct UStaticMeshComponent* SK_ShootingPlant_Projectile; // 0x308(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x310(0x08)
	float FuseTime; // 0x318(0x04)
	float BurnThickness; // 0x31c(0x04)
	struct UTerrainMaterial* OverrideMaterial; // 0x320(0x08)
	bool HasExploded; // 0x328(0x01)

	void Explode(struct FVector Location); // Function PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C.Explode
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C.OnImpacted
	void GoBoom(); // Function PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C.GoBoom
	void ReceiveBeginPlay(); // Function PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C.ReceiveBeginPlay
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	void ExecuteUbergraph_PRJ_ExploderTankClusterBomb(int32_t EntryPoint); // Function PRJ_ExploderTankClusterBomb.PRJ_ExploderTankClusterBomb_C.ExecuteUbergraph_PRJ_ExploderTankClusterBomb
};

