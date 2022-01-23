#ifndef UE4SS_SDK_AIC_PatrolBot_HPP
#define UE4SS_SDK_AIC_PatrolBot_HPP

class AAIC_PatrolBot_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetActive(bool boolValue, FName CallFunc_MakeLiteralName_ReturnValue);
    void ReceivePossess(class APawn* PossessedPawn);
    void SetReadyToHack(bool boolValue);
    void Hacked(class APlayerCharacter* HackingPlayer);
    void ActivateDrone();
    void ExecuteUbergraph_AIC_PatrolBot(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn, bool CallFunc_RunBehaviorTree_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, class UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool K2Node_CustomEvent_BoolValue, FName CallFunc_MakeLiteralName_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_HackingPlayer, bool CallFunc_RunBehaviorTree_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn_1, bool K2Node_DynamicCast_bSuccess_1, class UBP_HackedPatrolBotComponent_C* CallFunc_AddPetComponent_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn_2, bool K2Node_DynamicCast_bSuccess_2, class UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue_1);
};

#endif
