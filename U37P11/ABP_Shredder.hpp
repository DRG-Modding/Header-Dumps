#ifndef UE4SS_SDK_ABP_Shredder_HPP
#define UE4SS_SDK_ABP_Shredder_HPP

class UABP_Shredder_C : public UShredderAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Shredder(int32 EntryPoint);
};

#endif
