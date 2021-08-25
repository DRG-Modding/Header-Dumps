// BlueprintGeneratedClass PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C
// Size: 0x31c (Inherited: 0x2f0)
struct APRJ_NormalBlasterShot_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x2f8(0x08)
	struct UDamageComponent* Damage; // 0x300(0x08)
	struct UPointLightComponent* PointLight; // 0x308(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x310(0x08)
	int32_t MaxBounces; // 0x318(0x04)

	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.OnImpacted
	void MakeBouncy(); // Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.MakeBouncy
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	void DoEffects(struct FVector Location, struct FVector Normal); // Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.DoEffects
	void ExecuteUbergraph_PRJ_NormalBlasterShot(int32_t EntryPoint); // Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.ExecuteUbergraph_PRJ_NormalBlasterShot
};

