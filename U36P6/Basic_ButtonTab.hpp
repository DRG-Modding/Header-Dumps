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

    void SetIconRightVisible(bool IsVisible);
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
    void ExecuteUbergraph_Basic_ButtonTab(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
