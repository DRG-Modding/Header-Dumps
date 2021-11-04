// BlueprintGeneratedClass PRJ_BigGooProjectile.PRJ_BigGooProjectile_C
// Size: 0x3c0 (Inherited: 0x3a8)
struct APRJ_BigGooProjectile_C : APRJ_BaseBigGooProjectile_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	float ClusterEjectionForce; // 0x3b0(0x04)
	AProjectileBase* FragmentClass; // 0x3b8(0x08)

	void SpawnSmallGoo(FVector InVec);
	void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
	void OnInitialized();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void IncreaseChargeSize();
	void SpawnSmallGooBalls(FVector ImpactNormal);
	void ExecuteUbergraph_PRJ_BigGooProjectile(int32_t EntryPoint);
};

