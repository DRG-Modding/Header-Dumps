#ifndef UE4SS_SDK_ABP_ZipLineGun_A_AnimBlueprint_HPP
#define UE4SS_SDK_ABP_ZipLineGun_A_AnimBlueprint_HPP

class UABP_ZipLineGun_A_AnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ZipLineGun_A_AnimBlueprint(int32 EntryPoint);
};

#endif
