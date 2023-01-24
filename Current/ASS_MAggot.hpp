#ifndef UE4SS_SDK_ASS_MAggot_HPP
#define UE4SS_SDK_ASS_MAggot_HPP

class UASS_Maggot_C : public UAnimSharingStateInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ASS_Maggot(int32 EntryPoint);
};

#endif
