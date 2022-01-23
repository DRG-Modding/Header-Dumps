#ifndef UE4SS_SDK_AIC_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_AIC_Spider_Boss_Heavy_HPP

class AAIC_Spider_Boss_Heavy_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Enraged;
    TSet<AFSDPawn*> spawnedEnemies;

    void SetEnemyState(TEnumAsByte<Spider_Boss_Heavy_State::Type> State, bool K2Node_SwitchEnum_CmpSuccess, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2);
    void GetTankBoss(class AENE_Spider_Boss_Heavy_C*& AsENE Tank Boss Heavy, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AENE_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsENE_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void OnMessageBehaviorTreeEvent_Event_0(FName Message);
    void SpawnEnemies();
    void OnEnemySpawned(class APawn* enemy);
    void OnDeathEvent(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_AIC_Spider_Boss_Heavy(int32 EntryPoint, FExecuteUbergraph_AIC_Spider_Boss_HeavyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_AIC_Spider_Boss_HeavyK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_AIC_Spider_Boss_HeavyK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_Message, bool K2Node_SwitchName_CmpSuccess, class APawn* K2Node_CustomEvent_enemy, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetSpawnPointFromLocation_ReturnValue, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, class AActor* CallFunc_GetOwner_ReturnValue, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Set_Remove_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AENE_Spider_Boss_Heavy_C* K2Node_DynamicCast_AsENE_Spider_Boss_Heavy, bool K2Node_DynamicCast_bSuccess_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

#endif
