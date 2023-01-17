#ifndef UE4SS_SDK_ABP_PlasmaCarbine_HPP
#define UE4SS_SDK_ABP_PlasmaCarbine_HPP

class UABP_PlasmaCarbine_C : public UAmmoDrivenWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    float FireSpinRate;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_PlasmaCarbine(int32 EntryPoint);
};

#endif
