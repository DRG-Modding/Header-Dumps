// BlueprintGeneratedClass BP_RockEnemiesEvent.BP_RockEnemiesEvent_C
// Size: 0x460 (Inherited: 0x3d8)
struct ABP_RockEnemiesEvent_C : ARockEnemiesEvent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	UAudioComponent* SprinklerMiscG_1_Cue; // 0x3e0(0x08)
	UBoxComponent* Box1; // 0x3e8(0x08)
	UBoxComponent* Box; // 0x3f0(0x08)
	URoomCarverComponent* RoomCarver; // 0x3f8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x400(0x08)
	UOutlineComponent* outline; // 0x408(0x08)
	UDamageComponent* Damage; // 0x410(0x08)
	UParticleSystemComponent* Sparks; // 0x418(0x08)
	UChildActorComponent* Starter4; // 0x420(0x08)
	UChildActorComponent* Starter6; // 0x428(0x08)
	UChildActorComponent* Starter5; // 0x430(0x08)
	UChildActorComponent* Starter3; // 0x438(0x08)
	UStaticMeshComponent* StaticMesh; // 0x440(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x448(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x450(0x08)
	USceneComponent* Scene; // 0x458(0x08)

	void OnShoot();
	void OnEventFinished(bool eventSuccess);
	void Spawn Enemies();
	void OnEventTriggered();
	void ReceiveBeginPlay();
	void EnemySpawnedAfterComplete(APawn* spawnedEnemy);
	void ExecuteUbergraph_BP_RockEnemiesEvent(int32_t EntryPoint);
};

