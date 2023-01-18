#ifndef UE4SS_SDK_ABP_JellyBreederShowroom_HPP
#define UE4SS_SDK_ABP_JellyBreederShowroom_HPP

class UABP_JellyBreederShowroom_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_JellyBreederShowroom(int32 EntryPoint);
};

#endif
