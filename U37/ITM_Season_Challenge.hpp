#ifndef UE4SS_SDK_ITM_Season_Challenge_HPP
#define UE4SS_SDK_ITM_Season_Challenge_HPP

class UITM_Season_Challenge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnHover;
    class UWidgetAnimation* OnHoverEndScreen;
    class UWidgetAnimation* MissionSelection;
    class UWidgetAnimation* ChallengeComplete;
    class UWidgetAnimation* CountFinished;
    class UWidgetAnimation* CountProgress;
    class UWidgetAnimation* ShowReroll;
    class UWidgetAnimation* UNUSED_OLD_OnHover;
    class UWidgetAnimation* RerollAnim;
    class UWidgetAnimation* NewChallengeIntro;
    class UWidgetAnimation* ImageLoaded;
    class UButton* Button_Outer;
    class UButton* Button_Reroll;
    class UHorizontalBox* HBox_Gain;
    class UImage* I_Background;
    class UImage* I_Background_1;
    class UImage* I_ButtonStyle;
    class UImage* I_ButtonStyle_1;
    class UImage* I_ButtonStyle_2;
    class UImage* I_Shade;
    class UImage* I_Shade_Completed;
    class UImage* Image_Challenge;
    class UImage* Image_Checkmark;
    class UImage* Image_Glow;
    class UImage* Image_Glow_Completed;
    class UImage* Image_PerformancePoints;
    class UImage* Image_Reroll;
    class UImage* Image_Token;
    class UImage* Image_Type;
    class UOverlay* Overlay_Outer;
    class UOverlay* Overlay_Scale;
    class UProgressBar* ProgressBar_142;
    class URetainerBox* RetainerBox_Masking;
    class UTextBlock* Text_NumberOfWins;
    class UTextBlock* Text_XPGain;
    class UTextBlock* TextBlock_ChallengeText;
    class UWidgetSwitcher* WidgetSwitcher_Icon;
    FChallengeInfo ChallengeInfo;
    FITM_Season_Challenge_CRerollClicked RerollClicked;
    void RerollClicked(class UITM_Season_Challenge_C* W_Challenge);
    bool CanReroll;
    bool AtEndscreen;
    FITM_Season_Challenge_CAddPoints AddPoints;
    void AddPoints(class UITM_Season_Challenge_C* Challenge);
    bool ChallengeCompleted;

    void SequenceEvent__ENTRYPOINTITM_Season_Challenge_1();
    void SequenceEvent__ENTRYPOINTITM_Season_Challenge_0();
    void GetInfo(FChallengeInfo& Challenge);
    void No_E6C47A9D469243C399A8EE948A23FA13();
    void Yes_E6C47A9D469243C399A8EE948A23FA13();
    void Construct();
    void OnImageLoaded();
    void BndEvt__Button_Reroll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PlayIntro();
    void Reroll(FChallengeInfo NewChallengeInfo, bool NewCanReroll);
    void NewRerollText();
    void Refresh();
    void SetCanReroll(bool InCanReroll);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Reroll_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Reroll_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void OnIntroDone();
    void OnCountFinished();
    void ProgressCount();
    void SetAtMissionSelection();
    void ExecuteUbergraph_ITM_Season_Challenge(int32 EntryPoint);
    void AddPoints__DelegateSignature(class UITM_Season_Challenge_C* Challenge);
    void RerollClicked__DelegateSignature(class UITM_Season_Challenge_C* W_Challenge);
};

#endif
