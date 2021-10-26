// BlueprintGeneratedClass BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C
// Size: 0x3f6 (Inherited: 0x2d8)
struct ABP_SupplyPod_Spawn_C : ARessuplyPodSpawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2e0(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x2e8(0x08)
	UStaticMeshComponent* StaticMesh; // 0x2f0(0x08)
	UChildActorComponent* CaveData; // 0x2f8(0x08)
	UStaticMeshComponent* Cube; // 0x300(0x08)
	UChildActorComponent* MisisonData; // 0x308(0x08)
	UStaticMeshComponent* Mesh_Left; // 0x310(0x08)
	UBoxComponent* Box_Left; // 0x318(0x08)
	UStaticMeshComponent* Mesh_Back; // 0x320(0x08)
	UBoxComponent* Box_Back; // 0x328(0x08)
	UStaticMeshComponent* Mesh_Right; // 0x330(0x08)
	UBoxComponent* Box_Right; // 0x338(0x08)
	UStaticMeshComponent* mesh_front; // 0x340(0x08)
	UBoxComponent* Box_Front; // 0x348(0x08)
	USceneComponent* Doors; // 0x350(0x08)
	UStaticMeshComponent* Cylinder; // 0x358(0x08)
	UParticleSystemComponent* P_DropPod_DoorRocks1; // 0x360(0x08)
	UParticleSystemComponent* P_DropPod_DoorRocks; // 0x368(0x08)
	UMeshCarverComponent* MeshCarver; // 0x370(0x08)
	UAudioComponent* DropPodDrilling_Supply_Cue; // 0x378(0x08)
	UPointLightComponent* PointLight; // 0x380(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x388(0x08)
	USceneComponent* PlayerSpawn; // 0x390(0x08)
	UStaticMeshComponent* Mesh_Bottom; // 0x398(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x3a0(0x08)
	USkeletalMeshComponent* SK_DropPod_Drill; // 0x3a8(0x08)
	UAudioComponent* Audio; // 0x3b0(0x08)
	UOutlineComponent* outline; // 0x3b8(0x08)
	UAutoCarverComponent* AutoCarver; // 0x3c0(0x08)
	URadarPointComponent* radarPoint; // 0x3c8(0x08)
	float Timeline_0_RedLightIntensity_B6127BD049EFB0C47436D5B0D49067CC; // 0x3d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B6127BD049EFB0C47436D5B0D49067CC; // 0x3d4(0x01)
	UTimelineComponent* Timeline_1; // 0x3d8(0x08)
	AFSDPlayerController* Player; // 0x3e0(0x08)
	APlayerCharacter* Character; // 0x3e8(0x08)
	bool RocksParticlesDisabled; // 0x3f0(0x01)
	bool SidesDestroyed; // 0x3f1(0x01)
	bool LightsOff; // 0x3f2(0x01)
	bool HideTheDoorsForLatejoiners; // 0x3f3(0x01)
	bool DoorsPushedAway; // 0x3f4(0x01)
	bool RemoveDoorsIfTheyAreNotPushed; // 0x3f5(0x01)

	void OnRep_RemoveDoorsIfTheyAreNotPushed();
	void OnRep_LightsOff();
	void DoorSlamAudio(UPrimitiveComponent* Prim);
	void FindNearestPlayer(APlayerCharacter* fromCharacter, APlayerCharacter* OutNearestPlayer);
	void PushDoor(UPrimitiveComponent* Prim);
	void OnRep_SidesDestroyed();
	void OnRep_RocksParticlesDisabled();
	void OnRep_Character();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnDropStarted();
	void ReceiveTick(float DeltaSeconds);
	void OnDroppodCloseToImpact();
	void OnDroppodImpact();
	void Test Drop Pod();
	void ReceiveBeginPlay();
	void HandleWelcomeShouting(APlayerCharacter* LateJoinCharacter);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void CameraShake(UCameraShake* Shake, float Scale, enum class ECameraAnimPlaySpace PlaySpace, FRotator UserPlaySpaceRot);
	void SetController(AFSDPlayerController* Controller);
	void SetCharacter(APlayerCharacter* Character);
	void ExecuteUbergraph_BP_SupplyPod_Spawn(int32_t EntryPoint);
};

