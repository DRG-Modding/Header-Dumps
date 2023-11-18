#ifndef UE4SS_SDK_ABP_Vanity_Headwear_XMAS2023_HPP
#define UE4SS_SDK_ABP_Vanity_Headwear_XMAS2023_HPP

class UABP_Vanity_Headwear_XMAS2023_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Vanity_Headwear_XMAS2023(int32 EntryPoint);
};

#endif
