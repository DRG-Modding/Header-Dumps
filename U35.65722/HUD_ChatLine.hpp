#ifndef UE4SS_SDK_HUD_ChatLine_HPP
#define UE4SS_SDK_HUD_ChatLine_HPP

class UHUD_ChatLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URichTextSizable* ChatRichText;
    class UImage* SenderIcon;
    float Duration;
    float FadeOut;
    FFSDChatMessage Msg;
    FVector2D PrevSize;
    FHUD_ChatLine_COnMessageHidden OnMessageHidden;
    void OnMessageHidden();
    EChatMessageType PreviewMsgType;
    FString PreviewSender;
    EChatSenderType PreviewSenderType;
    FString PreviewMsg;
    int32 oldFontSize;

    void RemoveTags(FString Source, FString& Result, FString ResultStr, int32 Index, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FString CallFunc_GetSubstring_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void EncloseText(FString Pre, FText Text, FString Post, FText& Result, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void StyledText(FText style Name, FText Text, FText& Result, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void UpdateUserIcon(EChatMessageType MessageType, EChatSenderType SenderType, EChatSenderType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UTexture2D* K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void UpdateOpacity(float alpha, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, float CallFunc_GetChatFadeTime_ReturnValue, float CallFunc_MessageAge_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetMessage(EChatMessageType MsgType, FString SenderStr, EChatSenderType SenderType, FString MsgStr, FText MsgText, FText SenderText, EChatSenderType Temp_byte_Variable, FString CallFunc_RemoveTags_Result, FString CallFunc_RemoveTags_Result_1, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, bool Temp_bool_Variable, FText Temp_text_Variable_5, EChatSenderType Temp_byte_Variable_1, FText Temp_text_Variable_6, FText Temp_text_Variable_7, FText Temp_text_Variable_8, FText Temp_text_Variable_9, FText Temp_text_Variable_10, bool Temp_bool_Variable_1, FText Temp_text_Variable_11, FText Temp_text_Variable_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FText K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FText Temp_text_Variable_13, FText K2Node_Select_Default_1, FText CallFunc_StyledText_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FText CallFunc_EncloseText_Result, bool Temp_bool_Variable_2, FText K2Node_Select_Default_2, FText K2Node_Select_Default_3, FText CallFunc_StyledText_Result_1, FText CallFunc_MakeLiteralText_ReturnValue, FText K2Node_Select_Default_4, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ChangeFontSize(int32 NewValue);
    void ExecuteUbergraph_HUD_ChatLine(int32 EntryPoint, int32 K2Node_CustomEvent_NewValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, int32 CallFunc_GetChatFontSize_ReturnValue, FExecuteUbergraph_HUD_ChatLineK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void OnMessageHidden__DelegateSignature();
};

#endif
