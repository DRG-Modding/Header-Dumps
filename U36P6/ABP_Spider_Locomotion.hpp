#ifndef UE4SS_SDK_ABP_Spider_Locomotion_HPP
#define UE4SS_SDK_ABP_Spider_Locomotion_HPP

class UABP_Spider_Locomotion_C : public USpiderAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;
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
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Spider_Locomotion(int32 EntryPoint);
};

#endif
