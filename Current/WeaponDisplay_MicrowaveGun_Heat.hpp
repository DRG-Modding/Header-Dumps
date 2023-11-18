#ifndef UE4SS_SDK_WeaponDisplay_MicrowaveGun_Heat_HPP
#define UE4SS_SDK_WeaponDisplay_MicrowaveGun_Heat_HPP

class UWeaponDisplay_MicrowaveGun_Heat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Overheat;
    class UImage* Border;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_88;
    class UProgressBar* ProgressBar_0;
    class UTextBlock* Text_Percentage;
    FLinearColor OverheatTint;
    class AItem* Item;

    void SetHeatValue(float HeatPercentage, bool overHeated);
    void Construct();
    void Init(class AItem* Item);
    void OnEquipped();
    void OnUnequipped();
    void ExecuteUbergraph_WeaponDisplay_MicrowaveGun_Heat(int32 EntryPoint);
};

#endif
