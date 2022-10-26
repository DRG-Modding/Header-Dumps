#ifndef UE4SS_SDK_ABP_Headwear_Flamingo_HPP
#define UE4SS_SDK_ABP_Headwear_Flamingo_HPP

class UABP_Headwear_Flamingo_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Headwear_Flamingo(int32 EntryPoint);
};

#endif
