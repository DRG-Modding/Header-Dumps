#ifndef UE4SS_SDK_ABP_Refinery_Depositor_HPP
#define UE4SS_SDK_ABP_Refinery_Depositor_HPP

class UABP_Refinery_Depositor_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    class ABP_Refinery_Depositor_C* Depositor;
    bool DepositorOpen;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintBeginPlay();
    void OnDepositorOpenChanged(bool InOpen);
    void ExecuteUbergraph_ABP_Refinery_Depositor(int32 EntryPoint, FExecuteUbergraph_ABP_Refinery_DepositorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwningActor_ReturnValue, bool K2Node_CustomEvent_InOpen, class ABP_Refinery_Depositor_C* K2Node_DynamicCast_AsBP_Refinery_Depositor, bool K2Node_DynamicCast_bSuccess);
};

#endif
