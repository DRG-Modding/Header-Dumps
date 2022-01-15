#ifndef UE4SS_SDK_LIB_Text_HPP
#define UE4SS_SDK_LIB_Text_HPP

class ULIB_Text_C : UBlueprintFunctionLibrary
{

    void Select CharacterText(UPlayerCharacter* Character, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, UObject* __WorldContext, FText& OutText, UPlayerCharacterID* BoscoID, UPlayerCharacterID* ScoutID, UPlayerCharacterID* GunnerID, UPlayerCharacterID* DrillerID, UPlayerCharacterID* EngineerID, UPlayerCharacterID* CallFunc_GetCharacterIDFromCharacter_ReturnValue, FText CallFunc_Select_Character_ID_Text_OutText);
    void Select Character Class Text(UPlayerCharacterID* CharacterClass, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, UObject* __WorldContext, FText& OutText, UPlayerCharacterID* BoscoID, UPlayerCharacterID* ScoutID, UPlayerCharacterID* GunnerID, UPlayerCharacterID* DrillerID, UPlayerCharacterID* EngineerID, FText CallFunc_Select_Character_ID_Text_OutText);
    void Select Character ID Text(UPlayerCharacterID* characterID, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, UObject* __WorldContext, FText& OutText, UPlayerCharacterID* BoscoID, UPlayerCharacterID* ScoutID, UPlayerCharacterID* GunnerID, UPlayerCharacterID* DrillerID, UPlayerCharacterID* EngineerID, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4);
    void GetTimeText(float Dividend, UObject* __WorldContext, FText& Text, bool Temp_bool_Variable, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_FMod_Remainder_1, int32 CallFunc_FMod_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, bool CallFunc_Greater_IntInt_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, FText K2Node_Select_Default);
    void SetTextCased(UTextBlock*& Target, FText InText, uint8 Text Case, UObject* __WorldContext, uint8 Temp_byte_Variable, FText CallFunc_TextToLower_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default);
    void GetFontSize(UTextBlock*& Label, UObject* __WorldContext, int32& Size);
    void SetFontSize(UTextBlock*& Label, int32 NewSize, UObject* __WorldContext, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetTextUpperCased(UTextBlock* Target, FText InText, UObject* __WorldContext, FText CallFunc_TextToUpper_ReturnValue);
    void GetDisconnectReasonCaption(EDisconnectReason DisconnectReason, UObject* __WorldContext, FText& Text, EDisconnectReason Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText Temp_text_Variable_6, FText Temp_text_Variable_7, FText Temp_text_Variable_8, FText Temp_text_Variable_9, FText Temp_text_Variable_10, FText Temp_text_Variable_11, FText Temp_text_Variable_12, FText Temp_text_Variable_13, FText Temp_text_Variable_14, FText Temp_text_Variable_15, FText Temp_text_Variable_16, FText Temp_text_Variable_17, FText K2Node_Select_Default);
    void GetDisconnectReasonText(EDisconnectReason DisconnectReason, UObject* __WorldContext, FText& Text, EDisconnectReason Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText Temp_text_Variable_6, FText Temp_text_Variable_7, FText Temp_text_Variable_8, FText Temp_text_Variable_9, FText Temp_text_Variable_10, FText Temp_text_Variable_11, FText Temp_text_Variable_12, FText Temp_text_Variable_13, FText Temp_text_Variable_14, FText Temp_text_Variable_15, FText Temp_text_Variable_16, FText Temp_text_Variable_17, FText K2Node_Select_Default);
}

#endif
