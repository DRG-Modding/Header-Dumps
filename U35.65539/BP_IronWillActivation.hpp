#ifndef UE4SS_SDK_BP_IronWillActivation_HPP
#define UE4SS_SDK_BP_IronWillActivation_HPP

class UBP_IronWillActivation_C : UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_IronWillActivation(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, float K2Node_Event_value, UStatusEffect* CallFunc_SetIronWillStatusEffect_ReturnValue);
}

#endif
