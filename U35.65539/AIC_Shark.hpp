#ifndef UE4SS_SDK_AIC_Shark_HPP
#define UE4SS_SDK_AIC_Shark_HPP

class AAIC_Shark_C : UEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceivePossess(APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Shark(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, APawn* K2Node_Event_PossessedPawn, bool CallFunc_IsValid_ReturnValue);
}

#endif
