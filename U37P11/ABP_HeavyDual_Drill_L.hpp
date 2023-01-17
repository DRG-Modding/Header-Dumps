#ifndef UE4SS_SDK_ABP_HeavyDual_Drill_L_HPP
#define UE4SS_SDK_ABP_HeavyDual_Drill_L_HPP

class UABP_HeavyDual_Drill_L_C : public UDoubleDrillAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_L_AnimGraphNode_TransitionResult_60ED788F420D8EC12734F1A7F3AA939C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_L_AnimGraphNode_TransitionResult_49E85F5647E4004F3D46128D6C5D4127();
    void ExecuteUbergraph_ABP_HeavyDual_Drill_L(int32 EntryPoint);
};

#endif
