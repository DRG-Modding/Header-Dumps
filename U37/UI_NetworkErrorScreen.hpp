#ifndef UE4SS_SDK_UI_NetworkErrorScreen_HPP
#define UE4SS_SDK_UI_NetworkErrorScreen_HPP

class UUI_NetworkErrorScreen_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* BlinkText;
    class UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBlurBackground_C* BlurBackground;
    class UTextBlock* DisconnectReasonText;
    class UImage* FadeOverlay;
    class UTextBlock* TEXT_Header;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void FadeIt(bool FadeIn, float& Duration);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Close();
    void ExecuteUbergraph_UI_NetworkErrorScreen(int32 EntryPoint);
};

#endif
