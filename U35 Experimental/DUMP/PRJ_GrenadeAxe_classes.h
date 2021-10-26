// BlueprintGeneratedClass PRJ_GrenadeAxe.PRJ_GrenadeAxe_C
// Size: 0x400 (Inherited: 0x338)
struct APRJ_GrenadeAxe_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UDamageComponent* SmallShitDamage; // 0x340(0x08)
	USphereComponent* KillSmallShits Sphere; // 0x348(0x08)
	UDamageComponent* BounceDamage; // 0x350(0x08)
	UBoxComponent* Box; // 0x358(0x08)
	UDamageComponent* FullDamage; // 0x360(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x368(0x08)
	UParticleSystemComponent* Trail; // 0x370(0x08)
	UStaticMeshComponent* mesh_front; // 0x378(0x08)
	FVector MyStartLocation; // 0x380(0x0c)
	FVector MyImpactVelocity; // 0x38c(0x0c)
	FVector NewVar_1; // 0x398(0x0c)
	TArray<AActor*> AlreadyHitList; // 0x3a8(0x10)
	FVector HitNormal; // 0x3b8(0x0c)
	FVector HitLocation; // 0x3c4(0x0c)
	AThrownGrenadeItem* AxeGrenadeItem; // 0x3d0(0x08)
	AActor* HitActor; // 0x3d8(0x08)
	UPrimitiveComponent* HitComponent; // 0x3e0(0x08)
	bool CanRetrieve; // 0x3e8(0x01)
	FName HitBone; // 0x3ec(0x08)
	bool CanAttach; // 0x3f4(0x01)
	bool PassThroughTarget; // 0x3f5(0x01)
	bool HitTerrain; // 0x3f6(0x01)
	bool ForceDischarge; // 0x3f7(0x01)
	UFSDPhysicalMaterial* HitPhysMat; // 0x3f8(0x08)

	void UserConstructionScript();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void Discharge(AActor* HitActor, UPrimitiveComponent* HitComponent, FVector HitLocation, UFSDPhysicalMaterial* HitPhysMat);
	void BluntDamage();
	void BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnInitialized();
	void ExecuteUbergraph_PRJ_GrenadeAxe(int32_t EntryPoint);
};

