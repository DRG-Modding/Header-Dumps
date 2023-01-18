#ifndef UE4SS_SDK_WeaponDisplay_Pistol_AmmoCount2_HPP
#define UE4SS_SDK_WeaponDisplay_Pistol_AmmoCount2_HPP

class UWeaponDisplay_Pistol_AmmoCount2_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoBox;
    class UTextBlock* AmmoCount;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UImage* Image_88;
    class UTextBlock* MaxAmmo;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_Pistol_AmmoCount2(int32 EntryPoint);
};

#endif
