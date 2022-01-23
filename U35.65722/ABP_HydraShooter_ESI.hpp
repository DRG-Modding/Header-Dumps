#ifndef UE4SS_SDK_ABP_HydraShooter_ESI_HPP
#define UE4SS_SDK_ABP_HydraShooter_ESI_HPP

class UABP_HydraShooter_ESI_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HydraShooter_ESI(int32 EntryPoint);
};

#endif
