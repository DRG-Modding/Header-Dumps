// BlueprintGeneratedClass BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C
// Size: 0x2b4 (Inherited: 0x220)
struct ABP_GunkSeed_Hanger_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USphereComponent* AoeOverlapSphere; // 0x228(0x08)
	UHealthDamageTracker* HealthDamageTracker; // 0x230(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x248(0x08)
	UPointLightComponent* PointLight; // 0x250(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x258(0x08)
	USceneComponent* Root; // 0x260(0x08)
	UInstantUsable* InstantUsable; // 0x268(0x08)
	USphereComponent* Sphere; // 0x270(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x278(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x280(0x08)
	float MinForce; // 0x288(0x04)
	float MaxForce; // 0x28c(0x04)
	FVector EndPointOffset; // 0x290(0x0c)
	bool HasSeed; // 0x29c(0x01)
	ABP_GunkSeed_C* GunkSeed; // 0x2a0(0x08)
	FVector SlapForce; // 0x2a8(0x0c)

	void OnRep_SlapForce();
	void OnRep_HasSeed();
	void DropSeed();
	void ReceiveBeginPlay();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float amount);
	void ExecuteUbergraph_BP_GunkSeed_Hanger(int32_t EntryPoint);
};

