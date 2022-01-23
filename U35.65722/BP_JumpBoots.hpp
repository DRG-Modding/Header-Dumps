#ifndef UE4SS_SDK_BP_JumpBoots_HPP
#define UE4SS_SDK_BP_JumpBoots_HPP

class UBP_JumpBoots_C : public USetCooldownPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_JumpBoots(int32 EntryPoint, class APlayerCharacter* K2Node_Event_character, float K2Node_Event_value, class UFallingStateComponent* CallFunc_GetComponentByClass_ReturnValue);
};

#endif
