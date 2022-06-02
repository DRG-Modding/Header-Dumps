#ifndef UE4SS_SDK_WeaponDisplay_LineCutter_Total_HPP
#define UE4SS_SDK_WeaponDisplay_LineCutter_Total_HPP

class UWeaponDisplay_LineCutter_Total_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UImage* Image_88;
    class UTextBlock* MaxAmmo;
    class UTextBlock* TextBlock_0;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_LineCutter_Total(int32 EntryPoint);
};

#endif
