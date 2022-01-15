#ifndef UE4SS_SDK_WeaponDisplay_Zipline_AmmoCount2_HPP
#define UE4SS_SDK_WeaponDisplay_Zipline_AmmoCount2_HPP

class UWeaponDisplay_Zipline_AmmoCount2_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* AmmoBox;
    UTextBlock* AmmoCount;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UImage* Image_88;
    UTextBlock* MaxAmmo;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2(int32 EntryPoint, int32 K2Node_Event_value_1, int32 K2Node_Event_value, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
}

#endif
