#ifndef UE4SS_SDK_WeaponDisplay_ChargeBlaster_Heat_HPP
#define UE4SS_SDK_WeaponDisplay_ChargeBlaster_Heat_HPP

class UWeaponDisplay_ChargeBlaster_Heat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_88;
    class UProgressBar* ProgressBar_0;
    class UTextBlock* TextBlock_HeatValue;
    FLinearColor OverheatTint;
    class AItem* Item;

    void SetHeatValue(float HeatPercentage, bool overHeated);
    void Construct();
    void Init(class AItem* Item);
    void On UnEquipped();
    void OnEquipped();
    void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Heat(int32 EntryPoint);
};

#endif
