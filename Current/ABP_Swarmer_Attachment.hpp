#ifndef UE4SS_SDK_ABP_Swarmer_Attachment_HPP
#define UE4SS_SDK_ABP_Swarmer_Attachment_HPP

class UABP_Swarmer_Attachment_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Swarmer_Attachment(int32 EntryPoint);
};

#endif
