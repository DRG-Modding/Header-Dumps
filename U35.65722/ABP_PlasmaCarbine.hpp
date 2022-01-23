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
    void ExecuteUbergraph_ABP_PlasmaCarbine(int32 EntryPoint, float Temp_float_Variable, float CallFunc_SelectFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue);
};

#endif
