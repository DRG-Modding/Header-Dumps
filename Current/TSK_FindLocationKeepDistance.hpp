#ifndef UE4SS_SDK_TSK_FindLocationKeepDistance_HPP
#define UE4SS_SDK_TSK_FindLocationKeepDistance_HPP

class UTSK_FindLocationKeepDistance_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MinDistance;
    float MaxDistance;
    FBlackboardKeySelector TargetToAvoid;
    float IdealDistance;
    FBlackboardKeySelector TargetLocation;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindLocationKeepDistance(int32 EntryPoint);
};

#endif
