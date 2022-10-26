#ifndef UE4SS_SDK_ABP_Detonator_HPP
#define UE4SS_SDK_ABP_Detonator_HPP

class UABP_Detonator_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    bool IsOpen;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Detonator(int32 EntryPoint);
};

#endif
