#ifndef UE4SS_SDK_ABP_TentacleHatch_HPP
#define UE4SS_SDK_ABP_TentacleHatch_HPP

class UABP_TentacleHatch_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    bool IsOpen;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TentacleHatch(int32 EntryPoint);
};

#endif
