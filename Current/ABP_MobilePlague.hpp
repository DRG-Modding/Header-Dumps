#ifndef UE4SS_SDK_ABP_MobilePlague_HPP
#define UE4SS_SDK_ABP_MobilePlague_HPP

class UABP_MobilePlague_C : public UEnemyAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_MobilePlague(int32 EntryPoint);
};

#endif
