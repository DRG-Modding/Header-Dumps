#ifndef UE4SS_SDK_WeaponDisplay_LockOnRifle_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_LockOnRifle_AmmoCount_HPP

class UWeaponDisplay_LockOnRifle_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoBox;
    class UTextBlock* AmmoCount;
    class UImage* Image_88;
    class UTextBlock* MaxAmmo;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_LockOnRifle_AmmoCount(int32 EntryPoint);
};

#endif
