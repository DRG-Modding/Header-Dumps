#ifndef UE4SS_SDK_BP_JumpBoots_HPP
#define UE4SS_SDK_BP_JumpBoots_HPP

class UBP_JumpBoots_C : USetCooldownPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_JumpBoots(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, float K2Node_Event_value, UFallingStateComponent* CallFunc_GetComponentByClass_ReturnValue);
}

#endif
