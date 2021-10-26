// BlueprintGeneratedClass PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C
// Size: 0x454 (Inherited: 0x338)
struct APRJ_GrenadeLauncher_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UProjectileExplosion* ProjectileExplosionHyper; // 0x340(0x08)
	UPointLightComponent* PointLight; // 0x348(0x08)
	UProjectileExplosion* ProjectileExplosionMiniNuke; // 0x350(0x08)
	UParticleSystemComponent* P_GrenadeTrail; // 0x358(0x08)
	USphereComponent* Sphere; // 0x360(0x08)
	UDamageComponent* Damage; // 0x368(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x370(0x08)
	UStaticMeshComponent* mesh_front; // 0x378(0x08)
	float ForcePush; // 0x380(0x04)
	bool Lit; // 0x384(0x01)
	float Speed; // 0x388(0x04)
	FRuntimeFloatCurve KnockbackCurve; // 0x390(0x88)
	bool IsHyper; // 0x418(0x01)
	FVector HitWorldLocation; // 0x41c(0x0c)
	FName HitBoneName; // 0x428(0x08)
	AActor* HitActor; // 0x430(0x08)
	UPrimitiveComponent* HitComponent; // 0x438(0x08)
	UPhysicalMaterial* HitPMat; // 0x440(0x08)
	FVector HitNormal; // 0x448(0x0c)

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

