#ifndef UE4SS_SDK_PopUp_ExitGame_HPP
#define UE4SS_SDK_PopUp_ExitGame_HPP

class UPopup_ExitGame_C : UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Middle;
    UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    UBasic_ButtonScalable2_C* BTN_No;
    UBasic_ButtonScalable2_C* BTN_Survey2;
    UBasic_ButtonScalable2_C* BTN_Yes;
    UTextBlock* DATA_Content;
    UTextBlock* DATA_Header;
    UITM_MenuBackground_C* ITM_MenuBackground;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;
    UVerticalBox* VerticalBox_Survey;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue_1);
    void OnShow(const FText& Title, const FText& Message);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Yes();
    void No();
    void BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Popup_ExitGame(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, const FText K2Node_Event_Title, const FText K2Node_Event_Message, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_AllowLinkToExternalFeedback_ReturnValue, FString K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
}

#endif
