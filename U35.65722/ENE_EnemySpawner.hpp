#ifndef UE4SS_SDK_ENE_EnemySpawner_HPP
#define UE4SS_SDK_ENE_EnemySpawner_HPP

class AENE_EnemySpawner_C : public AEnemyPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float Spawn Interval;
    int32 AliveCount;
    int32 MaxConcurrentEnemies;
    int32 SpawnCount;
    int32 MaxTotalSpawnCount;
    class UEnemySpawnManager* Manager;
    FENE_EnemySpawner_COn Begin Play On Begin Play;
    void On Begin Play();
    TArray<FEnemySpawnWave> Spawns;
    TArray<class UEnemyDescriptor*> SpawnQueue;
    bool IsAlertet;
    bool PlayersClose;

    void SetInactive(class AActor* Target, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue);
    bool CanSpawn(class UEnemyDescriptor* EnemyClassclass AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetEnemyCountModifier_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_CanSpawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1);
    void ReceiveBeginPlay();
    void Spawn();
    void SpawnActor(class UEnemyDescriptor* Class);
    void SpawnFromQueue();
    void OnEnemySpawned(class APawn* enemy);
    void OnEnemyDeath(class UHealthComponentBase* HealthComponent);
    void CheckForPlayerProximity();
    void ExecuteUbergraph_ENE_EnemySpawner(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TArray<class UEnemySpawnManager*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UEnemySpawnManager* CallFunc_Array_Get_Item, FExecuteUbergraph_ENE_EnemySpawnerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FExecuteUbergraph_ENE_EnemySpawnerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FExecuteUbergraph_ENE_EnemySpawnerK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FEnemySpawnWave CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_CanSpawn_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UEnemyDescriptor* K2Node_CustomEvent_Class, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, class UEnemyDescriptor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class APawn* K2Node_CustomEvent_enemy, class UHealthComponent* CallFunc_GetComponentByClass_ReturnValue, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, FExecuteUbergraph_ENE_EnemySpawnerK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_SpawnEnemy_ReturnValue);
    void On Begin Play__DelegateSignature();
};

#endif
