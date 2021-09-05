// BlueprintGeneratedClass PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C
// Size: 0x320 (Inherited: 0x2f0)
struct APRJ_SentryOvercharge_Projectile_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UParticleSystemComponent* P_GrenadeTrail; // 0x2f8(0x08)
	USphereComponent* Sphere; // 0x300(0x08)
	UDamageComponent* Damage; // 0x308(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x310(0x08)
	UStaticMeshComponent* mesh_front; // 0x318(0x08)

	void UserConstructionScript();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ReceiveBeginPlay();
	void MakeBouncy();
	void ExecuteUbergraph_PRJ_SentryOvercharge_Projectile(int32_t EntryPoint);
};

