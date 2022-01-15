#ifndef UE4SS_SDK_Basic_ScrollArrow_HPP
#define UE4SS_SDK_Basic_ScrollArrow_HPP

class UBasic_ScrollArrow_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* arrow_bracket;
    UImage* arrow_main;
    UButton* button_arrow;
    USizeBox* SizeBox_0;
    USizeBox* SizeBox_1;
    FBasic_ScrollArrow_COnClicked OnClicked;
    void OnClicked();
    float ButtonAngle;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ScrollArrow(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_1);
    void OnClicked__DelegateSignature();
}

#endif
