#ifndef UE4SS_SDK_ABP_ElevatorPlant_HPP
#define UE4SS_SDK_ABP_ElevatorPlant_HPP

class UABP_ElevatorPlant_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    bool IsIdle;
    class AActor* ElevatorPlant;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintBeginPlay();
    void OnStateChange_Event_0(bool IsIdle);
    void ExecuteUbergraph_ABP_ElevatorPlant(int32 EntryPoint, bool K2Node_CustomEvent_IsIdle, FExecuteUbergraph_ABP_ElevatorPlantK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_ElevatorPlant_C* K2Node_DynamicCast_AsBP_Elevator_Plant, bool K2Node_DynamicCast_bSuccess);
};

#endif
