#ifndef UE4SS_SDK_LIB_Intoxication_HPP
#define UE4SS_SDK_LIB_Intoxication_HPP

class ULIB_Intoxication_C : public UBlueprintFunctionLibrary
{

    void GetAlcoholStrengthPct(EDrinkableAlcoholStrength Strength, class APlayerCharacter* Character, class UObject* __WorldContext, int32& Percent, EDrinkableAlcoholStrength Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue_4, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
    void GetAlcoholStrengthName(EDrinkableAlcoholStrength Strength, bool UpperCase, class UObject* __WorldContext, FText& Name, bool Temp_bool_Variable, EDrinkableAlcoholStrength Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default_1);
};

#endif
