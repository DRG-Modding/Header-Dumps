#ifndef UE4SS_SDK_Dialog_Modding_TermsAndConditions_HPP
#define UE4SS_SDK_Dialog_Modding_TermsAndConditions_HPP

class UDialog_Modding_TermsAndConditions_C : public UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    class URichTextBlock* Data_Privacy;
    class URichTextBlock* Data_Terms;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UButton* Privacy;
    class UButton* Terms;
    FString TermsURL;
    FString PrivacyURL;
    FDialog_Modding_TermsAndConditions_COnAnswer OnAnswer;
    void OnAnswer(bool Agree);

    void OnModOverlayClosed(FString LastURL, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue_1);
    void Construct();
    void ShowTerms(class UModioTermsWrapper* Terms);
    void BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Disagree();
    void Agree();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void DummyEventThatLeadToNowhere(bool Yes);
    void ExecuteUbergraph_Dialog_Modding_TermsAndConditions(int32 EntryPoint, FExecuteUbergraph_Dialog_Modding_TermsAndConditionsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UModioTermsWrapper* K2Node_CustomEvent_Terms, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_4, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool K2Node_CustomEvent_Yes, FExecuteUbergraph_Dialog_Modding_TermsAndConditionsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
    void OnAnswer__DelegateSignature(bool Agree);
};

#endif
