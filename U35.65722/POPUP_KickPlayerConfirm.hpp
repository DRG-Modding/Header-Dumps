#ifndef UE4SS_SDK_POPUP_KickPlayerConfirm_HPP
#define UE4SS_SDK_POPUP_KickPlayerConfirm_HPP

class UPOPUP_KickPlayerConfirm_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox_AFK;
    class UBasic_CheckBox_C* Basic_CheckBox_NoReason;
    class UBasic_CheckBox_C* Basic_CheckBox_Private;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_Cancel;
    class UBasic_ButtonScalable2_C* BTN_Kick;
    class UTextBlock* DATA_PlayerName;
    class UTextBlock* TXT_KickHeader;
    class UTextBlock* TXT_ReasonHeader;
    class UTextBlock* TXT_ReasonNotResponding;
    class UTextBlock* TXT_ReasonOther;
    class UTextBlock* TXT_ReasonPrivate;
    EDisconnectReason KickReason;
    class APlayerController* PlayerToKick;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature();
    void SetPlayer(class APlayerController* Player);
    void BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature();
    void ExecuteUbergraph_POPUP_KickPlayerConfirm(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, EDisconnectReason Temp_byte_Variable, FString CallFunc_GetPlayerName_ReturnValue, FString Temp_string_Variable, FText CallFunc_Conv_StringToText_ReturnValue, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, FString Temp_string_Variable_5, FString Temp_string_Variable_6, FString Temp_string_Variable_7, FString Temp_string_Variable_8, FString Temp_string_Variable_9, FString Temp_string_Variable_10, FString Temp_string_Variable_11, FString Temp_string_Variable_12, FString Temp_string_Variable_13, FString Temp_string_Variable_14, FString Temp_string_Variable_15, FString Temp_string_Variable_16, FString Temp_string_Variable_17, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_ComponentBoundEvent_IsChecked_2, FSlateColor K2Node_MakeStruct_SlateColor_2, bool K2Node_ComponentBoundEvent_IsChecked_1, bool K2Node_ComponentBoundEvent_IsChecked, class APlayerController* K2Node_CustomEvent_player, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, FString K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_FSDKickPlayer_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_FSDUpdateSessionInfo_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetDisconnectReasonText_Text, FText CallFunc_GetDisconnectReasonText_Text_1, FText CallFunc_GetDisconnectReasonText_Text_2);
};

#endif
