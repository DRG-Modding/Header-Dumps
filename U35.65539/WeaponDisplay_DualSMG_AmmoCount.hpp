#ifndef UE4SS_SDK_WeaponDisplay_DualSMG_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_DualSMG_AmmoCount_HPP

class UWeaponDisplay_DualSMG_AmmoCount_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UTextBlock* DATA_AmmoClip;
    UTextBlock* DATA_AmmoTotal;
    UImage* Image_88;

    void SetClipCount(int32 Value);
    void SetTotalCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_DualSMG_AmmoCount(int32 EntryPoint, int32 K2Node_Event_value_1, int32 CallFunc_Divide_IntInt_ReturnValue, int32 K2Node_Event_value, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_1);
}

#endif
