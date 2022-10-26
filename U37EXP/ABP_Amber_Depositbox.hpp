#ifndef UE4SS_SDK_ABP_Amber_Depositbox_HPP
#define UE4SS_SDK_ABP_Amber_Depositbox_HPP

class UABP_Amber_Depositbox_C : public UGameEventAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Amber_Depositbox(int32 EntryPoint);
};

#endif
