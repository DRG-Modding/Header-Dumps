#ifndef UE4SS_SDK_UI_MissionComplete_CombinedRewards_HPP
#define UE4SS_SDK_UI_MissionComplete_CombinedRewards_HPP

class UUI_MissionComplete_CombinedRewards_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* BottomCenter;
    class UNamedSlot* BottomRight;
    class UNamedSlot* CenterContent;
    class UUI_MissionComplete_RewardColumn_C* CreditsColumn;
    class UUI_MissionComplete_RewardColumn_C* XpColumn;
    TArray<class UUI_MissionComplete_CombinedRewardLine_C*> LineArray;
    FUI_MissionComplete_CombinedRewards_COnCountingFinished OnCountingFinished;
    void OnCountingFinished();
    class UAudioComponent* CountAudio;
    bool Counting;

    void PreConstruct(bool IsDesignTime);
    void Begin Counting();
    void BndEvt__CreditsColumn_K2Node_ComponentBoundEvent_0_OnCountingFinished__DelegateSignature();
    void BndEvt__XpColumn_K2Node_ComponentBoundEvent_1_OnCountingFinished__DelegateSignature();
    void OnAudioFinished();
    void ExecuteUbergraph_UI_MissionComplete_CombinedRewards(int32 EntryPoint);
    void OnCountingFinished__DelegateSignature();
};

#endif
