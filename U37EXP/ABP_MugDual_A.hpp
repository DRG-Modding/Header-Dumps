#ifndef UE4SS_SDK_ABP_MugDual_A_HPP
#define UE4SS_SDK_ABP_MugDual_A_HPP

class UABP_MugDual_A_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_MugDual_A(int32 EntryPoint);
};

#endif
