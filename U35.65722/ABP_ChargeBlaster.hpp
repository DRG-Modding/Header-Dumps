#ifndef UE4SS_SDK_ABP_ChargeBlaster_HPP
#define UE4SS_SDK_ABP_ChargeBlaster_HPP

class UABP_ChargeBlaster_C : public UChargedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ChargeBlaster(int32 EntryPoint);
};

#endif
