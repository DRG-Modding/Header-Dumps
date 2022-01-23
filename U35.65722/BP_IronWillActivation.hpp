#ifndef UE4SS_SDK_BP_IronWillActivation_HPP
#define UE4SS_SDK_BP_IronWillActivation_HPP

class UBP_IronWillActivation_C : public UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_IronWillActivation(int32 EntryPoint, class APlayerCharacter* K2Node_Event_character, float K2Node_Event_value, class UStatusEffect* CallFunc_SetIronWillStatusEffect_ReturnValue);
};

#endif
