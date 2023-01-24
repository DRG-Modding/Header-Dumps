#ifndef UE4SS_SDK_ABP_Beard_Rig_B_HPP
#define UE4SS_SDK_ABP_Beard_Rig_B_HPP

class UABP_Beard_Rig_B_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Beard_Rig_B(int32 EntryPoint);
};

#endif
