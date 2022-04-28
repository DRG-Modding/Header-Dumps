#ifndef UE4SS_SDK_Basic_ButtonWithControls_HPP
#define UE4SS_SDK_Basic_ButtonWithControls_HPP

class UBasic_ButtonWithControls_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BaseLeft;
    class UBorder* BaseMid;
    class UBorder* BaseRight;
    class UButton* Button_0;
    class UTextBlock* TXT_ButtonText;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    FText ButtonText;
    bool ShowInput;
    FLinearColor Tint_Base;
    FText InputStandardText;
    FText InputControllerOverride;
    FBasic_ButtonWithControls_COnClicked OnClicked;
    void OnClicked();
    uint8 PreviewAs;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ButtonWithControls(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
