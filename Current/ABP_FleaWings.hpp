#ifndef UE4SS_SDK_ABP_FleaWings_HPP
#define UE4SS_SDK_ABP_FleaWings_HPP

class UABP_FleaWings_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool Flying;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetFlying(bool SetFlying);
    void ExecuteUbergraph_ABP_FleaWings(int32 EntryPoint);
};

#endif
