#ifndef UE4SS_SDK_WeaponDisplay_Crossbow_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Crossbow_AmmoCount_HPP

class UWeaponDisplay_Crossbow_AmmoCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* Arrow_Default;
    class UBasic_Image_C* Arrow_Special;
    class UWidgetSwitcher* ArrowSwitcher;
    class UTextBlock* Text_Default;
    class AItem* Item;
    class ACrossbow* Crossbow;

    void GetArrowIcon(class UTexture2D*& OutIcon);
    void Refresh();
    void SetItem(class AItem* InItem);
    void OnAmountChanged(int32 Amount);
    void OnArrowChanged(bool InDefaultArrow);
    void ExecuteUbergraph_WeaponDisplay_Crossbow_AmmoCount(int32 EntryPoint);
};

#endif
