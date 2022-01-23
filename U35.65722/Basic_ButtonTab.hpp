#ifndef UE4SS_SDK_Basic_ButtonTab_HPP
#define UE4SS_SDK_Basic_ButtonTab_HPP

class UBasic_ButtonTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UButton* Button_0;
    class UTextBlock* DATA_headerText;
    class UImage* IconRight;
    class UImage* Image_Outline;
    FText HeaderText;
    bool Clicked;
    FBasic_ButtonTab_COnClicked OnClicked;
    void OnClicked();
    bool Toggled;
    FSlateBrush IconRightBrush;
    bool IconRightVisible;

    void SetIconRightVisible(bool IsVisible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetIconRight(FSlateBrush Brush);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void Toggle(bool On);
    void UpdateLook();
    void SilentToggle(bool On);
    void ExecuteUbergraph_Basic_ButtonTab(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FText CallFunc_TextToUpper_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_On_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, bool K2Node_CustomEvent_On);
    void OnClicked__DelegateSignature();
};

#endif
