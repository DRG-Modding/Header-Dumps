#ifndef UE4SS_SDK_ABP_HydraWeed_Shooter_HPP
#define UE4SS_SDK_ABP_HydraWeed_Shooter_HPP

class UABP_HydraWeed_Shooter_C : public UShootingPlantAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;
    bool WaitToGrow;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HydraWeed_Shooter(int32 EntryPoint);
};

#endif
