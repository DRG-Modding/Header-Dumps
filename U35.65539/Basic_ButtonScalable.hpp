#ifndef UE4SS_SDK_Basic_ButtonScalable_HPP
#define UE4SS_SDK_Basic_ButtonScalable_HPP

class UBasic_ButtonScalable_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    USizeBox* Bar_Left_Sizer;
    USizeBox* Bar_Right_Sizer;
    UBorder* BaseLeft;
    UBorder* BaseMid;
    UBorder* BaseRight;
    UButton* Button_0;
    USizeBox* Sizer;
    USpacer* Spacer_0;
    USpacer* Spacer_1;
    UTextBlock* TXT_ButtonText;
    FText ButtonText;
    FBasic_ButtonScalable_COnClicked OnClicked;
    void OnClicked();
    int32 Font Size;
    float Width (minimum);
    float Height;
    bool Thick Bars;
    FBasic_ButtonScalable_COnPressed OnPressed;
    void OnPressed();
    FBasic_ButtonScalable_COnReleased OnReleased;
    void OnReleased();

    void IsPressed(bool& IsPressed, bool CallFunc_IsPressed_ReturnValue);
    void SetButtonText(FText Text, FText CallFunc_TextToUpper_ReturnValue);
    void SetFontSize(int32 FontSize, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ButtonScalable(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, UBasic_ToolTip_C* K2Node_DynamicCast_AsBasic_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature();
}

#endif
