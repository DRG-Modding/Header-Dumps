#ifndef UE4SS_SDK_ABP_Beard_Rig_C_HPP
#define UE4SS_SDK_ABP_Beard_Rig_C_HPP

class UABP_Beard_Rig_C_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Beard_Rig_C(int32 EntryPoint);
};

#endif
