#ifndef UE4SS_SDK_TSK_GetPointInFrontOf_HPP
#define UE4SS_SDK_TSK_GetPointInFrontOf_HPP

class UTSK_GetPointInFrontOf_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Target;
    FBlackboardKeySelector Destination;
    float range;
    int32 Forward;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetPointInFrontOf(int32 EntryPoint);
};

#endif
