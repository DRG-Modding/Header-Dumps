// BlueprintGeneratedClass BP_SpiderEgg_Base.BP_SpiderEgg_Base_C
// Size: 0x2a5 (Inherited: 0x220)
struct ABP_SpiderEgg_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	struct USceneComponent* Egg Whole; // 0x238(0x08)
	struct USceneComponent* Egg Broken; // 0x240(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	struct UBillboardComponent* Spider Spawn Point; // 0x250(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x258(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x260(0x08)
	struct UEnemyDescriptor* EnemyToSpawn; // 0x268(0x08)
	struct UParticleSystem* EggBreakParticles; // 0x270(0x08)
	struct UMaterialInterface* EggGooDecal; // 0x278(0x08)
	bool OpenEgg; // 0x280(0x01)
	bool OpenOnPlayerProximity; // 0x281(0x01)
	char UnknownData_282[0x2]; // 0x282(0x02)
	float ProximityOpenRange; // 0x284(0x04)
	float ProximityOpenDelayMax; // 0x288(0x04)
	float ProximityOpenDelayMin; // 0x28c(0x04)
	float ProximityOpenProbability; // 0x290(0x04)
	float ChainReactionDistance; // 0x294(0x04)
	float ChainReactionProbability; // 0x298(0x04)
	float ChainReactionDelayMin; // 0x29c(0x04)
	float ChainReactionDelayMax; // 0x2a0(0x04)
	bool ListenForDeath; // 0x2a4(0x01)

	void GetEnemyToSpawn(struct UEnemyDescriptor* enemy); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.GetEnemyToSpawn
	void GetEliminationObjective(struct UEliminationObjective* AsElimination Objective); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.GetEliminationObjective
	void ReceiveBeginPlay(); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ReceiveBeginPlay
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
	void OnEggBroken(); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnEggBroken
	void OnTerrainPointRemoved(); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnTerrainPointRemoved
	void OnPlayerProximityChanged(struct APlayerCharacter* Player, bool enteredTrigger); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.OnPlayerProximityChanged
	void CrackEgg(); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.CrackEgg
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ChainReaction(); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ChainReaction
	void SpawnCustom(); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.SpawnCustom
	void ExecuteUbergraph_BP_SpiderEgg_Base(int32_t EntryPoint); // Function BP_SpiderEgg_Base.BP_SpiderEgg_Base_C.ExecuteUbergraph_BP_SpiderEgg_Base
};

