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
    void ExecuteUbergraph_ITM_Season_ChallengeTimer(int32 EntryPoint);
    void ShouldGetNewChallenge__DelegateSignature();
};

#endif
