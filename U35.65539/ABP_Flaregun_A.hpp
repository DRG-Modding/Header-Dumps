#ifndef UE4SS_SDK_ABP_Flaregun_A_HPP
#define UE4SS_SDK_ABP_Flaregun_A_HPP

class UABP_Flaregun_A_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Flaregun_A(int32 EntryPoint);
}

#endif
