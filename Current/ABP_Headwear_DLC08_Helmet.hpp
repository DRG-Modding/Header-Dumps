#ifndef UE4SS_SDK_ABP_Headwear_DLC08_Helmet_HPP
#define UE4SS_SDK_ABP_Headwear_DLC08_Helmet_HPP

class UABP_Headwear_DLC08_Helmet_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Headwear_DLC08_Helmet(int32 EntryPoint);
};

#endif
