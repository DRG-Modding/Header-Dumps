#ifndef UE4SS_SDK_ABP_Pistol_B_HPP
#define UE4SS_SDK_ABP_Pistol_B_HPP

class UABP_Pistol_B_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Pistol_B(int32 EntryPoint);
};

#endif
