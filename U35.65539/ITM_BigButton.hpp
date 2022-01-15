#ifndef UE4SS_SDK_ITM_BigButton_HPP
#define UE4SS_SDK_ITM_BigButton_HPP

class UITM_BigButton_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* HoverEnd;
    UWidgetAnimation* HoverStart;
    UWidgetAnimation* Hover;
    UWidgetAnimation* Idle;
    UImage* BGglow;
    UBorder* Border_129;
    UButton* Button_0;
    UImage* Image_86;
    UImage* Image_154;
    UImage* Image_155;
    UImage* Image_156;
    UImage* Image_157;
    UImage* Image_158;
    UImage* Image_159;
    UImage* Image_160;
    UImage* Image_161;
    UImage* Image_162;
    USizeBox* SizeBox_0;
    UTextBlock* TextBlock_92;
    FITM_BigButton_COnClicked OnClicked;
    void OnClicked();
    FText Text;
    USoundBase* AudioClick;
    USoundBase* AudioHover;
    float ButtonHeight;

    void SetText(FText InText, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Click();
    void SetColor(FLinearColor Color);
    void ExecuteUbergraph_ITM_BigButton(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FLinearColor K2Node_CustomEvent_Color, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void OnClicked__DelegateSignature();
}

#endif
