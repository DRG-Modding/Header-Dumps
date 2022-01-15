#ifndef UE4SS_SDK_ABP_Vanity_Headwear_PartyHat_YearThree_Skeleton_HPP
#define UE4SS_SDK_ABP_Vanity_Headwear_PartyHat_YearThree_Skeleton_HPP

class UABP_Vanity_Headwear_PartyHat_YearThree_Skeleton_C : UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Vanity_Headwear_PartyHat_YearThree_Skeleton(int32 EntryPoint);
}

#endif
