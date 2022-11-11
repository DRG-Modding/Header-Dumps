#ifndef UE4SS_SDK_ABP_Forge_HPP
#define UE4SS_SDK_ABP_Forge_HPP

class UABP_Forge_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Forge(int32 EntryPoint);
};

#endif
