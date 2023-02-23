#ifndef UE4SS_SDK_UI_InfoScreen_HPP
#define UE4SS_SDK_UI_InfoScreen_HPP

class UUI_InfoScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* BlinkText;
    class UAnimatedDRGlogo_C* AnimatedDRGlogo;
    class UAnimatedStaticOverlay_C* AnimatedStaticOverlay;
    class UUI_InfoScreen_BackEndNotification_C* BackendNotification;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonMultiline_C* BTN_Claim;
    class UBasic_ButtonMultiline_C* BTN_Claimed;
    class UBasic_ButtonMultiline_C* BTN_ClaimLocked;
    class UBasic_ButtonScalable2_C* BTN_Continue;
    class UBasic_ButtonMultiline_C* BTN_Join_Steam;
    class UBasic_ButtonMultiline_C* BTN_Steam_Joined;
    class UImage* FadeOverlay;
    class UImage* Image_1339;
    class UImage* Image_Background;
    class UHorizontalBox* JoinSteam_Buttons_HorizontalBox;
    class UOptions_Language_C* Options_Language;
    class UOptions_ShowInfoScreen_C* Options_ShowInfoScreen;
    class UTextBlock* TEXT_Header1;
    class UTextBlock* TEXT_Header2;
    class UTextBlock* TEXT_Main;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_3;
    class UUI_InfoScreen_DLCwidget_C* UI_InfoScreen_DLCwidget;
    class UUI_InfoScreen_Overlay_FocusedDLC_C* UI_InfoScreen_Overlay_FocusedDLC;
    class UUI_PatchNotes_C* UI_PatchNotes;
    FUI_InfoScreen_COnClose OnClose;
    void OnClose(class UUI_InfoScreen_C* Screen);
    int32 PathNodeIndex;
    bool LastKeyControl;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateButtons(bool HasClaimed, bool IsFollowing);
    void FadeIt(bool FadeIn, float& Duration);
    void BndEvt__Button_210_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_Steam_K2Node_ComponentBoundEvent_130_On Clicked__DelegateSignature();
    void BndEvt__BTN_Steam_Joined_K2Node_ComponentBoundEvent_136_On Clicked__DelegateSignature();
    void Construct();
    void SetupAnimHandlers();
    void OnFadeInStarted();
    void OnFadeInFinished();
    void FadeOutStarted();
    void ExecuteUbergraph_UI_InfoScreen(int32 EntryPoint);
    void OnClose__DelegateSignature(class UUI_InfoScreen_C* Screen);
};

#endif
