// BlueprintGeneratedClass BP_GuntowerEvent.BP_GuntowerEvent_C
// Size: 0x46c (Inherited: 0x390)
struct ABP_GuntowerEvent_C : AGuntowerEvent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	UStaticMeshComponent* SM_Pillar_Machine_A2B; // 0x398(0x08)
	UStaticMeshComponent* SM_Pillar_Machine_A1B; // 0x3a0(0x08)
	UStaticMeshComponent* SM_Pillar_Machine_A0B; // 0x3a8(0x08)
	UStaticMeshComponent* SM_Pillar_Machine_A2; // 0x3b0(0x08)
	UStaticMeshComponent* SM_Pillar_Machine_A1; // 0x3b8(0x08)
	UStaticMeshComponent* SM_Pillar_Machine_A0; // 0x3c0(0x08)
	UChildActorComponent* ChildActor3; // 0x3c8(0x08)
	UChildActorComponent* ChildActor2; // 0x3d0(0x08)
	UChildActorComponent* ChildActor1; // 0x3d8(0x08)
	UChildActorComponent* ChildActor; // 0x3e0(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x3e8(0x08)
	URoomCarverComponent* RoomCarver; // 0x3f0(0x08)
	UStaticMeshComponent* Cylinder; // 0x3f8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x400(0x08)
	UOutlineComponent* outline; // 0x408(0x08)
	UChildActorComponent* ActivationPad2; // 0x410(0x08)
	UChildActorComponent* ActivationPad1; // 0x418(0x08)
	UChildActorComponent* ActivationPad; // 0x420(0x08)
	UParticleSystemComponent* P_GunTower_Base_Smoke; // 0x428(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x430(0x08)
	UStaticMeshComponent* StaticMesh; // 0x438(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x440(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x448(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x450(0x08)
	int32_t ModuleCount; // 0x458(0x04)
	AGuntowerModule* FirstModuleType; // 0x460(0x08)
	float Cooldown; // 0x468(0x04)

	void OnModuleExploded(AGuntowerModule* explodedModule);
	void OnEventFinished(bool eventSuccess);
	void OnEventTriggered();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GuntowerEvent(int32_t EntryPoint);
};

