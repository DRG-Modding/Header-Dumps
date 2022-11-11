#ifndef UE4SS_SDK_WeaponDisplay_FlameThrower_HPP
#define UE4SS_SDK_WeaponDisplay_FlameThrower_HPP

class UWeaponDisplay_FlameThrower_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoBox;
    class UTextBlock* AmmoCount;
    class UImage* Image_88;

    void SetTotalCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_FlameThrower(int32 EntryPoint);
};

#endif
