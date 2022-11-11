#ifndef UE4SS_SDK_ABP_Pipeline_Builder_HPP
#define UE4SS_SDK_ABP_Pipeline_Builder_HPP

class UABP_Pipeline_Builder_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    float ElevationPercent;
    float DistancePercent;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_8C56493144034886A92FCC8F2BC53356();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pipeline_Builder_AnimGraphNode_ModifyBone_6CE1F974493F8A0CC562868BCA6FADCD();
    void ExecuteUbergraph_ABP_Pipeline_Builder(int32 EntryPoint);
};

#endif
