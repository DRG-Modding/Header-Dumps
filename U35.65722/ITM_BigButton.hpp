#ifndef UE4SS_SDK_ITM_BigButton_HPP
#define UE4SS_SDK_ITM_BigButton_HPP

class UITM_BigButton_C : public UUserWidget
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
    class USizeBox* SizeBox_0;
    class UTextBlock* TextBlock_92;
    FITM_BigButton_COnClicked OnClicked;
    void OnClicked();
    FText Text;
    class USoundBase* AudioClick;
    class USoundBase* AudioHover;
    float ButtonHeight;

    void SetText(FText InText, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Click();
    void SetColor(FLinearColor Color);
    void ExecuteUbergraph_ITM_BigButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FLinearColor K2Node_CustomEvent_Color, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void OnClicked__DelegateSignature();
};

#endif
