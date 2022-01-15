#ifndef UE4SS_SDK_ABP_SentryGun_Engineer_HPP
#define UE4SS_SDK_ABP_SentryGun_Engineer_HPP

class UABP_SentryGun_Engineer_C : USentryGunAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_Slot AnimGraphNode_Slot;
    UAnimSequenceBase* FoldOutSequence;
    float FoldOutLength;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_068DF41E4B8B0454D03DCA9AA7A7BB73();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_E56B43184AF24B45A18EE89772B077B8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_SequenceEvaluator_C693E2CD403BD3554BAE139B739F587C();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_SentryGun_Engineer(int32 EntryPoint, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue_1);
}

#endif
