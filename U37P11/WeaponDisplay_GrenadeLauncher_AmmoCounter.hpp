#ifndef UE4SS_SDK_WeaponDisplay_GrenadeLauncher_AmmoCounter_HPP
#define UE4SS_SDK_WeaponDisplay_GrenadeLauncher_AmmoCounter_HPP

class UWeaponDisplay_GrenadeLauncher_AmmoCounter_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AmmoCritical;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UImage* Image_88;
    class UTextBlock* MaxAmmo;
    class UTextBlock* TextBlock_0;
    class UImage* WarningOverlay;

    void Construct();
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter(int32 EntryPoint);
};

#endif
