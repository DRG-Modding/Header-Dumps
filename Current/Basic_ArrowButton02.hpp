#ifndef UE4SS_SDK_Basic_ArrowButton02_HPP
#define UE4SS_SDK_Basic_ArrowButton02_HPP

class UBasic_ArrowButton02_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* arrow_bracket;
    class UButton* Button_Arrow;
    FBasic_ArrowButton02_COnClicked OnClicked;
    void OnClicked();
    float ButtonAngle;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__button_arrow_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_Basic_ArrowButton02(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
