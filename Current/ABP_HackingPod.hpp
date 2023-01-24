#ifndef UE4SS_SDK_ABP_HackingPod_HPP
#define UE4SS_SDK_ABP_HackingPod_HPP

class UABP_HackingPod_C : public UFacilityHackingPodAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HackingPod_AnimGraphNode_ModifyBone_2B31BB7246E095C0E8EC48878E972474();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HackingPod_AnimGraphNode_ModifyBone_51C1899841CBC90E41B463BE266D93F2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HackingPod_AnimGraphNode_TransitionResult_D31904854FEF33B626FDC6A8B6FFD447();
    void ExecuteUbergraph_ABP_HackingPod(int32 EntryPoint);
};

#endif
