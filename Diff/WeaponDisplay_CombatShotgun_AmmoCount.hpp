#ifndef UE4SS_SDK_WeaponDisplay_CombatShotgun_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_CombatShotgun_AmmoCount_HPP

class UWeaponDisplay_CombatShotgun_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoBox;
    class UTextBlock* AmmoCount;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_88;
    class UTextBlock* MaxAmmo;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_CombatShotgun_AmmoCount(int32 EntryPoint);
};

#endif
