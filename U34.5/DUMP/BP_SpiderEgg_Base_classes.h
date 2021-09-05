// BlueprintGeneratedClass BP_SpiderEgg_Base.BP_SpiderEgg_Base_C
// Size: 0x2a5 (Inherited: 0x220)
struct ABP_SpiderEgg_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	USceneComponent* Egg Whole; // 0x238(0x08)
	USceneComponent* Egg Broken; // 0x240(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	UBillboardComponent* Spider Spawn Point; // 0x250(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x258(0x08)
	USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	UEnemyDescriptor* EnemyToSpawn; // 0x268(0x08)
	UParticleSystem* EggBreakParticles; // 0x270(0x08)
	UMaterialInterface* EggGooDecal; // 0x278(0x08)
	bool OpenEgg; // 0x280(0x01)
	bool OpenOnPlayerProximity; // 0x281(0x01)
	float ProximityOpenRange; // 0x284(0x04)
	float ProximityOpenDelayMax; // 0x288(0x04)
	float ProximityOpenDelayMin; // 0x28c(0x04)
	float ProximityOpenProbability; // 0x290(0x04)
	float ChainReactionDistance; // 0x294(0x04)
	float ChainReactionProbability; // 0x298(0x04)
	float ChainReactionDelayMin; // 0x29c(0x04)
	float ChainReactionDelayMax; // 0x2a0(0x04)
	bool ListenForDeath; // 0x2a4(0x01)

	void GetEnemyToSpawn(UEnemyDescriptor* enemy);
	void GetEliminationObjective(UEliminationObjective* AsElimination Objective);
	void ReceiveBeginPlay();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	void OnEggBroken();
	void OnTerrainPointRemoved();
	void OnPlayerProximityChanged(APlayerCharacter* Player, bool enteredTrigger);
	void CrackEgg();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ChainReaction();
	void SpawnCustom();
	void ExecuteUbergraph_BP_SpiderEgg_Base(int32_t EntryPoint);
};

