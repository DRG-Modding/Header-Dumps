// BlueprintGeneratedClass PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C
// Size: 0x40c (Inherited: 0x2f0)
struct APRJ_GrenadeLauncher_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UProjectileExplosion* ProjectileExplosionHyper; // 0x2f8(0x08)
	struct UPointLightComponent* PointLight; // 0x300(0x08)
	struct UProjectileExplosion* ProjectileExplosionMiniNuke; // 0x308(0x08)
	struct UParticleSystemComponent* P_GrenadeTrail; // 0x310(0x08)
	struct USphereComponent* Sphere; // 0x318(0x08)
	struct UDamageComponent* Damage; // 0x320(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x328(0x08)
	struct UStaticMeshComponent* mesh_front; // 0x330(0x08)
	float ForcePush; // 0x338(0x04)
	bool Lit; // 0x33c(0x01)
	char UnknownData_33D[0x3]; // 0x33d(0x03)
	float Speed; // 0x340(0x04)
	char UnknownData_344[0x4]; // 0x344(0x04)
	struct FRuntimeFloatCurve KnockbackCurve; // 0x348(0x88)
	bool IsHyper; // 0x3d0(0x01)
	char UnknownData_3D1[0x3]; // 0x3d1(0x03)
	struct FVector HitWorldLocation; // 0x3d4(0x0c)
	struct FName HitBoneName; // 0x3e0(0x08)
	struct AActor* HitActor; // 0x3e8(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x3f0(0x08)
	struct UPhysicalMaterial* HitPMat; // 0x3f8(0x08)
	struct FVector HitNormal; // 0x400(0x0c)

	void LaunchPlayer(struct APlayerCharacter* Player); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.LaunchPlayer
	void OnRep_Lit(); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnRep_Lit
	void UserConstructionScript(); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.UserConstructionScript
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnImpacted
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void MakeBouncy(); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.MakeBouncy
	void Trigger(struct FHitResult HitResult); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.Trigger
	void DoOnSpawn(); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.DoOnSpawn
	void ExecuteUbergraph_PRJ_GrenadeLauncher(int32_t EntryPoint); // Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.ExecuteUbergraph_PRJ_GrenadeLauncher
};

