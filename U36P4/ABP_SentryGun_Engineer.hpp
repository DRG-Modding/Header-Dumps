#ifndef UE4SS_SDK_ABP_SentryGun_Engineer_HPP
#define UE4SS_SDK_ABP_SentryGun_Engineer_HPP

class UABP_SentryGun_Engineer_C : public USentryGunAnimInstance
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
    class UAnimSequenceBase* FoldOutSequence;
    float FoldOutLength;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_E56B43184AF24B45A18EE89772B077B8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_068DF41E4B8B0454D03DCA9AA7A7BB73();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_SequenceEvaluator_C693E2CD403BD3554BAE139B739F587C();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_SentryGun_Engineer(int32 EntryPoint);
};

#endif
