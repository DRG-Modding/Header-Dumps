#ifndef UE4SS_SDK_ABP_CleanupPod_HPP
#define UE4SS_SDK_ABP_CleanupPod_HPP

class UABP_CleanupPod_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_Slot AnimGraphNode_Slot;
    bool IsOpen;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetOpen();
    void ExecuteUbergraph_ABP_CleanupPod(int32 EntryPoint);
};

#endif
