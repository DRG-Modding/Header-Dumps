#ifndef UE4SS_SDK_TSK_SnapToPathfinder_HPP
#define UE4SS_SDK_TSK_SnapToPathfinder_HPP

class UTSK_SnapToPathfinder_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_SnapToPathfinder(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ADeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
