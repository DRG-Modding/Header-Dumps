#ifndef UE4SS_SDK_UI_SteamLoading_HPP
#define UE4SS_SDK_UI_SteamLoading_HPP

class UUI_SteamLoading_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UWidgetAnimation* FadeOut;
    UWidgetAnimation* BlinkText;
    UBasic_ButtonScalable2_C* Basic_ButtonScalable2;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBlurBackground_C* BlurBackground;
    UTextBlock* DisconnectReasonText;
    UImage* FadeOverlay;
    UTextBlock* TEXT_Header;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;
    UCircularThrobber* Twitch_Loading;
    UWarningBox_C* WarningBox;
    UWarningBox_C* WarningBox_0;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void FadeIt(bool FadeIn, float& Duration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Close();
    void ExecuteUbergraph_UI_SteamLoading(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
