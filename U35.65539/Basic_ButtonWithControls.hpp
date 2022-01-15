#ifndef UE4SS_SDK_Basic_ButtonWithControls_HPP
#define UE4SS_SDK_Basic_ButtonWithControls_HPP

class UBasic_ButtonWithControls_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* BaseLeft;
    UBorder* BaseMid;
    UBorder* BaseRight;
    UButton* Button_0;
    UTextBlock* TXT_ButtonText;
    UUI_AdvancedLabel_C* UI_AdvancedLabel;
    FText ButtonText;
    bool ShowInput;
    FLinearColor Tint_Base;
    FText InputStandardText;
    FText InputControllerOverride;
    FBasic_ButtonWithControls_COnClicked OnClicked;
    void OnClicked();
    uint8 PreviewAs;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ButtonWithControls(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, uint8 CallFunc_GetValidValue_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool Temp_bool_Variable, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default);
    void OnClicked__DelegateSignature();
}

#endif
