#ifndef UE4SS_SDK_SkipAssignmentPopup_HPP
#define UE4SS_SDK_SkipAssignmentPopup_HPP

class USkipAssignmentPopup_C : public UYesNoPromptWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UTextBlock* TextBlock_0;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue_1);
    void OnShow(const FText& Title, const FText& Message);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Yes();
    void No();
    void ExecuteUbergraph_SkipAssignmentPopup(int32 EntryPoint, FText CallFunc_GetText_ReturnValue, const FText K2Node_Event_Title, const FText K2Node_Event_Message, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue);
};

#endif
