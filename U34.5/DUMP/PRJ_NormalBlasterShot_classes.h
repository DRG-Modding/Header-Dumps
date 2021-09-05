// BlueprintGeneratedClass PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C
// Size: 0x31c (Inherited: 0x2f0)
struct APRJ_NormalBlasterShot_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x2f8(0x08)
	UDamageComponent* Damage; // 0x300(0x08)
	UPointLightComponent* PointLight; // 0x308(0x08)
	UStaticMeshComponent* StaticMesh; // 0x310(0x08)
	int32_t MaxBounces; // 0x318(0x04)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void MakeBouncy();
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void DoEffects(FVector Location, FVector Normal);
	void ExecuteUbergraph_PRJ_NormalBlasterShot(int32_t EntryPoint);
};

