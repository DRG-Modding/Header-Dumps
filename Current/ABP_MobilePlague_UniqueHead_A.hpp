#ifndef UE4SS_SDK_ABP_MobilePlague_UniqueHead_A_HPP
#define UE4SS_SDK_ABP_MobilePlague_UniqueHead_A_HPP

class UABP_MobilePlague_UniqueHead_A_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    float IdleStartPosition;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_MobilePlague_UniqueHead_A(int32 EntryPoint);
};

#endif
