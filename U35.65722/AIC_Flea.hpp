#ifndef UE4SS_SDK_AIC_Flea_HPP
#define UE4SS_SDK_AIC_Flea_HPP

class AAIC_Flea_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBehaviorTree* BehaviourTree;

    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Flea(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn, bool CallFunc_IsPathfinderReady_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue);
};

#endif
