// BlueprintGeneratedClass BP_RockEnemiesEvent.BP_RockEnemiesEvent_C
// Size: 0x460 (Inherited: 0x3d8)
struct ABP_RockEnemiesEvent_C : ARockEnemiesEvent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UBoxComponent* Box1; // 0x3e0(0x08)
	struct UBoxComponent* Box; // 0x3e8(0x08)
	struct UAudioComponent* SprinklerMiscG_1_Cue; // 0x3f0(0x08)
	struct URoomCarverComponent* RoomCarver; // 0x3f8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x400(0x08)
	struct UOutlineComponent* outline; // 0x408(0x08)
	struct UDamageComponent* Damage; // 0x410(0x08)
	struct UParticleSystemComponent* Sparks; // 0x418(0x08)
	struct UChildActorComponent* Starter4; // 0x420(0x08)
	struct UChildActorComponent* Starter6; // 0x428(0x08)
	struct UChildActorComponent* Starter5; // 0x430(0x08)
	struct UChildActorComponent* Starter3; // 0x438(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x440(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x448(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x450(0x08)
	struct USceneComponent* Scene; // 0x458(0x08)

	void OnShoot(); // Function BP_RockEnemiesEvent.BP_RockEnemiesEvent_C.OnShoot
	void OnEventFinished(bool eventSuccess); // Function BP_RockEnemiesEvent.BP_RockEnemiesEvent_C.OnEventFinished
	void Spawn Enemies(); // Function BP_RockEnemiesEvent.BP_RockEnemiesEvent_C.Spawn Enemies
	void OnEventTriggered(); // Function BP_RockEnemiesEvent.BP_RockEnemiesEvent_C.OnEventTriggered
	void ReceiveBeginPlay(); // Function BP_RockEnemiesEvent.BP_RockEnemiesEvent_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_RockEnemiesEvent(int32_t EntryPoint); // Function BP_RockEnemiesEvent.BP_RockEnemiesEvent_C.ExecuteUbergraph_BP_RockEnemiesEvent
};

