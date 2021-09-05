// BlueprintGeneratedClass PRJ_GrenadeAxe.PRJ_GrenadeAxe_C
// Size: 0x3b8 (Inherited: 0x2f0)
struct APRJ_GrenadeAxe_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* SmallShitDamage; // 0x2f8(0x08)
	USphereComponent* KillSmallShits Sphere; // 0x300(0x08)
	UDamageComponent* BounceDamage; // 0x308(0x08)
	UBoxComponent* Box; // 0x310(0x08)
	UDamageComponent* FullDamage; // 0x318(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x320(0x08)
	UParticleSystemComponent* Trail; // 0x328(0x08)
	UStaticMeshComponent* mesh_front; // 0x330(0x08)
	FVector MyStartLocation; // 0x338(0x0c)
	FVector MyImpactVelocity; // 0x344(0x0c)
	FVector NewVar_1; // 0x350(0x0c)
	TArray<AActor*> AlreadyHitList; // 0x360(0x10)
	FVector HitNormal; // 0x370(0x0c)
	FVector HitLocation; // 0x37c(0x0c)
	AThrownGrenadeItem* AxeGrenadeItem; // 0x388(0x08)
	AActor* HitActor; // 0x390(0x08)
	UPrimitiveComponent* HitComponent; // 0x398(0x08)
	bool CanRetrieve; // 0x3a0(0x01)
	FName HitBone; // 0x3a4(0x08)
	bool CanAttach; // 0x3ac(0x01)
	bool PassThroughTarget; // 0x3ad(0x01)
	bool HitTerrain; // 0x3ae(0x01)
	bool ForceDischarge; // 0x3af(0x01)
	UFSDPhysicalMaterial* HitPhysMat; // 0x3b0(0x08)

	void UserConstructionScript();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void Discharge(AActor* HitActor, UPrimitiveComponent* HitComponent, FVector HitLocation, UFSDPhysicalMaterial* HitPhysMat);
	void BluntDamage();
	void BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnInitialized();
	void ExecuteUbergraph_PRJ_GrenadeAxe(int32_t EntryPoint);
};

