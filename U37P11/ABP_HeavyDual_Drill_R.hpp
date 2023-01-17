#ifndef UE4SS_SDK_ABP_HeavyDual_Drill_R_HPP
#define UE4SS_SDK_ABP_HeavyDual_Drill_R_HPP

class UABP_HeavyDual_Drill_R_C : public UDoubleDrillAnimInstance
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
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_R_AnimGraphNode_TransitionResult_390E1F5847CCD80694ADF384F17BEFAF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_R_AnimGraphNode_TransitionResult_D12FE6AB4B7BC9F94D60F68F1B91CF96();
    void ExecuteUbergraph_ABP_HeavyDual_Drill_R(int32 EntryPoint);
};

#endif
