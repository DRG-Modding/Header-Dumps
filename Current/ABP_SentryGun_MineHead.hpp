#ifndef UE4SS_SDK_ABP_SentryGun_MineHead_HPP
#define UE4SS_SDK_ABP_SentryGun_MineHead_HPP

class UABP_SentryGun_MineHead_C : public USentryGunAnimInstance
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
    float FoldOutLength;
    class UAnimSequenceBase* FoldOutSequence;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_ModifyBone_29245DD149B1558D50DED6A999B6E2A1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_ModifyBone_4F9CC0C04AB90D03D69114A047514B0B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_MineHead_AnimGraphNode_SequenceEvaluator_33158AA143F6B4A10E29DDA22702F35B();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_SentryGun_MineHead(int32 EntryPoint);
};

#endif
