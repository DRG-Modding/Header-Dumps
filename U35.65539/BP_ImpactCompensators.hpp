#ifndef UE4SS_SDK_BP_ImpactCompensators_HPP
#define UE4SS_SDK_BP_ImpactCompensators_HPP

class UBP_ImpactCompensators_C : USetCooldownPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_ImpactCompensators(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, float K2Node_Event_value);
}

#endif
