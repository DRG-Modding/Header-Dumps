#ifndef UE4SS_SDK_UI_InfoScreen_HPP
#define UE4SS_SDK_UI_InfoScreen_HPP

class UUI_InfoScreen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UWidgetAnimation* FadeOut;
    UWidgetAnimation* BlinkText;
    UAnimatedDRGlogo_C* AnimatedDRGlogo;
    UAnimatedStaticOverlay_C* AnimatedStaticOverlay;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBlurBackground_C* BlurBackground;
    UBasic_ButtonMultiline_C* BTN_Claim;
    UBasic_ButtonMultiline_C* BTN_Claimed;
    UBasic_ButtonMultiline_C* BTN_ClaimLocked;
    UBasic_ButtonScalable2_C* BTN_Continue;
    UBasic_ButtonMultiline_C* BTN_Join_Steam;
    UBasic_ButtonMultiline_C* BTN_Steam_Joined;
    UImage* FadeOverlay;
    UImage* Image_1339;
    UImage* Image_Background;
    UHorizontalBox* JoinSteam_Buttons_HorizontalBox;
    UOptions_Language_C* Options_Language;
    UOptions_ShowInfoScreen_C* Options_ShowInfoScreen;
    UTextBlock* TEXT_Header1;
    UTextBlock* TEXT_Header2;
    UTextBlock* TEXT_Main;
    UTextBlock* TextBlock_2;
    UTextBlock* TextBlock_3;
    UUI_InfoScreen_DLCwidget_C* UI_InfoScreen_DLCwidget;
    UUI_InfoScreen_Overlay_DLC_Season01_C* UI_InfoScreen_Overlay_DLC_Season01_C_0;
    UUI_PatchNotes_C* UI_PatchNotes;
    FUI_InfoScreen_COnClose OnClose;
    void OnClose(UUI_InfoScreen_C* Screen);
    int32 PathNodeIndex;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void UpdateButtons(bool HasClaimed, bool IsFollowing, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2);
    void FadeIt(bool FadeIn, float& Duration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Construct();
    void BndEvt__Button_210_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_4_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_5_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_Steam_K2Node_ComponentBoundEvent_130_On Clicked__DelegateSignature();
    void BndEvt__BTN_Steam_Joined_K2Node_ComponentBoundEvent_136_On Clicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_82_OnClicked__DelegateSignature();
    void SetupAnimHandlers();
    void OnFadeInStarted();
    void OnFadeInFinished();
    void FadeOutStarted();
    void ExecuteUbergraph_UI_InfoScreen(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_PlayerIsFollowingUsOnSteam_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GetHasClaimedSteamGroupLoot_ReturnValue, bool CallFunc_GetHasClaimedSteamGroupLoot_ReturnValue_1, int32 CallFunc_AddCredits_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_GetHasClaimedSteamGroupLoot_ReturnValue_2);
    void OnClose__DelegateSignature(UUI_InfoScreen_C* Screen);
}

#endif
