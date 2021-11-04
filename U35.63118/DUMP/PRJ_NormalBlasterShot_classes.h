// BlueprintGeneratedClass PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C
// Size: 0x364 (Inherited: 0x338)
struct APRJ_NormalBlasterShot_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x340(0x08)
	UDamageComponent* Damage; // 0x348(0x08)
	UPointLightComponent* PointLight; // 0x350(0x08)
	UStaticMeshComponent* StaticMesh; // 0x358(0x08)
	int32_t MaxBounces; // 0x360(0x04)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void MakeBouncy();
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void DoEffects(FVector Location, FVector Normal);
	void OnPenetrated(bool PredictedPenetration, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_NormalBlasterShot(int32_t EntryPoint);
};

