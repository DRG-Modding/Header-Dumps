#ifndef UE4SS_SDK_HUD_AmmoCount_Holder_HPP
#define UE4SS_SDK_HUD_AmmoCount_Holder_HPP

class UHUD_AmmoCount_Holder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* CounterSwitcher;
    class UOverlay* Holder_Custom;
    class USizeBox* Holder_Default;
    class UInventoryComponent* Inventory;

    void SetDefault();
    void SetFromItem(class AActor* InItem);
    void Construct();
    void OnItemEquipped_Event(class AItem* Item);
    void OnItemUnequipped_Event(class AItem* Item);
    void ExecuteUbergraph_HUD_AmmoCount_Holder(int32 EntryPoint);
};

#endif
