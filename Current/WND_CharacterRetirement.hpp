#ifndef UE4SS_SDK_WND_CharacterRetirement_HPP
#define UE4SS_SDK_WND_CharacterRetirement_HPP

class UWND_CharacterRetirement_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPanBackground;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* WarningPulse;
    class UBorder* BackgroundFade;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UFSDLabelWidget* Cost_Label;
    class USizeBox* DialogBox;
    class UHorizontalBox* HorizontalBox_Cost;
    class UITM_Craft_ResourceBig_C* ITM_Craft_ResourceBig;
    class UMissionControl_MainDialogue_C* MissionControl;
    class UOVERLAY_RetirementGranted_C* OVERLAY_RetirementGranted;
    class UBasic_ButtonScalable2_C* SkipButton;
    class UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    class UPlayerCharacterID* characterID;
    TMap<UResourceData*, int32> RetirementCost;
    int32 RetiredCount;
    class UAudioComponent* CharacterAudio;
    class UAudioComponent* FanfareAudio;
    class UAudioComponent* MissionControlAudio;
    FTimerHandle MissionControlTimer;
    bool SkipRequested;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void StopAudio(class UAudioComponent* InAudioComponent);
    bool IsAudioFinished(class UAudioComponent* InAudioComponent);
    void BuildCostList();
    void OnFailure_8D7CEF664ECE349247F068951073F0FE();
    void OnSuccess_8D7CEF664ECE349247F068951073F0FE();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SetData(class UPlayerCharacterID* characterID);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void HideMouseCursor();
    void BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature();
    void Retire();
    void FadeInBackground(float Duration);
    void Stop Character Audio();
    void OnClosed();
    void BndEvt__SkipButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void AfterMissionControlSpeak();
    void TestRetire();
    void OnRewardsClosed(class UWindowWidget* Window);
    void ExecuteUbergraph_WND_CharacterRetirement(int32 EntryPoint);
};

#endif
