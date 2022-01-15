#ifndef UE4SS_SDK_UI_DisconnectScreen_HPP
#define UE4SS_SDK_UI_DisconnectScreen_HPP

class UUI_DisconnectScreen_C : UUI_Disconnect_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UWidgetAnimation* FadeOut;
    UWidgetAnimation* BlinkText;
    UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBlurBackground_C* BlurBackground;
    UTextBlock* DisconnectReasonText;
    UImage* FadeOverlay;
    UTextBlock* KickCaption;
    UImage* Kicked_Image;
    UTextBlock* TEXT_Header;
    UUI_PendingRewardScreen_C* UI_PendingRewardScreen;

    void IsKickTheReason(EDisconnectReason reason, bool& Kicked, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void GetBaseFSPGameInstance(UFSDGameInstance*& AsFSDGame Instance, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UFSDGameInstance* K2Node_DynamicCast_AsFSDGame_Instance, bool K2Node_DynamicCast_bSuccess);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void FadeIt(bool FadeIn, float& Duration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Close();
    void Update();
    void ExecuteUbergraph_UI_DisconnectScreen(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FText CallFunc_GetSessionJoinError_ReturnValue, bool K2Node_Event_IsDesignTime, FString CallFunc_Conv_TextToString_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, FText CallFunc_GetSessionJoinError_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, FText CallFunc_GetDisconnectReasonCaption_Text, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, UFSDGameInstance* CallFunc_GetBaseFSPGameInstance_AsFSDGame_Instance, UFSDGameInstance* CallFunc_GetBaseFSPGameInstance_AsFSDGame_Instance_1, FText CallFunc_GetDisconnectReasonText_Text, UFSDGameInstance* CallFunc_GetBaseFSPGameInstance_AsFSDGame_Instance_2, UFSDGameInstance* CallFunc_GetBaseFSPGameInstance_AsFSDGame_Instance_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UFSDGameInstance* CallFunc_GetBaseFSPGameInstance_AsFSDGame_Instance_4, UFSDGameInstance* CallFunc_GetBaseFSPGameInstance_AsFSDGame_Instance_5, FText CallFunc_GetDisconnectReasonCaption_Text_1, bool CallFunc_IsKickTheReason_Kicked, FText CallFunc_TextToUpper_ReturnValue_1, ESlateVisibility K2Node_Select_Default, UFSDGameInstance* CallFunc_GetBaseFSPGameInstance_AsFSDGame_Instance_6, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3);
}

#endif
