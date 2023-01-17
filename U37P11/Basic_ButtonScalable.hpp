#ifndef UE4SS_SDK_Basic_ButtonScalable_HPP
#define UE4SS_SDK_Basic_ButtonScalable_HPP

class UBasic_ButtonScalable_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* Bar_Left_Sizer;
    class USizeBox* Bar_Right_Sizer;
    class UBorder* BaseLeft;
    class UBorder* BaseMid;
    class UBorder* BaseRight;
    class UButton* Button_0;
    class USizeBox* Sizer;
    class USpacer* Spacer_0;
    class USpacer* Spacer_1;
    class UTextBlock* TXT_ButtonText;
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

    void IsPressed(bool& IsPressed);
    void SetButtonText(FText Text);
    void SetFontSize(int32 FontSize);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ButtonScalable(int32 EntryPoint);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature();
};

#endif
