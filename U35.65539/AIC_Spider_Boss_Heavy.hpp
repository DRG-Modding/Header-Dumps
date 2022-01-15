#ifndef UE4SS_SDK_AIC_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_AIC_Spider_Boss_Heavy_HPP

class AAIC_Spider_Boss_Heavy_C : UAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Enraged;
    TSet<AFSDPawn*> spawnedEnemies;

    void SetEnemyState(uint8 State, bool K2Node_SwitchEnum_CmpSuccess, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2);
    void GetTankBoss(UENE_Spider_Boss_Heavy_C*& AsENE Tank Boss Heavy, APawn* CallFunc_K2_GetPawn_ReturnValue, UENE_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsENE_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void OnMessageBehaviorTreeEvent_Event_0(FName Message);
    void SpawnEnemies();
    void OnEnemySpawned(APawn* enemy);
    void OnDeathEvent(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_AIC_Spider_Boss_Heavy(int32 EntryPoint, MessageBehaviorTree__DelegateSignature K2Node_CreateDelegate_OutputDelegate, EnemySpawnedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_Message, bool K2Node_SwitchName_CmpSuccess, APawn* K2Node_CustomEvent_enemy, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_K2_GetPawn_ReturnValue, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetSpawnPointFromLocation_ReturnValue, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, AActor* CallFunc_GetOwner_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Set_Remove_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue_1, UENE_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsENE_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess_2, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
}

#endif
