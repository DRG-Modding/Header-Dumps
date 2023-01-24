#ifndef UE4SS_SDK_ABP_plagueHeart_HPP
#define UE4SS_SDK_ABP_plagueHeart_HPP

class UABP_plagueHeart_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_plagueHeart(int32 EntryPoint);
};

#endif
