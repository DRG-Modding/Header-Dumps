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
    void ExecuteUbergraph_WeaponDisplay_BoltActionRifle_AmmoCount(int32 EntryPoint, int32 K2Node_Event_value_1, int32 K2Node_Event_value, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
};

#endif
