#ifndef UE4SS_SDK_TSK_FindFormation_HPP
#define UE4SS_SDK_TSK_FindFormation_HPP

class UTSK_FindFormation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindFormation(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryJoinFormation_ReturnValue);
};

#endif
