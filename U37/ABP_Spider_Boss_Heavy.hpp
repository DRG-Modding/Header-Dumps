#ifndef UE4SS_SDK_ABP_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_ABP_Spider_Boss_Heavy_HPP

class UABP_Spider_Boss_Heavy_C : public USpiderAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph;
    FAnimNode_Slot AnimGraphNode_Slot_2;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    float __CustomProperty_MeshScale_E54DA08D4BFB3BD45690D29CEB143D0E;
    bool ArmorOpen;
    bool WeakSpot_L_Open;
    bool WeakSpot_R_Open;
    bool WeakSpot_C_Open;
    class UAnimSequenceBase* DeathAnimation;
    bool PlayDeath;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetDeathAnimation(class UAnimSequenceBase* Animation);
    void ExecuteUbergraph_ABP_Spider_Boss_Heavy(int32 EntryPoint);
};

#endif
