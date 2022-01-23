#ifndef UE4SS_SDK_BP_AutoReloadPerkActivation_HPP
#define UE4SS_SDK_BP_AutoReloadPerkActivation_HPP

class UBP_AutoReloadPerkActivation_C : public UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInventoryComponent* Inventory;
    float Duration;
    class APlayerCharacter* Character;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void OnItemEquipped_Event_0(class AItem* Item);
    void ExecuteUbergraph_BP_AutoReloadPerkActivation(int32 EntryPoint, class AItem* K2Node_CustomEvent_Item, class AAmmoDrivenWeapon* K2Node_DynamicCast_AsAmmo_Driven_Weapon, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_BP_AutoReloadPerkActivationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerCharacter* K2Node_Event_character, float K2Node_Event_value, bool CallFunc_IsLocallyControlled_ReturnValue);
};

#endif
