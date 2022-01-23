#ifndef UE4SS_SDK_ITM_Season_ChallengeTimer_HPP
#define UE4SS_SDK_ITM_Season_ChallengeTimer_HPP

class UITM_Season_ChallengeTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RotateHourGlass;
    class UWidgetAnimation* OnHover;
    class UButton* Button_Outer;
    class UImage* I_Background;
    class UImage* I_Outline;
    class UImage* Image_Timeglass;
    class UITM_TimeText_C* ITM_TimeText;
    class UOverlay* Overlay_Outer;
    class UTextBlock* TextBlock_ChallengeText;
    FITM_Season_ChallengeTimer_CShouldGetNewChallenge ShouldGetNewChallenge;
    void ShouldGetNewChallenge();

    void Construct();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void UpdateTime();
    void ExecuteUbergraph_ITM_Season_ChallengeTimer(int32 EntryPoint, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, FTimespan CallFunc_TimeToNewChallenge_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FExecuteUbergraph_ITM_Season_ChallengeTimerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void ShouldGetNewChallenge__DelegateSignature();
};

#endif
