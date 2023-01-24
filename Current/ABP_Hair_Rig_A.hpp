#ifndef UE4SS_SDK_ABP_Hair_Rig_A_HPP
#define UE4SS_SDK_ABP_Hair_Rig_A_HPP

class UABP_Hair_Rig_A_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Hair_Rig_A(int32 EntryPoint);
};

#endif
