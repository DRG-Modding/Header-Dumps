#ifndef UE4SS_SDK_BP_RockEnemiesEvent_HPP
#define UE4SS_SDK_BP_RockEnemiesEvent_HPP

class ABP_RockEnemiesEvent_C : URockEnemiesEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* SprinklerMiscG_1_Cue;
    UBoxComponent* Box1;
    UBoxComponent* Box;
    URoomCarverComponent* RoomCarver;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UOutlineComponent* outline;
    UDamageComponent* Damage;
    UParticleSystemComponent* Sparks;
    UChildActorComponent* Starter4;
    UChildActorComponent* Starter6;
    UChildActorComponent* Starter5;
    UChildActorComponent* Starter3;
    UStaticMeshComponent* StaticMesh;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    UTerrainPlacementComponent* terrainPlacement;
    USceneComponent* Scene;

    void OnShoot();
    void OnEventFinished(bool eventSuccess);
    void Spawn Enemies();
    void OnEventTriggered();
    void ReceiveBeginPlay();
    void EnemySpawnedAfterComplete(APawn* spawnedEnemy);
    void ExecuteUbergraph_BP_RockEnemiesEvent(int32 EntryPoint, APawn* K2Node_Event_spawnedEnemy, UENE_SpiderBase_Large_C* K2Node_DynamicCast_AsENE_Spider_Base_Large, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_eventSuccess, bool CallFunc_IsEventActive_ReturnValue, int32 Temp_int_Array_Index_Variable, APawn* CallFunc_Array_Get_Item, UENE_SpiderBase_Large_C* K2Node_DynamicCast_AsENE_Spider_Base_Large_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue);
}

#endif
