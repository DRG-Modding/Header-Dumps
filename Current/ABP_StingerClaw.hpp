#ifndef UE4SS_SDK_ABP_StingerClaw_HPP
#define UE4SS_SDK_ABP_StingerClaw_HPP

class UABP_StingerClaw_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_StingerClaw(int32 EntryPoint);
};

#endif
