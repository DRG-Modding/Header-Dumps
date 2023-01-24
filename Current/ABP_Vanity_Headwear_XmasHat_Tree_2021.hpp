#ifndef UE4SS_SDK_ABP_Vanity_Headwear_XmasHat_Tree_2021_HPP
#define UE4SS_SDK_ABP_Vanity_Headwear_XmasHat_Tree_2021_HPP

class UABP_Vanity_Headwear_XmasHat_Tree_2021_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Vanity_Headwear_XmasHat_Tree_2021(int32 EntryPoint);
};

#endif
