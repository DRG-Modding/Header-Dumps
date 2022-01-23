#ifndef UE4SS_SDK_Modding_YesNo_Prompt_HPP
#define UE4SS_SDK_Modding_YesNo_Prompt_HPP

class UModding_YesNo_Prompt_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    FModding_YesNo_Prompt_COnClicked OnClicked;
    void OnClicked(bool Yes, bool CreateModdedSave);
    bool ModdedSave;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handled_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue_1);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Yes();
    void Show(const FText& Title, const FText& Message, bool CreateModdedSave);
    void ExecuteUbergraph_Modding_YesNo_Prompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, const FText K2Node_Event_Title, const FText K2Node_Event_Message, bool K2Node_Event_CreateModdedSave, FText CallFunc_TextToUpper_ReturnValue);
    void OnClicked__DelegateSignature(bool Yes, bool CreateModdedSave);
};

#endif
