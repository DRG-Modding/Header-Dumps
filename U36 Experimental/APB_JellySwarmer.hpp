#ifndef UE4SS_SDK_APB_JellySwarmer_HPP
#define UE4SS_SDK_APB_JellySwarmer_HPP

class UAPB_JellySwarmer_C : public UJellyFishAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_APB_JellySwarmer(int32 EntryPoint);
};

#endif
