#ifndef UE4SS_SDK_ABP_SuckingPlant_HPP
#define UE4SS_SDK_ABP_SuckingPlant_HPP

class UABP_SuckingPlant_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_3;
    FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_2;
    FAnimNode_StateResult AnimGraphNode_CustomTransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_1;
    FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator;
    FAnimNode_StateResult AnimGraphNode_CustomTransitionResult;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    class ABP_SuckingPlant__C* SuckingPlant_Ref;
    FRotator Current Rotation;
    bool remove test;
    float Previous Yaw Value;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_E2AF042E4851FC81E3E48B8889497FB8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_DC2ED01848B1FF5FCA3FE5A3455DFEA8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_0EA1C1304252907E29C29C9A3ADDA903();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_8406EC9946965BC871F0FDAB578C9963();
    void BlueprintInitializeAnimation();
    void set rotation(FVector Target Rotation);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_6CCF84CD42BE5088DB62ECAA791DD0DD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_BlendSpaceEvaluator_FAF2A81D4D60864F94696AA842026B63();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_BlendSpaceEvaluator_A352300A4C09A2E51C85FEA937DACB1E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_94DB4A024F5107A011793D8A7A917BB8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_561A0D0D497D83C4B66150B3EF828CBC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuckingPlant_AnimGraphNode_TransitionResult_9167A2C140F772009EEF7A8C0F8436C7();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void Remove me too();
    void ExecuteUbergraph_ABP_SuckingPlant(int32 EntryPoint);
};

#endif
