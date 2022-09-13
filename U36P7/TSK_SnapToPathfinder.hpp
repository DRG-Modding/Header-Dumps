#ifndef UE4SS_SDK_TSK_SnapToPathfinder_HPP
#define UE4SS_SDK_TSK_SnapToPathfinder_HPP

class UTSK_SnapToPathfinder_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_SnapToPathfinder(int32 EntryPoint);
};

#endif
