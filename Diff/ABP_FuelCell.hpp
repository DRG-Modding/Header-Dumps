#ifndef UE4SS_SDK_ABP_FuelCell_HPP
#define UE4SS_SDK_ABP_FuelCell_HPP

class UABP_FuelCell_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    float BuildProgress;
    float DefendProgress;
    float isDrilling;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetBuildProgress(float Progress);
    void SetDefendProgress(float Progress);
    void SetIsDrilling(bool isDrilling);
    void ExecuteUbergraph_ABP_FuelCell(int32 EntryPoint);
};

#endif
