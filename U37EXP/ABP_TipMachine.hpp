#ifndef UE4SS_SDK_ABP_TipMachine_HPP
#define UE4SS_SDK_ABP_TipMachine_HPP

class UABP_TipMachine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TipMachine(int32 EntryPoint);
};

#endif
