#ifndef UE4SS_SDK_WeaponDisplay_BoltActionRifle_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_BoltActionRifle_AmmoCount_HPP

class UWeaponDisplay_BoltActionRifle_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoBox;
    class UTextBlock* AmmoCount;
    class UImage* Image_88;
    class UTextBlock* MaxAmmo;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_BoltActionRifle_AmmoCount(int32 EntryPoint);
};

#endif
