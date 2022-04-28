#ifndef UE4SS_SDK_APB_Spawner_HPP
#define UE4SS_SDK_APB_Spawner_HPP

class UAPB_Spawner_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_APB_Spawner(int32 EntryPoint);
};

#endif
