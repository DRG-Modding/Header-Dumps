// BlueprintGeneratedClass PRJ_SentryOvercharge_Projectile.PRJ_SentryOvercharge_Projectile_C
// Size: 0x368 (Inherited: 0x338)
struct APRJ_SentryOvercharge_Projectile_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UParticleSystemComponent* P_GrenadeTrail; // 0x340(0x08)
	USphereComponent* Sphere; // 0x348(0x08)
	UDamageComponent* Damage; // 0x350(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x358(0x08)
	UStaticMeshComponent* mesh_front; // 0x360(0x08)

	void UserConstructionScript();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ReceiveBeginPlay();
	void MakeBouncy();
	void ExecuteUbergraph_PRJ_SentryOvercharge_Projectile(int32_t EntryPoint);
};

