#ifndef UE4SS_SDK_ABP_GliderBeast_MinerManual_HPP
#define UE4SS_SDK_ABP_GliderBeast_MinerManual_HPP

class UABP_GliderBeast_MinerManual_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_GliderBeast_MinerManual(int32 EntryPoint);
};

#endif
