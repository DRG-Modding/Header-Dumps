#ifndef UE4SS_SDK_Basic_CheckBox_HPP
#define UE4SS_SDK_Basic_CheckBox_HPP

class UBasic_CheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TickShow;
    class UWidgetAnimation* Click;
    class UImage* Checkbox_Border;
    class UButton* Checkbox_Button;
    class UImage* CheckBox_Tick;
    class UImage* Checkbox_Undetermined;
    class UTextBlock* CheckBoxText;
    class UHorizontalBox* Horizontal;
    class USizeBox* SizeBox_CheckBox;
    class USizeBox* SizeBox_Text;
    class UWidgetSwitcher* StateSwitcher;
    FBasic_CheckBox_COnCheckStateChanged OnCheckStateChanged;
    void OnCheckStateChanged(bool IsChecked);
    float Size;
    bool IsChecked;
    FText Text;
    bool UpperCase;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;
    ECheckBoxState State;
    TEnumAsByte<ENUM_MenuColors::Type> FrameColor;
    TEnumAsByte<ENUM_MenuColors::Type> HoveredColor;
    float TextWidth;

    void SetTextWidth(float InWidthOverride);
    void SetHovered(bool InHovered);
    void SetSize(float InSize);
    void GetState(ECheckBoxState& State);
    void SetState(ECheckBoxState InState);
    void GetUpperCased(bool& UpperCase);
    void SetText(FText InText, bool InUpperCase);
    void SetIsChecked(bool InIsChecked);
    bool GetIsChecked();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ClickButton();
    void OnClicked(bool InChecked);
    void ExecuteUbergraph_Basic_CheckBox(int32 EntryPoint);
    void OnCheckStateChanged__DelegateSignature(bool IsChecked);
};

#endif
