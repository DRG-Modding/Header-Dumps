#ifndef UE4SS_SDK_WeaponDisplay_Drill_Heat_HPP
#define UE4SS_SDK_WeaponDisplay_Drill_Heat_HPP

class UWeaponDisplay_Drill_Heat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Flash;
    class UImage* Image_88;
    class UImage* Image_131;
    class UTextBlock* TextBlock_440;
    class UTextBlock* TextBlock_HeatValue;
    class AItem* Item;

    void SetHeatValue(float HeatPercentage, bool overHeated);
    void Construct();
    void Init(class AItem* Item);
    void On UnEquipped();
    void OnEquipped();
    void ExecuteUbergraph_WeaponDisplay_Drill_Heat(int32 EntryPoint);
};

#endif
