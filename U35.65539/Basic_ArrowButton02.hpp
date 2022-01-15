#ifndef UE4SS_SDK_Basic_ArrowButton02_HPP
#define UE4SS_SDK_Basic_ArrowButton02_HPP

class UBasic_ArrowButton02_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* arrow_bracket;
    UButton* button_arrow;
    FBasic_ArrowButton02_COnClicked OnClicked;
    void OnClicked();
    float ButtonAngle;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ArrowButton02(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
    void OnClicked__DelegateSignature();
}

#endif
