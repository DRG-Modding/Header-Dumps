#ifndef UE4SS_SDK_APB_BarnacleAnim_HPP
#define UE4SS_SDK_APB_BarnacleAnim_HPP

class UAPB_BarnacleAnim_C : public UAnimInstance
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
    bool attacking;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_APB_BarnacleAnim(int32 EntryPoint);
};

#endif
