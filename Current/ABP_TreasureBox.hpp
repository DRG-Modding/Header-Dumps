#ifndef UE4SS_SDK_ABP_TreasureBox_HPP
#define UE4SS_SDK_ABP_TreasureBox_HPP

class UABP_TreasureBox_C : public UTreasureBoxAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_Root AnimGraphNode_Root;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TreasureBox(int32 EntryPoint);
};

#endif
