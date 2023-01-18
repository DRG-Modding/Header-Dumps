#ifndef UE4SS_SDK_ABP_Halloween_Skull_HPP
#define UE4SS_SDK_ABP_Halloween_Skull_HPP

class UABP_Halloween_Skull_C : public UHalloweenSkullAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Halloween_Skull_AnimGraphNode_ModifyBone_965B54AD45FC05E439C37C9C7640D796();
    void ExecuteUbergraph_ABP_Halloween_Skull(int32 EntryPoint);
};

#endif
