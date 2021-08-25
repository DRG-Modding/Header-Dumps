// BlueprintGeneratedClass PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_SentryOvercharge_Projectile_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UParticleSystemComponent* P_GrenadeTrail; // 0x2f8(0x08)
	struct USphereComponent* Sphere; // 0x300(0x08)
	struct UDamageComponent* Damage; // 0x308(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x310(0x08)
	struct UStaticMeshComponent* mesh_front; // 0x318(0x08)

	void UserConstructionScript(); // Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.UserConstructionScript
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.OnImpacted
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ReceiveBeginPlay
	void MakeBouncy(); // Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.MakeBouncy
	void ExecuteUbergraph_PRJ_SentryOvercharge_Projectile(int32_t EntryPoint); // Function PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C.ExecuteUbergraph_PRJ_SentryOvercharge_Projectile
};

