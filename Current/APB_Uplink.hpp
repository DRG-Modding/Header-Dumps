#ifndef UE4SS_SDK_APB_Uplink_HPP
#define UE4SS_SDK_APB_Uplink_HPP

class UAPB_Uplink_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    float UplinkProgress;
    bool IsUplinking;
    bool Uplinked;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetProgress(float Progress);
    void ExecuteUbergraph_APB_Uplink(int32 EntryPoint);
};

#endif
