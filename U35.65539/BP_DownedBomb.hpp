#ifndef UE4SS_SDK_BP_DownedBomb_HPP
#define UE4SS_SDK_BP_DownedBomb_HPP

class UBP_DownedBomb_C : UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_DownedBomb(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, float K2Node_Event_value, bool CallFunc_HasAuthority_ReturnValue, UDownedStateComponent* CallFunc_GetComponentByClass_ReturnValue, UDamageComponent* CallFunc_CreateDownedBombDamage_ReturnValue);
}

#endif
