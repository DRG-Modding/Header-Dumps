#ifndef UE4SS_SDK_BP_DashActivation_HPP
#define UE4SS_SDK_BP_DashActivation_HPP

class UBP_DashActivation_C : USetCooldownPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_DashActivation(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, float K2Node_Event_value);
}

#endif
