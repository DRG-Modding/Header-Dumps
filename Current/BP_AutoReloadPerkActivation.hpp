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
    void ExecuteUbergraph_BP_AutoReloadPerkActivation(int32 EntryPoint);
};

#endif
