#ifndef UE4SS_SDK_ABP_DroppodRamp_HPP
#define UE4SS_SDK_ABP_DroppodRamp_HPP

class UABP_DroppodRamp_C : public UMiningPodAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_41AF7652437F3C10561791958CD250B8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_4C3FEBDE4E195AF67C9CDBA7D7290FAA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_D963559D4F7D338C844A7B8D11940AE4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DroppodRamp_AnimGraphNode_TransitionResult_B178AD27426F23F1EE7CCFBBAE4B7D38();
    void ExecuteUbergraph_ABP_DroppodRamp(int32 EntryPoint);
};

#endif
