#ifndef UE4SS_SDK_WeaponDisplay_Crossbow_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Crossbow_AmmoCount_HPP

class UWeaponDisplay_Crossbow_AmmoCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* ArrowSwitcher;
    class UBasic_Image_C* EffectArrow;
    class UBasic_Image_C* SimpleArrow;
    class UTextBlock* Text_Default;
    class AItem* Item;
    class ACrossbow* Crossbow;

    void GetArrowIcon(class UTexture2D*& OutIcon);
    void Refresh();
    void SetItem(class AItem* InItem);
    void OnAmountChanged(int32 Amount);
    void OnArrowChanged(bool InDefaultArrow);
    void OnItemSet();
    void OnCrossbowEquipped();
    void OnCrossbowUnEquipped();
    void ExecuteUbergraph_WeaponDisplay_Crossbow_AmmoCount(int32 EntryPoint);
};

#endif
