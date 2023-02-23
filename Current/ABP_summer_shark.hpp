#ifndef UE4SS_SDK_ABP_summer_shark_HPP
#define UE4SS_SDK_ABP_summer_shark_HPP

class UABP_summer_shark_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_summer_shark(int32 EntryPoint);
};

#endif
