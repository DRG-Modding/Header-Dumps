#ifndef UE4SS_SDK_UI_NetworkErrorScreen_HPP
#define UE4SS_SDK_UI_NetworkErrorScreen_HPP

class UUI_NetworkErrorScreen_C : UWindowWidget
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

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void FadeIt(bool FadeIn, float& Duration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Close();
    void ExecuteUbergraph_UI_NetworkErrorScreen(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UWindowManager* CallFunc_GetWindowManager_ReturnValue);
}

#endif
