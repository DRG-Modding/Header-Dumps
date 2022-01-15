#ifndef UE4SS_SDK_WeaponDisplay_ChargeBlaster_Charge_HPP
#define UE4SS_SDK_WeaponDisplay_ChargeBlaster_Charge_HPP

class UWeaponDisplay_ChargeBlaster_Charge_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    UBorder* Block1;
    UBorder* Block2;
    UBorder* Block3;
    UBorder* Border_12;
    UBorder* Border_13;
    UBorder* Border_14;
    UBorder* Border_15;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_88;
    FLinearColor ChargeColorOff;
    FLinearColor ChargeColor1;

    void Construct();
    void SetChargeValue(float ChargeValue, bool Overheated, bool ready, bool FullCharge);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge(int32 EntryPoint, bool Temp_bool_Variable, float K2Node_CustomEvent_ChargeValue, bool K2Node_CustomEvent_Overheated, bool K2Node_CustomEvent_Ready, bool K2Node_CustomEvent_FullCharge, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, bool Temp_bool_Variable_2, FLinearColor K2Node_Select_Default_2);
}

#endif
