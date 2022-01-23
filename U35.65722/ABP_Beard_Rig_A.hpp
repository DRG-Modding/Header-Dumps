#ifndef UE4SS_SDK_ABP_Beard_Rig_A_HPP
#define UE4SS_SDK_ABP_Beard_Rig_A_HPP

class UABP_Beard_Rig_A_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Beard_Rig_A(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

#endif
