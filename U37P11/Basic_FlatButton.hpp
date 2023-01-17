#ifndef UE4SS_SDK_Basic_FlatButton_HPP
#define UE4SS_SDK_Basic_FlatButton_HPP

class UBasic_FlatButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* ButtonContent;
    class USizeBox* ButtonSizeBox;
    class UTextBlock* ButtonText;
    class UButton* ButtonWidget;
    FText Text;
    bool UpperCase;
    bool AutoWrapText;
    int32 FontSize;
    FBasic_FlatButton_COnClicked OnClicked;
    void OnClicked(class UBasic_FlatButton_C* Button);
    FSlateFontInfo Font;
    TEnumAsByte<ENUM_MenuColors::Type> Color Base;
    TEnumAsByte<ENUM_MenuColors::Type> Color Hover;
    TEnumAsByte<ENUM_MenuColors::Type> Font Color;
    TEnumAsByte<ENUM_MenuColors::Type> Font Hover Color;
    FSizeBoxSettings SizeSettings;

    bool IsInteractable();
    void SetStyle(TEnumAsByte<ENUM_MenuColors::Type> InBaseColor, TEnumAsByte<ENUM_MenuColors::Type> InHoverColor, TEnumAsByte<ENUM_MenuColors::Type> InTextColor, TEnumAsByte<ENUM_MenuColors::Type> InTextHoverColor);
    void CreateMenuStyle(TEnumAsByte<ENUM_MenuColors::Type> ColorSelector, FSlateBrush& SlateBrush);
    void PreConstruct(bool IsDesignTime);
    void Set Text(FText Text, bool UpperCase);
    void Set Font Size(int32 FontSize);
    void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_FlatButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
};

#endif
