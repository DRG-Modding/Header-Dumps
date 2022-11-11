#ifndef UE4SS_SDK_ABP_Crossbow_A_HPP
#define UE4SS_SDK_ABP_Crossbow_A_HPP

class UABP_Crossbow_A_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Crossbow_A(int32 EntryPoint);
};

#endif
