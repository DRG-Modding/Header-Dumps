#ifndef UE4SS_SDK_BP_DownedBomb_HPP
#define UE4SS_SDK_BP_DownedBomb_HPP

class UBP_DownedBomb_C : public UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_DownedBomb(int32 EntryPoint, class APlayerCharacter* K2Node_Event_character, float K2Node_Event_value, bool CallFunc_HasAuthority_ReturnValue, class UDownedStateComponent* CallFunc_GetComponentByClass_ReturnValue, class UDamageComponent* CallFunc_CreateDownedBombDamage_ReturnValue);
};

#endif
