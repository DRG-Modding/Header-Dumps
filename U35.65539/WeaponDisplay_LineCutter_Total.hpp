#ifndef UE4SS_SDK_WeaponDisplay_LineCutter_Total_HPP
#define UE4SS_SDK_WeaponDisplay_LineCutter_Total_HPP

class UWeaponDisplay_LineCutter_Total_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UImage* Image_88;
    UTextBlock* MaxAmmo;
    UTextBlock* TextBlock_0;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_LineCutter_Total(int32 EntryPoint, int32 K2Node_Event_value_1, FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_Event_value);
}

#endif
