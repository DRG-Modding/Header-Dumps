#ifndef UE4SS_SDK_Header_ButtonCutCorner_HPP
#define UE4SS_SDK_Header_ButtonCutCorner_HPP

class UHeader_ButtonCutCorner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UButton* Button_0;
    class UImage* Image_Outline;
    class UImage* Notification;
    class USizeBox* Sizer;
    class UTextBlock* TXT_ButtonText;
    FText ButtonText;
    FHeader_ButtonCutCorner_COnClicked OnClicked;
    void OnClicked(class UHeader_ButtonCutCorner_C* Button);
    int32 Font Size;
    float Width (minimum);
    float Height;
    FHeader_ButtonCutCorner_COnPressed OnPressed;
    void OnPressed();
    FHeader_ButtonCutCorner_COnReleased OnReleased;
    void OnReleased();
    bool IsSelected;
    bool TopRightCorner;
    FMargin TextPadding;
    bool ShowNotification;

    void IsPressed(bool& IsPressed);
    void SetButtonText(FText Text);
    void SetFontSize(int32 FontSize);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void Toggle(bool IsToggleOn);
    void Update Look();
    void Click();
    void ToggleNotificationIcon(bool InShow);
    void Construct();
    void ExecuteUbergraph_Header_ButtonCutCorner(int32 EntryPoint);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
};

#endif
