#ifndef UE4SS_SDK_ITM_DeepDives_LaunchButton_HPP
#define UE4SS_SDK_ITM_DeepDives_LaunchButton_HPP

class UITM_DeepDives_LaunchButton_C : UUserWidget
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
    UTextBlock* TextBlock_92;
    FITM_DeepDives_LaunchButton_COnClicked OnClicked;
    void OnClicked();

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Click();
    void ExecuteUbergraph_ITM_DeepDives_LaunchButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
    void OnClicked__DelegateSignature();
}

#endif
