#ifndef UE4SS_SDK_ABP_PlagueWormPod_HPP
#define UE4SS_SDK_ABP_PlagueWormPod_HPP

class UABP_PlagueWormPod_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PlagueWormPod(int32 EntryPoint);
};

#endif
