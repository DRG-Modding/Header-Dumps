#ifndef UE4SS_SDK_POPUP_KickPlayerConfirm_HPP
#define UE4SS_SDK_POPUP_KickPlayerConfirm_HPP

class UPOPUP_KickPlayerConfirm_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox_AFK;
    UBasic_CheckBox_C* Basic_CheckBox_NoReason;
    UBasic_CheckBox_C* Basic_CheckBox_Private;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBlurBackground_C* BlurBackground;
    UBasic_ButtonScalable2_C* BTN_Cancel;
    UBasic_ButtonScalable2_C* BTN_Kick;
    UTextBlock* DATA_PlayerName;
    UTextBlock* TXT_KickHeader;
    UTextBlock* TXT_ReasonHeader;
    UTextBlock* TXT_ReasonNotResponding;
    UTextBlock* TXT_ReasonOther;
    UTextBlock* TXT_ReasonPrivate;
    EDisconnectReason KickReason;
    APlayerController* PlayerToKick;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature();
    void SetPlayer(UPlayerController* Player);
    void BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature();
    void ExecuteUbergraph_POPUP_KickPlayerConfirm(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, EDisconnectReason Temp_byte_Variable, FString CallFunc_GetPlayerName_ReturnValue, FString Temp_string_Variable, FText CallFunc_Conv_StringToText_ReturnValue, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, FString Temp_string_Variable_5, FString Temp_string_Variable_6, FString Temp_string_Variable_7, FString Temp_string_Variable_8, FString Temp_string_Variable_9, FString Temp_string_Variable_10, FString Temp_string_Variable_11, FString Temp_string_Variable_12, FString Temp_string_Variable_13, FString Temp_string_Variable_14, FString Temp_string_Variable_15, FString Temp_string_Variable_16, FString Temp_string_Variable_17, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_ComponentBoundEvent_IsChecked_2, FSlateColor K2Node_MakeStruct_SlateColor_2, bool K2Node_ComponentBoundEvent_IsChecked_1, bool K2Node_ComponentBoundEvent_IsChecked, UPlayerController* K2Node_CustomEvent_player, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, FString K2Node_Select_Default, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_FSDKickPlayer_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_FSDUpdateSessionInfo_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetDisconnectReasonText_Text, FText CallFunc_GetDisconnectReasonText_Text_1, FText CallFunc_GetDisconnectReasonText_Text_2);
}

#endif
