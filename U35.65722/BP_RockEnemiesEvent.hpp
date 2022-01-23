#ifndef UE4SS_SDK_BP_RockEnemiesEvent_HPP
#define UE4SS_SDK_BP_RockEnemiesEvent_HPP

class ABP_RockEnemiesEvent_C : public ARockEnemiesEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* SprinklerMiscG_1_Cue;
    class UBoxComponent* Box1;
    class UBoxComponent* Box;
    class URoomCarverComponent* RoomCarver;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* Sparks;
    class UChildActorComponent* Starter4;
    class UChildActorComponent* Starter6;
    class UChildActorComponent* Starter5;
    class UChildActorComponent* Starter3;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* Scene;

    void OnShoot();
    void OnEventFinished(bool eventSuccess);
    void Spawn Enemies();
    void OnEventTriggered();
    void ReceiveBeginPlay();
    void EnemySpawnedAfterComplete(class APawn* spawnedEnemy);
    void ExecuteUbergraph_BP_RockEnemiesEvent(int32 EntryPoint, class APawn* K2Node_Event_spawnedEnemy, class AENE_SpiderBase_Large_C* K2Node_DynamicCast_AsENE_Spider_Base_Large, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_eventSuccess, bool CallFunc_IsEventActive_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_Array_Get_Item, class AENE_SpiderBase_Large_C* K2Node_DynamicCast_AsENE_Spider_Base_Large_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue);
};

#endif
