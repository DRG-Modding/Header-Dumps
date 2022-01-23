#ifndef UE4SS_SDK_AIC_FlyingCritterBase_HPP
#define UE4SS_SDK_AIC_FlyingCritterBase_HPP

class AAIC_FlyingCritterBase_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBehaviorTree* BehaviourTree;

    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_FlyingCritterBase(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn, bool CallFunc_IsPathfinderReady_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue);
};

#endif
