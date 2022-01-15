#ifndef UE4SS_SDK_UI_TrialExpired_HPP
#define UE4SS_SDK_UI_TrialExpired_HPP

class UUI_TrialExpired_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UWidgetAnimation* FadeOut;
    UWidgetAnimation* BlinkText;
    UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBlurBackground_C* BlurBackground;
    UTextBlock* DisconnectReasonText;
    UImage* FadeOverlay;
    UTextBlock* TEXT_Header;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void FadeIt(bool FadeIn, float& Duration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Close();
    void ExecuteUbergraph_UI_TrialExpired(int32 EntryPoint, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
