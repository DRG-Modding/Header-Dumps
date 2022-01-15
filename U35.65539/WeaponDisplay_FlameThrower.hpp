#ifndef UE4SS_SDK_WeaponDisplay_FlameThrower_HPP
#define UE4SS_SDK_WeaponDisplay_FlameThrower_HPP

class UWeaponDisplay_FlameThrower_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* AmmoBox;
    UTextBlock* AmmoCount;
    UImage* Image_88;

    void SetTotalCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_FlameThrower(int32 EntryPoint, int32 K2Node_Event_value, FText CallFunc_Conv_IntToText_ReturnValue);
}

#endif
