// BlueprintGeneratedClass PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C
// Size: 0x40c (Inherited: 0x2f0)
struct APRJ_GrenadeLauncher_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UProjectileExplosion* ProjectileExplosionHyper; // 0x2f8(0x08)
	UPointLightComponent* PointLight; // 0x300(0x08)
	UProjectileExplosion* ProjectileExplosionMiniNuke; // 0x308(0x08)
	UParticleSystemComponent* P_GrenadeTrail; // 0x310(0x08)
	USphereComponent* Sphere; // 0x318(0x08)
	UDamageComponent* Damage; // 0x320(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x328(0x08)
	UStaticMeshComponent* mesh_front; // 0x330(0x08)
	float ForcePush; // 0x338(0x04)
	bool Lit; // 0x33c(0x01)
	float Speed; // 0x340(0x04)
	FRuntimeFloatCurve KnockbackCurve; // 0x348(0x88)
	bool IsHyper; // 0x3d0(0x01)
	FVector HitWorldLocation; // 0x3d4(0x0c)
	FName HitBoneName; // 0x3e0(0x08)
	AActor* HitActor; // 0x3e8(0x08)
	UPrimitiveComponent* HitComponent; // 0x3f0(0x08)
	UPhysicalMaterial* HitPMat; // 0x3f8(0x08)
	FVector HitNormal; // 0x400(0x0c)

	void LaunchPlayer(APlayerCharacter* Player);
	void OnRep_Lit();
	void UserConstructionScript();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void MakeBouncy();
	void Trigger(FHitResult HitResult);
	void DoOnSpawn();
	void ExecuteUbergraph_PRJ_GrenadeLauncher(int32_t EntryPoint);
};

