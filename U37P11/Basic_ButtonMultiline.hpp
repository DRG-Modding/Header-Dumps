#ifndef UE4SS_SDK_Basic_ButtonMultiline_HPP
#define UE4SS_SDK_Basic_ButtonMultiline_HPP

class UBasic_ButtonMultiline_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UImage* I_Background;
    class UImage* I_Outline;
    class UImage* IMG_Brackets;
    class UImage* IMG_Overlay;
    class USizeBox* SizeBox_0;
    class UTextBlock* TXT_ButtonText;
    FBasic_ButtonMultiline_COn Clicked On Clicked;
    void On Clicked();
    FText Text;
    int32 Font Size;
    FVector2D Button Size;
    bool Overlay;
    class USoundBase* HoveredSound;
    class USoundBase* PressedSound;

    void SetButtonText(FText NewParam);
    void SetFontSize(int32 NewParam);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ButtonMultiline(int32 EntryPoint);
    void On Clicked__DelegateSignature();
};

#endif
