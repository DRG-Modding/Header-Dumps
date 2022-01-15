#ifndef UE4SS_SDK_ITM_Season_ChallengeTimer_HPP
#define UE4SS_SDK_ITM_Season_ChallengeTimer_HPP

class UITM_Season_ChallengeTimer_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* RotateHourGlass;
    UWidgetAnimation* OnHover;
    UButton* Button_Outer;
    UImage* I_Background;
    UImage* I_Outline;
    UImage* Image_Timeglass;
    UITM_TimeText_C* ITM_TimeText;
    UOverlay* Overlay_Outer;
    UTextBlock* TextBlock_ChallengeText;
    FITM_Season_ChallengeTimer_CShouldGetNewChallenge ShouldGetNewChallenge;
    void ShouldGetNewChallenge();

    void Construct();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void UpdateTime();
    void ExecuteUbergraph_ITM_Season_ChallengeTimer(int32 EntryPoint, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, FTimespan CallFunc_TimeToNewChallenge_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void ShouldGetNewChallenge__DelegateSignature();
}

#endif
