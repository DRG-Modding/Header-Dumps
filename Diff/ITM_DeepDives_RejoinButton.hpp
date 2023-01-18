#ifndef UE4SS_SDK_ITM_DeepDives_RejoinButton_HPP
#define UE4SS_SDK_ITM_DeepDives_RejoinButton_HPP

class UITM_DeepDives_RejoinButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HoverEnd;
    class UWidgetAnimation* HoverStart;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Idle;
    class UImage* BGglow;
    class UBorder* Border_129;
    class UButton* Button_0;
    class UImage* Image_86;
    class UImage* Image_154;
    class UImage* Image_155;
    class UImage* Image_156;
    class UImage* Image_157;
    class UImage* Image_158;
    class UImage* Image_159;
    class UImage* Image_160;
    class UImage* Image_161;
    class UImage* Image_162;
    class UTextBlock* TextBlock_92;
    FITM_DeepDives_RejoinButton_COnClicked OnClicked;
    void OnClicked();

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Click();
    void ExecuteUbergraph_ITM_DeepDives_RejoinButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
