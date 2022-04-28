#ifndef UE4SS_SDK_ABP_WoodlouseNew_HPP
#define UE4SS_SDK_ABP_WoodlouseNew_HPP

class UABP_WoodlouseNew_C : public UWoodLouseAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_7;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_WoodlouseNew(int32 EntryPoint);
};

#endif
