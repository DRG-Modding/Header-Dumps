#ifndef UE4SS_SDK_UI_InfoScreen_Overlay_Merch_June2020_HPP
#define UE4SS_SDK_UI_InfoScreen_Overlay_Merch_June2020_HPP

class UUI_InfoScreen_Overlay_Merch_June2020_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Idle;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UButton* Button_0;
    class UImage* Glow1;
    class UImage* Glow2;
    class UImage* Icon;
    class UImage* Image_0;
    class UImage* Image_1;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_InfoScreen_Overlay_Merch_June2020(int32 EntryPoint);
};

#endif
