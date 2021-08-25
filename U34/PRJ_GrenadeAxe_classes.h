// BlueprintGeneratedClass PRJ_GrenadeAxe.PRJ_GrenadeAxe_C
// Size: 0x3b8 (Inherited: 0x2f0)
struct APRJ_GrenadeAxe_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* SmallShitDamage; // 0x2f8(0x08)
	struct USphereComponent* KillSmallShits Sphere; // 0x300(0x08)
	struct UDamageComponent* BounceDamage; // 0x308(0x08)
	struct UBoxComponent* Box; // 0x310(0x08)
	struct UDamageComponent* FullDamage; // 0x318(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x320(0x08)
	struct UParticleSystemComponent* Trail; // 0x328(0x08)
	struct UStaticMeshComponent* mesh_front; // 0x330(0x08)
	struct FVector MyStartLocation; // 0x338(0x0c)
	struct FVector MyImpactVelocity; // 0x344(0x0c)
	struct FVector NewVar_1; // 0x350(0x0c)
	char UnknownData_35C[0x4]; // 0x35c(0x04)
	struct TArray<struct AActor*> AlreadyHitList; // 0x360(0x10)
	struct FVector HitNormal; // 0x370(0x0c)
	struct FVector HitLocation; // 0x37c(0x0c)
	struct AThrownGrenadeItem* AxeGrenadeItem; // 0x388(0x08)
	struct AActor* HitActor; // 0x390(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x398(0x08)
	bool CanRetrieve; // 0x3a0(0x01)
	char UnknownData_3A1[0x3]; // 0x3a1(0x03)
	struct FName HitBone; // 0x3a4(0x08)
	bool CanAttach; // 0x3ac(0x01)
	bool PassThroughTarget; // 0x3ad(0x01)
	bool HitTerrain; // 0x3ae(0x01)
	bool ForceDischarge; // 0x3af(0x01)
	struct UFSDPhysicalMaterial* HitPhysMat; // 0x3b0(0x08)

	void UserConstructionScript(); // Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.UserConstructionScript
	void OnImpacted(struct FHitResult HitResult); // Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.OnImpacted
	void Discharge(struct AActor* HitActor, struct UPrimitiveComponent* HitComponent, struct FVector HitLocation, struct UFSDPhysicalMaterial* HitPhysMat); // Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.Discharge
	void BluntDamage(); // Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BluntDamage
	void ReceiveBeginPlay(); // Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ReceiveBeginPlay
	void BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.BndEvt__KillSmallShits Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void ExecuteUbergraph_PRJ_GrenadeAxe(int32_t EntryPoint); // Function PRJ_GrenadeAxe.PRJ_GrenadeAxe_C.ExecuteUbergraph_PRJ_GrenadeAxe
};

