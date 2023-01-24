#ifndef UE4SS_SDK_ABP_Crystal_A_Skeleton_HPP
#define UE4SS_SDK_ABP_Crystal_A_Skeleton_HPP

class UABP_Crystal_A_Skeleton_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Crystal_A_Skeleton(int32 EntryPoint);
};

#endif
