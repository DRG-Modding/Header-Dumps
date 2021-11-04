// BlueprintGeneratedClass BP_SmallGenerator.BP_SmallGenerator_C
// Size: 0x341 (Inherited: 0x2c0)
struct ABP_SmallGenerator_C : AAnchorTurner {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	UPathfinderCollisionComponent* PathfinderCollision1; // 0x2c8(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x2d0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2d8(0x08)
	UOutlineComponent* outline; // 0x2e0(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x2e8(0x08)
	USphereComponent* Sphere; // 0x2f0(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x2f8(0x08)
	UStaticMeshComponent* StaticMesh; // 0x300(0x08)
	UBoxComponent* Box3; // 0x308(0x08)
	UBoxComponent* Box2; // 0x310(0x08)
	UBoxComponent* Box1; // 0x318(0x08)
	UBoxComponent* Box; // 0x320(0x08)
	URoomCarverComponent* RoomCarver; // 0x328(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x330(0x08)
	UPointLightComponent* PointLight; // 0x338(0x08)
	bool Found; // 0x340(0x01)

	void OnRep_Found();
	void ReceiveBeginPlay();
	void Cheat_TeleportPlayer();
	void BndEvt__TurnUse_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void GeneratorSpunUp();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void SpunUp();
	void ExecuteUbergraph_BP_SmallGenerator(int32_t EntryPoint);
};

