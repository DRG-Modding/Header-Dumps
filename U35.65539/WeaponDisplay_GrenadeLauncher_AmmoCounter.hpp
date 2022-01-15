#ifndef UE4SS_SDK_WeaponDisplay_GrenadeLauncher_AmmoCounter_HPP
#define UE4SS_SDK_WeaponDisplay_GrenadeLauncher_AmmoCounter_HPP

class UWeaponDisplay_GrenadeLauncher_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AmmoCritical;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UImage* Image_88;
    UTextBlock* MaxAmmo;
    UTextBlock* TextBlock_0;
    UImage* WarningOverlay;

    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void Construct();
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter(int32 EntryPoint, int32 K2Node_Event_value_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 K2Node_Event_value, int32 K2Node_Event_amount_1, int32 K2Node_Event_amount, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, UClipBasedItemAggregator* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetTotalAmount_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetClipAmount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
}

#endif
