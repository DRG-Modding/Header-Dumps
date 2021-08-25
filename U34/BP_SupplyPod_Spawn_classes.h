// BlueprintGeneratedClass BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C
// Size: 0x3ce (Inherited: 0x2b0)
struct ABP_SupplyPod_Spawn_C : ARessuplyPodSpawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x2b8(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2c8(0x08)
	struct UChildActorComponent* CaveData; // 0x2d0(0x08)
	struct UStaticMeshComponent* Cube; // 0x2d8(0x08)
	struct UChildActorComponent* MisisonData; // 0x2e0(0x08)
	struct UStaticMeshComponent* Mesh_Left; // 0x2e8(0x08)
	struct UBoxComponent* Box_Left; // 0x2f0(0x08)
	struct UStaticMeshComponent* Mesh_Back; // 0x2f8(0x08)
	struct UBoxComponent* Box_Back; // 0x300(0x08)
	struct UStaticMeshComponent* Mesh_Right; // 0x308(0x08)
	struct UBoxComponent* Box_Right; // 0x310(0x08)
	struct UStaticMeshComponent* mesh_front; // 0x318(0x08)
	struct UBoxComponent* Box_Front; // 0x320(0x08)
	struct USceneComponent* Doors; // 0x328(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x330(0x08)
	struct UParticleSystemComponent* P_DropPod_DoorRocks1; // 0x338(0x08)
	struct UParticleSystemComponent* P_DropPod_DoorRocks; // 0x340(0x08)
	struct UMeshCarverComponent* MeshCarver; // 0x348(0x08)
	struct UAudioComponent* DropPodDrilling_Supply_Cue; // 0x350(0x08)
	struct UPointLightComponent* PointLight; // 0x358(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x360(0x08)
	struct USceneComponent* PlayerSpawn; // 0x368(0x08)
	struct UStaticMeshComponent* Mesh_Bottom; // 0x370(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x378(0x08)
	struct USkeletalMeshComponent* SK_DropPod_Drill; // 0x380(0x08)
	struct UAudioComponent* Audio; // 0x388(0x08)
	struct UOutlineComponent* outline; // 0x390(0x08)
	struct UAutoCarverComponent* AutoCarver; // 0x398(0x08)
	struct URadarPointComponent* radarPoint; // 0x3a0(0x08)
	float Timeline_0_RedLightIntensity_B6127BD049EFB0C47436D5B0D49067CC; // 0x3a8(0x04)
	char Timeline_0__Direction_B6127BD049EFB0C47436D5B0D49067CC; // 0x3ac(0x01)
	char UnknownData_3AD[0x3]; // 0x3ad(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3b0(0x08)
	struct AFSDPlayerController* Player; // 0x3b8(0x08)
	struct APlayerCharacter* Character; // 0x3c0(0x08)
	bool RocksParticlesDisabled; // 0x3c8(0x01)
	bool SidesDestroyed; // 0x3c9(0x01)
	bool LightsOff; // 0x3ca(0x01)
	bool HideTheDoorsForLatejoiners; // 0x3cb(0x01)
	bool DoorsPushedAway; // 0x3cc(0x01)
	bool RemoveDoorsIfTheyAreNotPushed; // 0x3cd(0x01)

	void OnRep_RemoveDoorsIfTheyAreNotPushed(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RemoveDoorsIfTheyAreNotPushed
	void OnRep_LightsOff(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_LightsOff
	void DoorSlamAudio(struct UPrimitiveComponent* Prim); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.DoorSlamAudio
	void FindNearestPlayer(struct APlayerCharacter* FromCharacter, struct APlayerCharacter* OutNearestPlayer); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.FindNearestPlayer
	void PushDoor(struct UPrimitiveComponent* Prim); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.PushDoor
	void OnRep_SidesDestroyed(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_SidesDestroyed
	void OnRep_RocksParticlesDisabled(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_RocksParticlesDisabled
	void OnRep_Character(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnRep_Character
	void Timeline_0__FinishedFunc(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Timeline_0__UpdateFunc
	void OnDropStarted(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDropStarted
	void ReceiveTick(float DeltaSeconds); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveTick
	void OnDroppodCloseToImpact(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodCloseToImpact
	void OnDroppodImpact(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.OnDroppodImpact
	void Test Drop Pod(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.Test Drop Pod
	void ReceiveBeginPlay(); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ReceiveBeginPlay
	void HandleWelcomeShouting(struct APlayerCharacter* LateJoinCharacter); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.HandleWelcomeShouting
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	void BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	void BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
	void CameraShake(struct UCameraShake* Shake, float Scale, char PlaySpace, struct FRotator UserPlaySpaceRot); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.CameraShake
	void SetController(struct AFSDPlayerController* Controller); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.SetController
	void SetCharacter(struct APlayerCharacter* Character); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.SetCharacter
	void ExecuteUbergraph_BP_SupplyPod_Spawn(int32_t EntryPoint); // Function BP_SupplyPod_Spawn.BP_SupplyPod_Spawn_C.ExecuteUbergraph_BP_SupplyPod_Spawn
};

