#ifndef UE4SS_SDK_BT_Task_InfectedMule_FindPlayerLocation_HPP
#define UE4SS_SDK_BT_Task_InfectedMule_FindPlayerLocation_HPP

class UBT_Task_InfectedMule_FindPlayerLocation_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LocationKey;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BT_Task_InfectedMule_FindPlayerLocation(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UConvertedRobot* K2Node_DynamicCast_AsConverted_Robot, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_GetPlayerMediumPoint_ReturnValue);
}

#endif
