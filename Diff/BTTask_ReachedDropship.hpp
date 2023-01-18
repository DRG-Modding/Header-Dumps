#ifndef UE4SS_SDK_BTTask_ReachedDropship_HPP
#define UE4SS_SDK_BTTask_ReachedDropship_HPP

class UBTTask_ReachedDropship_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_ReachedDropship(int32 EntryPoint);
};

#endif
