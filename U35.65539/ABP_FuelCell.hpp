#ifndef UE4SS_SDK_ABP_FuelCell_HPP
#define UE4SS_SDK_ABP_FuelCell_HPP

class UABP_FuelCell_C : UAnimInstance
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
    float IsDrilling;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetBuildProgress(float Progress);
    void SetDefendProgress(float Progress);
    void SetIsDrilling(bool IsDrilling);
    void ExecuteUbergraph_ABP_FuelCell(int32 EntryPoint, bool K2Node_CustomEvent_IsDrilling, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_CustomEvent_progress_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_CustomEvent_progress);
}

#endif
