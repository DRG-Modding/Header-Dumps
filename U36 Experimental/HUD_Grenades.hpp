#ifndef UE4SS_SDK_HUD_Grenades_HPP
#define UE4SS_SDK_HUD_Grenades_HPP

class UHUD_Grenades_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_GrenadeCount;
    class UHUD_GrenadeIcon_C* HUD_GrenadeIcon;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UInventoryComponent* Inventory;
    class AThrownGrenadeItem* GrenadeItem;
    bool LaserpointerPressed;
    bool ItemEquipped;

    void PreConstruct(bool IsDesignTime);
    void OnGrenadeCountChanged(int32 CurrentCount);
    void Construct();
    void Setup Dynamic HUD();
    void OnItemEquipped_Event(class AItem* Item);
    void OnItemUnequipped_Event(class AItem* Item);
    void Update Visibility();
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void ExecuteUbergraph_HUD_Grenades(int32 EntryPoint);
};

#endif
