#ifndef UE4SS_SDK_TSK_DashTo_HPP
#define UE4SS_SDK_TSK_DashTo_HPP

class UTSK_DashTo_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDashPoints* DashPoints;

    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CustomEvent();
    void ExecuteUbergraph_TSK_DashTo(int32 EntryPoint);
};

#endif
