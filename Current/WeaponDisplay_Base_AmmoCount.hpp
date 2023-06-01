#ifndef UE4SS_SDK_WeaponDisplay_Base_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Base_AmmoCount_HPP

class UWeaponDisplay_Base_AmmoCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UItemAggregator* Aggregator;
    class AItem* Item;
    class UWidgetComponent* WidgComp;

    void SetMaxAmmo(int32 Value);
    void RequestRedraw();
    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void OnTotalAmountChanged(int32 Amount);
    void OnClipAmountChanged(int32 Amount);
    void OnCarriedAmountChanged(int32 Amount);
    void OnTotalAmountChange(int32 Amount);
    void InitializeAmmoWidget(class AItem* OwningItem, class UWidgetComponent* WidgetComp);
    void OnReloadStarted();
    void OnReloadComplete();
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void Reload Time Tick(float Amount);
    void OnItemUnequipped();
    void OnItemEquipped();
    void ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int32 EntryPoint);
};

#endif
