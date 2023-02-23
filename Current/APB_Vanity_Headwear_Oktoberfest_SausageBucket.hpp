#ifndef UE4SS_SDK_APB_Vanity_Headwear_Oktoberfest_SausageBucket_HPP
#define UE4SS_SDK_APB_Vanity_Headwear_Oktoberfest_SausageBucket_HPP

class UAPB_Vanity_Headwear_Oktoberfest_SausageBucket_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_APB_Vanity_Headwear_Oktoberfest_SausageBucket(int32 EntryPoint);
};

#endif
