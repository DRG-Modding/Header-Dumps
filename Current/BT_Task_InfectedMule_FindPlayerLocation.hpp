#ifndef UE4SS_SDK_BT_Task_InfectedMule_FindPlayerLocation_HPP
#define UE4SS_SDK_BT_Task_InfectedMule_FindPlayerLocation_HPP

class UBT_Task_InfectedMule_FindPlayerLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BT_Task_InfectedMule_FindPlayerLocation(int32 EntryPoint);
};

#endif
