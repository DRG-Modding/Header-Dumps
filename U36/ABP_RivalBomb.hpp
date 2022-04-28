#ifndef UE4SS_SDK_ABP_RivalBomb_HPP
#define UE4SS_SDK_ABP_RivalBomb_HPP

class UABP_RivalBomb_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    float Rotation;
    float RotationSpeed;
    bool IsOpen;
    float AgitationLevel;
    bool IsClosed;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBomb_AnimGraphNode_ModifyBone_376CDBEF446C69E45C49AEA65FB4C1C9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBomb_AnimGraphNode_ModifyBone_7CAB1E7641E83FE5F4FDA7898EBECCAF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBomb_AnimGraphNode_ModifyBone_2C748F3C4217ED4C42063A866AB5D90B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBomb_AnimGraphNode_ModifyBone_44BC3A2E46E3E11D8F23269E56ABEF22();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RivalBomb_AnimGraphNode_TransitionResult_D5441E4A4BF498785537A691914EE6A0();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_RivalBomb(int32 EntryPoint);
};

#endif
