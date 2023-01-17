#ifndef UE4SS_SDK_Basic_ButtonCutCorner_HPP
#define UE4SS_SDK_Basic_ButtonCutCorner_HPP

class UBasic_ButtonCutCorner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UButton* Button_0;
    class UImage* Image_Outline;
    class UOverlay* Overlay_Outer;
    class UScaleBox* ScaleBox_53;
    class USizeBox* Sizer;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    FText ButtonText;
    FBasic_ButtonCutCorner_COnClicked OnClicked;
    void OnClicked(class UBasic_ButtonCutCorner_C* Button);
    FText ControllerOverrideText;
    int32 Font Size;
    float Width (minimum);
    float Height;
    FBasic_ButtonCutCorner_COnPressed OnPressed;
    void OnPressed();
    FBasic_ButtonCutCorner_COnReleased OnReleased;
    void OnReleased();
    bool IsSelected;

    void IsPressed(bool& IsPressed);
    void SetButtonText(FText Text, FText OverrideControllerText);
    void SetFontSize(int32 FontSize);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void Update Look();
    void Click();
    void Toggle(bool IsToggleOn);
    void ExecuteUbergraph_Basic_ButtonCutCorner(int32 EntryPoint);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
};

#endif
