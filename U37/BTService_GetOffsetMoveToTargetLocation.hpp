#ifndef UE4SS_SDK_BTService_GetOffsetMoveToTargetLocation_HPP
#define UE4SS_SDK_BTService_GetOffsetMoveToTargetLocation_HPP

class UBTService_GetOffsetMoveToTargetLocation_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTService_GetOffsetMoveToTargetLocation(int32 EntryPoint);
};

#endif
