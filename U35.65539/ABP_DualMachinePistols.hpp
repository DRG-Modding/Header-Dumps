#ifndef UE4SS_SDK_ABP_DualMachinePistols_HPP
#define UE4SS_SDK_ABP_DualMachinePistols_HPP

class UABP_DualMachinePistols_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_DualMachinePistols(int32 EntryPoint);
}

#endif
