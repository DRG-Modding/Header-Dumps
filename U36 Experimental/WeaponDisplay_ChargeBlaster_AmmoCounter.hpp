#ifndef UE4SS_SDK_WeaponDisplay_ChargeBlaster_AmmoCounter_HPP
#define UE4SS_SDK_WeaponDisplay_ChargeBlaster_AmmoCounter_HPP

class UWeaponDisplay_ChargeBlaster_AmmoCounter_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AmmoCritical;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UTextBlock* DATA_AmmoCount;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_88;
    class UImage* WarningOverlay;

    void UpdateAmount(int32 Value);
    void SetTotalCount(int32 Value);
    void Construct();
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter(int32 EntryPoint);
};

#endif
