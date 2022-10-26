#ifndef UE4SS_SDK_ABP_Bartender_HPP
#define UE4SS_SDK_ABP_Bartender_HPP

class UABP_Bartender_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Bartender(int32 EntryPoint);
};

#endif
