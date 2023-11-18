#ifndef UE4SS_SDK_ITM_Special_ButtonCutCorner_HPP
#define UE4SS_SDK_ITM_Special_ButtonCutCorner_HPP

class UITM_Special_ButtonCutCorner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UBorder* Border_LeftIcon;
    class UButton* Button_0;
    class UImage* Image_Outline;
    class UImage* LeftIcon;
    class UOverlay* Overlay_Icon;
    class UOverlay* Overlay_Outer;
    class UHorizontalBox* RootHorizontalBox;
    class USizeBox* SizeBox_Icon;
    class USizeBox* Sizer;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    FText ButtonText;
    FITM_Special_ButtonCutCorner_COnClicked OnClicked;
    void OnClicked();
    FText ControllerOverrideText;
    FSlateFontInfo Font;
    int32 Font Size;
    float Width (minimum);
    float Height;
    FITM_Special_ButtonCutCorner_COnPressed OnPressed;
    void OnPressed();
    FITM_Special_ButtonCutCorner_COnReleased OnReleased;
    void OnReleased();
    bool IsSelected;
    class UTexture2D* Icon;
    TEnumAsByte<ENUM_MenuColors::Type> NormalColor;
    TEnumAsByte<ENUM_MenuColors::Type> SelectedColor;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    bool FlipHorizontally;
    float FrameOpacity;

    void SetFlipHorizontally(bool FlipButton);
    void IsPressed(bool& IsPressed);
    void SetButtonText(FText Text, FText OverrideControllerText);
    void SetFontSize(int32 FontSize);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void SetSelected(bool IsSelected);
    void Update Look();
    void Click();
    void ExecuteUbergraph_ITM_Special_ButtonCutCorner(int32 EntryPoint);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature();
};

#endif
