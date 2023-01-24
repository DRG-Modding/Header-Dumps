#ifndef UE4SS_SDK_TSK_GetForwardDownLocation_HPP
#define UE4SS_SDK_TSK_GetForwardDownLocation_HPP

class UTSK_GetForwardDownLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;
    FBlackboardKeySelector TargetKey;
    FVector targetloc;
    bool ToTarget;
    bool Continue;
    FVector Location;

    void GetEnd(FVector PawnLocation, FVector TargetLocation, FVector PawnForward);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_GetForwardDownLocation(int32 EntryPoint);
};

#endif
