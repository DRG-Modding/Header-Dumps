#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_Merch_June2020_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_Merch_June2020_HPP

class UUI_InfoScreen_Overlay_Merch_June2020_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Click;
    UWidgetAnimation* Hover;
    UWidgetAnimation* Idle;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UButton* Button_0;
    UImage* Glow1;
    UImage* Glow2;
    UImage* Icon;
    UImage* Image_0;
    UImage* Image_1;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_Merch_June2020(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
}

#endif
