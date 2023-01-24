#ifndef UE4SS_SDK_ABP_Spider_Showroom_HPP
#define UE4SS_SDK_ABP_Spider_Showroom_HPP

class UABP_Spider_Showroom_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Spider_Showroom(int32 EntryPoint);
};

#endif
