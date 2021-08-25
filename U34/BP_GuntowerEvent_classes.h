// BlueprintGeneratedClass BP_GuntowerEvent.BP_GuntowerEvent_C
// Size: 0x46c (Inherited: 0x390)
struct ABP_GuntowerEvent_C : AGuntowerEvent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UStaticMeshComponent* SM_Pillar_Machine_A2B; // 0x398(0x08)
	struct UStaticMeshComponent* SM_Pillar_Machine_A1B; // 0x3a0(0x08)
	struct UStaticMeshComponent* SM_Pillar_Machine_A0B; // 0x3a8(0x08)
	struct UStaticMeshComponent* SM_Pillar_Machine_A2; // 0x3b0(0x08)
	struct UStaticMeshComponent* SM_Pillar_Machine_A1; // 0x3b8(0x08)
	struct UStaticMeshComponent* SM_Pillar_Machine_A0; // 0x3c0(0x08)
	struct UChildActorComponent* ChildActor3; // 0x3c8(0x08)
	struct UChildActorComponent* ChildActor2; // 0x3d0(0x08)
	struct UChildActorComponent* ChildActor1; // 0x3d8(0x08)
	struct UChildActorComponent* ChildActor; // 0x3e0(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x3e8(0x08)
	struct URoomCarverComponent* RoomCarver; // 0x3f0(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x3f8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x400(0x08)
	struct UOutlineComponent* outline; // 0x408(0x08)
	struct UChildActorComponent* ActivationPad2; // 0x410(0x08)
	struct UChildActorComponent* ActivationPad1; // 0x418(0x08)
	struct UChildActorComponent* ActivationPad; // 0x420(0x08)
	struct UParticleSystemComponent* P_GunTower_Base_Smoke; // 0x428(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x430(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x438(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x440(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x448(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x450(0x08)
	int32_t ModuleCount; // 0x458(0x04)
	char UnknownData_45C[0x4]; // 0x45c(0x04)
	struct AGuntowerModule* FirstModuleType; // 0x460(0x08)
	float Cooldown; // 0x468(0x04)

	void OnModuleExploded(struct AGuntowerModule* explodedModule); // Function BP_GuntowerEvent.BP_GuntowerEvent_C.OnModuleExploded
	void OnEventFinished(bool eventSuccess); // Function BP_GuntowerEvent.BP_GuntowerEvent_C.OnEventFinished
	void OnEventTriggered(); // Function BP_GuntowerEvent.BP_GuntowerEvent_C.OnEventTriggered
	void ReceiveBeginPlay(); // Function BP_GuntowerEvent.BP_GuntowerEvent_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_GuntowerEvent(int32_t EntryPoint); // Function BP_GuntowerEvent.BP_GuntowerEvent_C.ExecuteUbergraph_BP_GuntowerEvent
};

