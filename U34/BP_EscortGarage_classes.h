// BlueprintGeneratedClass BP_EscortGarage.BP_EscortGarage_C
// Size: 0x430 (Inherited: 0x2b0)
struct ABP_EscortGarage_C : ARessuplyPod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UMeshCarverComponent* DroppodImpactCarver1; // 0x2b8(0x08)
	struct UPointLightComponent* PointLight; // 0x2c0(0x08)
	struct UMeshCarverComponent* DroppodImpactCarver; // 0x2c8(0x08)
	struct UPointLightComponent* buttonLight_04; // 0x2d0(0x08)
	struct UPointLightComponent* buttonLight_03; // 0x2d8(0x08)
	struct UPointLightComponent* buttonLight_02; // 0x2e0(0x08)
	struct UPointLightComponent* buttonLight_01; // 0x2e8(0x08)
	struct UStaticMeshComponent* ButtonMesh; // 0x2f0(0x08)
	struct UStaticMeshComponent* ButtonMesh3; // 0x2f8(0x08)
	struct UStaticMeshComponent* ButtonMesh2; // 0x300(0x08)
	struct UStaticMeshComponent* ButtonMesh1; // 0x308(0x08)
	struct USceneComponent* buttons; // 0x310(0x08)
	struct USceneComponent* DrillDozerSpawnPoint; // 0x318(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x320(0x08)
	struct UPointLightComponent* PointLight_FlapBack1; // 0x328(0x08)
	struct UPointLightComponent* PointLight_FlapBack0; // 0x330(0x08)
	struct UPointLightComponent* PointLight_FlapLeft1; // 0x338(0x08)
	struct UPointLightComponent* PointLight_FlapLeft0; // 0x340(0x08)
	struct UPointLightComponent* PointLight_FlapRight1; // 0x348(0x08)
	struct UPointLightComponent* PointLight_FlapRight0; // 0x350(0x08)
	struct UPointLightComponent* PointLight_FlapFront1; // 0x358(0x08)
	struct UPointLightComponent* PointLight_FlapFront0; // 0x360(0x08)
	struct UPointLightComponent* PointLight_Inside3; // 0x368(0x08)
	struct UPointLightComponent* PointLight_Inside2; // 0x370(0x08)
	struct UPointLightComponent* PointLight_Inside1; // 0x378(0x08)
	struct UPointLightComponent* PointLight_Inside0; // 0x380(0x08)
	struct UBoxComponent* CollisionDecending; // 0x388(0x08)
	struct USphereComponent* Sphere3; // 0x390(0x08)
	struct USphereComponent* Sphere2; // 0x398(0x08)
	struct USphereComponent* Sphere1; // 0x3a0(0x08)
	struct UOutlineComponent* outline; // 0x3a8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x3b0(0x08)
	struct USceneComponent* RespawnLocation; // 0x3b8(0x08)
	struct USkeletalMeshComponent* SK_DrillDozerGarage; // 0x3c0(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x3c8(0x08)
	struct UBoxComponent* Box; // 0x3d0(0x08)
	struct UAutoCarverComponent* AutoCarver; // 0x3d8(0x08)
	struct USingleUsableComponent* SingleUsable; // 0x3e0(0x08)
	struct USphereComponent* Sphere; // 0x3e8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x3f0(0x08)
	struct USkeletalMeshComponent* Drill; // 0x3f8(0x08)
	struct AActor* EscortMuleClass; // 0x400(0x08)
	bool HasBeenOpened; // 0x408(0x01)
	char UnknownData_409[0x7]; // 0x409(0x07)
	struct UParticleSystemComponent* DrillParticles01; // 0x410(0x08)
	struct UParticleSystemComponent* DrillParticles02; // 0x418(0x08)
	struct AEscortMule* SpawnedMule; // 0x420(0x08)
	struct UStaticMeshComponent* NewVar_1; // 0x428(0x08)

	void OnRep_HasBeenOpened(); // Function BP_EscortGarage.BP_EscortGarage_C.OnRep_HasBeenOpened
	void ReceiveBeginPlay(); // Function BP_EscortGarage.BP_EscortGarage_C.ReceiveBeginPlay
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_EscortGarage.BP_EscortGarage_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void OnDroppodImpact(); // Function BP_EscortGarage.BP_EscortGarage_C.OnDroppodImpact
	void OnDropStarted(); // Function BP_EscortGarage.BP_EscortGarage_C.OnDropStarted
	void ReceiveTick(float DeltaSeconds); // Function BP_EscortGarage.BP_EscortGarage_C.ReceiveTick
	void BndEvt__Damage_K2Node_ComponentBoundEvent_1_OnEnemyKilledDelegate__DelegateSignature(struct AActor* Target, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function BP_EscortGarage.BP_EscortGarage_C.BndEvt__Damage_K2Node_ComponentBoundEvent_1_OnEnemyKilledDelegate__DelegateSignature
	void ExecuteUbergraph_BP_EscortGarage(int32_t EntryPoint); // Function BP_EscortGarage.BP_EscortGarage_C.ExecuteUbergraph_BP_EscortGarage
};

