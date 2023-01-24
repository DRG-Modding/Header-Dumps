#ifndef UE4SS_SDK_WeaponDisplay_DualSMG_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_DualSMG_AmmoCount_HPP

class UWeaponDisplay_DualSMG_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UTextBlock* DATA_AmmoClip;
    class UTextBlock* DATA_AmmoTotal;
    class UImage* Image_88;

    void SetClipCount(int32 Value);
    void SetTotalCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_DualSMG_AmmoCount(int32 EntryPoint);
};

#endif
