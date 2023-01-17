#ifndef UE4SS_SDK_ABP_AutoCannon_HPP
#define UE4SS_SDK_ABP_AutoCannon_HPP

class UABP_AutoCannon_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_AutoCannon(int32 EntryPoint);
};

#endif
