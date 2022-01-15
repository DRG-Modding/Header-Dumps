#ifndef UE4SS_SDK_HUD_Chat_HPP
#define UE4SS_SDK_HUD_Chat_HPP

class UHUD_Chat_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BackgroundFade;
    UBorder* Border_0;
    UImage* ChatBackground;
    UImage* ChatBar;
    UVerticalBox* ChatMessages;
    UEditableTextBox* NewChatEdit;
    float Duration;
    float FadeTime;
    int32 MaxLines;
    bool InLoadMenu;
    EChatSenderType SenderType;
    UEditableTextBox* OutsiteChatbox;
    UEditableTextBox* InputChatBox;
    float MinLinesConst;
    float MaxLinesConst;

    void SetMaxLinesFromFontSize(int32 FontSize, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
    void UpdateChatMessages(bool resetAge, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<FFSDChatMessage>& CallFunc_LatestMessages_OutMessages, int32 CallFunc_Array_Length_ReturnValue, FFSDChatMessage CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsStringNotEmpty_IsEmpty, bool CallFunc_IsStringNotEmpty_IsEmpty_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void IsStringNotEmpty(FString String, bool& isEmpty, FString CallFunc_Trim_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void GetSenderType(EChatSenderType& SenderType, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, EChatSenderType CallFunc_GetChatSenderType_ReturnValue);
    void OpenChat(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<FFSDChatMessage>& CallFunc_LatestMessages_OutMessages, FFSDChatMessage CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsStringNotEmpty_IsEmpty, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsStringNotEmpty_IsEmpty_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void BeginChat();
    void OnOpenChat();
    void Update Chat Background();
    void Add Chat Message(FFSDChatMessage Msg);
    void OnMessageHidden_Event();
    void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, uint8 CommitMethod);
    void PreConstruct(bool IsDesignTime);
    void CloseChat();
    void OnBackgroundFadeFinished();
    void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, uint8 CommitMethod);
    void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void SendChatMessage(const FText& InText, uint8 CommitMethod);
    void NewMesssage(const FFSDChatMessage& Message);
    void Construct();
    void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void OnFontSizeChange(int32 NewValue);
    void ExecuteUbergraph_HUD_Chat(int32 EntryPoint, bool Temp_bool_Variable, NewMessageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, ChatFontSizeChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FString CallFunc_GetPlayerName_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsHUDVisible_ReturnValue, float Temp_float_Variable, bool CallFunc_BooleanAND_ReturnValue, EChatSenderType CallFunc_GetSenderType_SenderType, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FFSDChatMessage K2Node_CustomEvent_Msg, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, UHUD_ChatLine_C* CallFunc_Create_ReturnValue, FString CallFunc_FilterProfanityText_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, float Temp_float_Variable_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_6, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, const FText K2Node_ComponentBoundEvent_Text_3, uint8 K2Node_ComponentBoundEvent_CommitMethod_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, const FText K2Node_ComponentBoundEvent_Text_2, uint8 K2Node_ComponentBoundEvent_CommitMethod, const FText K2Node_ComponentBoundEvent_Text_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, const FText K2Node_CustomEvent_InText, uint8 K2Node_CustomEvent_CommitMethod, FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TextIsEmpty_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Len_ReturnValue, const FFSDChatMessage K2Node_CustomEvent_Message, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_6, UEditableTextBox* K2Node_Select_Default, float K2Node_Select_Default_1, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_7, uint8 Temp_byte_Variable_1, FString CallFunc_GetPlayerName_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPlaySoundOnChatMessage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, uint8 Temp_byte_Variable_2, bool Temp_bool_Variable_7, uint8 K2Node_Select_Default_2, OnMessageHidden__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, const FText K2Node_ComponentBoundEvent_Text, bool K2Node_Select_Default_3, FString CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, FString CallFunc_GetSubstring_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FFSDChatMessage K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, ChatOpenedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, int32 K2Node_CustomEvent_NewValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, int32 CallFunc_GetChatFontSize_ReturnValue);
}

#endif
