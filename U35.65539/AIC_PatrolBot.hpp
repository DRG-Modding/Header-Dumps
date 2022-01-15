#ifndef UE4SS_SDK_AIC_PatrolBot_HPP
#define UE4SS_SDK_AIC_PatrolBot_HPP

class AAIC_PatrolBot_C : UEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetActive(bool boolValue, FName CallFunc_MakeLiteralName_ReturnValue);
    void ReceivePossess(APawn* PossessedPawn);
    void SetReadyToHack(bool boolValue);
    void Hacked(UPlayerCharacter* HackingPlayer);
    void ActivateDrone();
    void ExecuteUbergraph_AIC_PatrolBot(int32 EntryPoint, APawn* K2Node_Event_PossessedPawn, bool CallFunc_RunBehaviorTree_ReturnValue, bool CallFunc_IsValid_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, InterfaceProperty CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool K2Node_CustomEvent_BoolValue, FName CallFunc_MakeLiteralName_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_HackingPlayer, bool CallFunc_RunBehaviorTree_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_1, APawn* CallFunc_K2_GetPawn_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn_1, bool K2Node_DynamicCast_bSuccess_1, UBP_HackedPatrolBotComponent_C* CallFunc_AddPetComponent_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue_1, UFSDPawn* K2Node_DynamicCast_AsFSDPawn_2, bool K2Node_DynamicCast_bSuccess_2, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue_1);
}

#endif
