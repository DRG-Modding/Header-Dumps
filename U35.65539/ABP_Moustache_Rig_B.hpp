#ifndef UE4SS_SDK_ABP_Moustache_Rig_B_HPP
#define UE4SS_SDK_ABP_Moustache_Rig_B_HPP

class UABP_Moustache_Rig_B_C : UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Moustache_Rig_B(int32 EntryPoint);
}

#endif
