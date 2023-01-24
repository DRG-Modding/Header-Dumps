#ifndef UE4SS_SDK_ABP_FloatingLightPlant_A_HPP
#define UE4SS_SDK_ABP_FloatingLightPlant_A_HPP

class UABP_FloatingLightPlant_A_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool IsOpen;
    bool IsHIt;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FloatingLightPlant_A_AnimGraphNode_TransitionResult_3BAAFC614EBBCCF9211CFD8CDFBD6D3E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FloatingLightPlant_A_AnimGraphNode_TransitionResult_3FB1A8D74C801563ABAD31B28E08B5D5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FloatingLightPlant_A_AnimGraphNode_TransitionResult_530FB0CC4F33C0D9F79412B2EC183FAD();
    void BlueprintBeginPlay();
    void OnChangeState(bool IsOpen, bool IsHIt);
    void ExecuteUbergraph_ABP_FloatingLightPlant_A(int32 EntryPoint);
};

#endif
