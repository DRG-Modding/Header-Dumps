#ifndef UE4SS_SDK_TSK_FindFormation_HPP
#define UE4SS_SDK_TSK_FindFormation_HPP

class UTSK_FindFormation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindFormation(int32 EntryPoint);
};

#endif
