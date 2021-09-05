// BlueprintGeneratedClass BP_EscortGarage.BP_EscortGarage_C
// Size: 0x430 (Inherited: 0x2b0)
struct ABP_EscortGarage_C : ARessuplyPod {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	UMeshCarverComponent* DroppodImpactCarver1; // 0x2b8(0x08)
	UPointLightComponent* PointLight; // 0x2c0(0x08)
	UMeshCarverComponent* DroppodImpactCarver; // 0x2c8(0x08)
	UPointLightComponent* buttonLight_04; // 0x2d0(0x08)
	UPointLightComponent* buttonLight_03; // 0x2d8(0x08)
	UPointLightComponent* buttonLight_02; // 0x2e0(0x08)
	UPointLightComponent* buttonLight_01; // 0x2e8(0x08)
	UStaticMeshComponent* ButtonMesh; // 0x2f0(0x08)
	UStaticMeshComponent* ButtonMesh3; // 0x2f8(0x08)
	UStaticMeshComponent* ButtonMesh2; // 0x300(0x08)
	UStaticMeshComponent* ButtonMesh1; // 0x308(0x08)
	USceneComponent* buttons; // 0x310(0x08)
	USceneComponent* DrillDozerSpawnPoint; // 0x318(0x08)
	UActorTrackingComponent* ActorTracking; // 0x320(0x08)
	UPointLightComponent* PointLight_FlapBack1; // 0x328(0x08)
	UPointLightComponent* PointLight_FlapBack0; // 0x330(0x08)
	UPointLightComponent* PointLight_FlapLeft1; // 0x338(0x08)
	UPointLightComponent* PointLight_FlapLeft0; // 0x340(0x08)
	UPointLightComponent* PointLight_FlapRight1; // 0x348(0x08)
	UPointLightComponent* PointLight_FlapRight0; // 0x350(0x08)
	UPointLightComponent* PointLight_FlapFront1; // 0x358(0x08)
	UPointLightComponent* PointLight_FlapFront0; // 0x360(0x08)
	UPointLightComponent* PointLight_Inside3; // 0x368(0x08)
	UPointLightComponent* PointLight_Inside2; // 0x370(0x08)
	UPointLightComponent* PointLight_Inside1; // 0x378(0x08)
	UPointLightComponent* PointLight_Inside0; // 0x380(0x08)
	UBoxComponent* CollisionDecending; // 0x388(0x08)
	USphereComponent* Sphere3; // 0x390(0x08)
	USphereComponent* Sphere2; // 0x398(0x08)
	USphereComponent* Sphere1; // 0x3a0(0x08)
	UOutlineComponent* outline; // 0x3a8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x3b0(0x08)
	USceneComponent* RespawnLocation; // 0x3b8(0x08)
	USkeletalMeshComponent* SK_DrillDozerGarage; // 0x3c0(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x3c8(0x08)
	UBoxComponent* Box; // 0x3d0(0x08)
	UAutoCarverComponent* AutoCarver; // 0x3d8(0x08)
	USingleUsableComponent* SingleUsable; // 0x3e0(0x08)
	USphereComponent* Sphere; // 0x3e8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x3f0(0x08)
	USkeletalMeshComponent* Drill; // 0x3f8(0x08)
	AActor* EscortMuleClass; // 0x400(0x08)
	bool HasBeenOpened; // 0x408(0x01)
	UParticleSystemComponent* DrillParticles01; // 0x410(0x08)
	UParticleSystemComponent* DrillParticles02; // 0x418(0x08)
	AEscortMule* SpawnedMule; // 0x420(0x08)
	UStaticMeshComponent* NewVar_1; // 0x428(0x08)

	void OnRep_HasBeenOpened();
	void ReceiveBeginPlay();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnDroppodImpact();
	void OnDropStarted();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Damage_K2Node_ComponentBoundEvent_1_OnEnemyKilledDelegate__DelegateSignature(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
	void ExecuteUbergraph_BP_EscortGarage(int32_t EntryPoint);
};

