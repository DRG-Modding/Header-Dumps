#ifndef UE4SS_SDK_Basic_FlatButton_HPP
#define UE4SS_SDK_Basic_FlatButton_HPP

class UBasic_FlatButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* ButtonContent;
    class UTextBlock* ButtonText;
    class UButton* ButtonWidget;
    FText Text;
    bool UpperCase;
    int32 FontSize;
    FBasic_FlatButton_COnClicked OnClicked;
    void OnClicked(class UBasic_FlatButton_C* Button);
    TEnumAsByte<ENUM_MenuColors::Type> Color Base;
    TEnumAsByte<ENUM_MenuColors::Type> Color Hover;
    TEnumAsByte<ENUM_MenuColors::Type> Font Color;
    TEnumAsByte<ENUM_MenuColors::Type> Font Hover Color;

    bool IsInteractable();
    void SetStyle(TEnumAsByte<ENUM_MenuColors::Type> InBaseColor, TEnumAsByte<ENUM_MenuColors::Type> InHoverColor, TEnumAsByte<ENUM_MenuColors::Type> InTextColor, TEnumAsByte<ENUM_MenuColors::Type> InTextHoverColor, FSlateSound K2Node_MakeStruct_SlateSound, FSlateSound K2Node_MakeStruct_SlateSound_1, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush CallFunc_CreateMenuStyle_SlateBrush, FSlateBrush CallFunc_CreateMenuStyle_SlateBrush_1, FButtonStyle K2Node_MakeStruct_ButtonStyle);
    void CreateMenuStyle(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector, FSlateBrush& SlateBrush, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void PreConstruct(bool IsDesignTime);
    void Set Text(FText Text, bool UpperCase);
    void Set Font Size(int32 FontSize);
    void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_FlatButton(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_UpperCase, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default, int32 K2Node_CustomEvent_FontSize, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
};

#endif
