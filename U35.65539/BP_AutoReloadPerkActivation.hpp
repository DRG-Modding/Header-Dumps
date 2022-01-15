#ifndef UE4SS_SDK_BP_AutoReloadPerkActivation_HPP
#define UE4SS_SDK_BP_AutoReloadPerkActivation_HPP

class UBP_AutoReloadPerkActivation_C : UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;
    UInventoryComponent* Inventory;
    float Duration;
    APlayerCharacter* Character;

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
    void OnItemEquipped_Event_0(AItem* Item);
    void ExecuteUbergraph_BP_AutoReloadPerkActivation(int32 EntryPoint, AItem* K2Node_CustomEvent_Item, UAmmoDrivenWeapon* K2Node_DynamicCast_AsAmmo_Driven_Weapon, bool K2Node_DynamicCast_bSuccess, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerCharacter* K2Node_Event_character, float K2Node_Event_value, bool CallFunc_IsLocallyControlled_ReturnValue);
}

#endif
