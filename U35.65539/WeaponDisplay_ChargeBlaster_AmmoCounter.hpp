#ifndef UE4SS_SDK_WeaponDisplay_ChargeBlaster_AmmoCounter_HPP
#define UE4SS_SDK_WeaponDisplay_ChargeBlaster_AmmoCounter_HPP

class UWeaponDisplay_ChargeBlaster_AmmoCounter_C : UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AmmoCritical;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UTextBlock* DATA_AmmoCount;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_88;
    UImage* WarningOverlay;

    void UpdateAmount(int32 Value, bool CallFunc_Greater_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void SetTotalCount(int32 Value);
    void Construct();
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void SetClipCount(int32 Value);
    void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_AmmoCounter(int32 EntryPoint, int32 K2Node_Event_value, int32 K2Node_Event_value_1, int32 K2Node_Event_amount_1, int32 K2Node_Event_amount);
}

#endif
