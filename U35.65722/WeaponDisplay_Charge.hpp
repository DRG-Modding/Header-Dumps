#ifndef UE4SS_SDK_WeaponDisplay_Charge_HPP
#define UE4SS_SDK_WeaponDisplay_Charge_HPP

class UWeaponDisplay_Charge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_88;
    class UTextBlock* TextBlock_HeatValue;
    class UTextBlock* TextBlock_Status;

    void SetChargeValue(float ChargeValue, bool Overheated, bool ready, bool FullCharge);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_Charge(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, float K2Node_CustomEvent_ChargeValue, bool K2Node_CustomEvent_Overheated, bool K2Node_CustomEvent_Ready, bool K2Node_CustomEvent_FullCharge, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2);
};

#endif
