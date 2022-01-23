#ifndef UE4SS_SDK_UI_TrialExpired_HPP
#define UE4SS_SDK_UI_TrialExpired_HPP

class UUI_TrialExpired_C : public UWindowWidget
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

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void FadeIt(bool FadeIn, float& Duration, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Close();
    void ExecuteUbergraph_UI_TrialExpired(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
