#ifndef UE4SS_SDK_TSK_StopAttackStance_HPP
#define UE4SS_SDK_TSK_StopAttackStance_HPP

class UTSK_StopAttackStance_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_StopAttackStance(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
