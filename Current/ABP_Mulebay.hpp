#ifndef UE4SS_SDK_ABP_Mulebay_HPP
#define UE4SS_SDK_ABP_Mulebay_HPP

class UABP_Mulebay_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    bool IsOpen;
    bool IsOpening;
    bool IsClosing;
    bool IsClosed;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Mulebay(int32 EntryPoint);
};

#endif
