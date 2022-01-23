#ifndef UE4SS_SDK_UI_InfoScreen_Xbox_HPP
#define UE4SS_SDK_UI_InfoScreen_Xbox_HPP

class UUI_InfoScreen_Xbox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* BlinkText;
    class UAnimatedDRGlogo_C* AnimatedDRGlogo;
    class UAnimatedStaticOverlay_C* AnimatedStaticOverlay;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonMultiline_C* BTN_Claim;
    class UBasic_ButtonMultiline_C* BTN_Claimed;
    class UBasic_ButtonMultiline_C* BTN_ClaimLocked;
    class UBasic_ButtonScalable2_C* BTN_Continue;
    class UBasic_ButtonMultiline_C* BTN_Join_Steam;
    class UBasic_ButtonMultiline_C* BTN_Steam_Joined;
    class UImage* FadeOverlay;
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
    class UUI_InfoScreen_Overlay_DLC_Season01_C* UI_InfoScreen_Overlay_DLC_Season01;
    class UUI_PatchNotes_C* UI_PatchNotes;
    FUI_InfoScreen_Xbox_COnClose OnClose;
    void OnClose(class UUI_InfoScreen_Xbox_C* Screen);
    int32 PathNodeIndex;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void HasJoinedXboxClub(bool& joined, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue);
    void UpdateButtons(bool HasClaimed, bool IsFollowing, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2);
    void FadeIt(bool FadeIn, float& Duration, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void BndEvt__Button_210_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_4_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_5_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_Deluxe_Edition_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature();
    void BndEvt__BTN_Steam_K2Node_ComponentBoundEvent_130_On Clicked__DelegateSignature();
    void BndEvt__BTN_Steam_Joined_K2Node_ComponentBoundEvent_136_On Clicked__DelegateSignature();
    void Construct();
    void BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_82_OnClicked__DelegateSignature();
    void SetupAnimEvents();
    void OnFadeInStarted();
    void OnFadeInFinished();
    void OnFadeOutStarted();
    void ExecuteUbergraph_UI_InfoScreen_Xbox(int32 EntryPoint, FExecuteUbergraph_UI_InfoScreen_XboxK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_InfoScreen_XboxK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_InfoScreen_XboxK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GetHasClaimedSteamGroupLoot_ReturnValue, bool CallFunc_GetHasClaimedSteamGroupLoot_ReturnValue_1, int32 CallFunc_AddCredits_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_GetHasClaimedSteamGroupLoot_ReturnValue_2, bool CallFunc_HasJoinedXboxClub_joined, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3);
    void OnClose__DelegateSignature(class UUI_InfoScreen_Xbox_C* Screen);
};

#endif
