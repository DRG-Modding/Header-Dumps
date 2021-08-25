// BlueprintGeneratedClass BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C
// Size: 0x2b4 (Inherited: 0x220)
struct ABP_GunkSeed_Hanger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* AoeOverlapSphere; // 0x228(0x08)
	struct UHealthDamageTracker* HealthDamageTracker; // 0x230(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x248(0x08)
	struct UPointLightComponent* PointLight; // 0x250(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x258(0x08)
	struct USceneComponent* Root; // 0x260(0x08)
	struct UInstantUsable* InstantUsable; // 0x268(0x08)
	struct USphereComponent* Sphere; // 0x270(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x278(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x280(0x08)
	float MinForce; // 0x288(0x04)
	float MaxForce; // 0x28c(0x04)
	struct FVector EndPointOffset; // 0x290(0x0c)
	bool HasSeed; // 0x29c(0x01)
	char UnknownData_29D[0x3]; // 0x29d(0x03)
	struct ABP_GunkSeed_C* GunkSeed; // 0x2a0(0x08)
	struct FVector SlapForce; // 0x2a8(0x0c)

	void OnRep_SlapForce(); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.OnRep_SlapForce
	void OnRep_HasSeed(); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.OnRep_HasSeed
	void DropSeed(); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.DropSeed
	void ReceiveBeginPlay(); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.ReceiveBeginPlay
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, struct UPrimitiveComponent* Component, struct UFSDPhysicalMaterial* PhysMat, struct FName BoneName); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
	void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float amount); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature
	void ExecuteUbergraph_BP_GunkSeed_Hanger(int32_t EntryPoint); // Function BP_GunkSeed_Hanger.BP_GunkSeed_Hanger_C.ExecuteUbergraph_BP_GunkSeed_Hanger
};

