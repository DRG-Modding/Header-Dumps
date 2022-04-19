#ifndef UE4SS_SDK_ABP_ConfettiPipe_A_HPP
#define UE4SS_SDK_ABP_ConfettiPipe_A_HPP

class UABP_ConfettiPipe_A_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ConfettiPipe_A(int32 EntryPoint);
};

#endif
