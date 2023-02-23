#ifndef UE4SS_SDK_BP_SpiderEgg_Base_HPP
#define UE4SS_SDK_BP_SpiderEgg_Base_HPP

class ABP_SpiderEgg_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* Egg Whole;
    class USceneComponent* Egg Broken;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* Spider Spawn Point;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* DefaultSceneRoot;
    class UEnemyDescriptor* EnemyToSpawn;
    class UParticleSystem* EggBreakParticles;
    class UMaterialInterface* EggGooDecal;
    bool CanOpen;
    bool OpenOnPlayerProximity;
    float ProximityOpenRange;
    float ProximityOpenDelayMax;
    float ProximityOpenDelayMin;
    float ProximityOpenProbability;
    float ChainReactionDistance;
    float ChainReactionProbability;
    float ChainReactionDelayMin;
    float ChainReactionDelayMax;
    bool ListenForDeath;

    void GetEnemyToSpawn(class UEnemyDescriptor*& enemy);
    void GetEliminationObjective(class UEliminationObjective*& AsElimination Objective);
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void OnEggBroken();
    void OnTerrainPointRemoved();
    void OnPlayerProximityChanged(class APlayerCharacter* Player, bool enteredTrigger);
    void CrackEgg();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ChainReaction();
    void SpawnCustom();
    void ExecuteUbergraph_BP_SpiderEgg_Base(int32 EntryPoint);
};

#endif
