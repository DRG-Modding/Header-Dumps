#ifndef UE4SS_SDK_WeaponDisplay_ChargeBlaster_Charge_HPP
#define UE4SS_SDK_WeaponDisplay_ChargeBlaster_Charge_HPP

class UWeaponDisplay_ChargeBlaster_Charge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UBorder* Block1;
    class UBorder* Block2;
    class UBorder* Block3;
    class UBorder* Border_12;
    class UBorder* Border_13;
    class UBorder* Border_14;
    class UBorder* Border_15;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_88;
    FLinearColor ChargeColorOff;
    FLinearColor ChargeColor1;

    void Construct();
    void SetChargeValue(float ChargeValue, bool Overheated, bool ready, bool FullCharge);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge(int32 EntryPoint, bool Temp_bool_Variable, float K2Node_CustomEvent_ChargeValue, bool K2Node_CustomEvent_Overheated, bool K2Node_CustomEvent_Ready, bool K2Node_CustomEvent_FullCharge, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, bool Temp_bool_Variable_2, FLinearColor K2Node_Select_Default_2);
};

#endif
