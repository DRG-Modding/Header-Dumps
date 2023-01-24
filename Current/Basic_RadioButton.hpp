#ifndef UE4SS_SDK_Basic_RadioButton_HPP
#define UE4SS_SDK_Basic_RadioButton_HPP

class UBasic_RadioButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimTickShow;
    class UWidgetAnimation* AnimClick;
    class UImage* BorderInner;
    class UImage* BorderOuter;
    class USizeBox* Button_SizeBox;
    class UButton* Checkbox_Button;
    class UHorizontalBox* Horizontal;
    class UTextBlock* RadioText;
    class UImage* Tick;
    FBasic_RadioButton_COnCheckStateChanged OnCheckStateChanged;
    void OnCheckStateChanged(bool IsChecked);
    float Size;
    bool IsChecked;
    bool CanUncheck;
    FText Text;
    bool UpperCase;
    int32 Index;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;

    void GetText(FText& Text);
    void SetTextColor(TEnumAsByte<ENUM_MenuColors::Type> Color);
    void SetText(FText InText, bool InUpperCase);
    void SetIsChecked(bool InIsChecked);
    bool GetIsChecked();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Basic_RadioButton(int32 EntryPoint);
    void OnCheckStateChanged__DelegateSignature(bool IsChecked);
};

#endif
