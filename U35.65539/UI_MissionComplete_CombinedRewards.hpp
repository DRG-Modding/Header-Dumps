#ifndef UE4SS_SDK_UI_MissionComplete_CombinedRewards_HPP
#define UE4SS_SDK_UI_MissionComplete_CombinedRewards_HPP

class UUI_MissionComplete_CombinedRewards_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* BottomCenter;
    UNamedSlot* BottomRight;
    UNamedSlot* CenterContent;
    UUI_MissionComplete_RewardColumn_C* CreditsColumn;
    UUI_MissionComplete_RewardColumn_C* XpColumn;
    TArray<UUI_MissionComplete_CombinedRewardLine_C*> LineArray;
    FUI_MissionComplete_CombinedRewards_COnCountingFinished OnCountingFinished;
    void OnCountingFinished();
    UAudioComponent* CountAudio;
    bool Counting;

    void PreConstruct(bool IsDesignTime);
    void Begin Counting();
    void BndEvt__CreditsColumn_K2Node_ComponentBoundEvent_0_OnCountingFinished__DelegateSignature();
    void BndEvt__XpColumn_K2Node_ComponentBoundEvent_1_OnCountingFinished__DelegateSignature();
    void OnAudioFinished();
    void ExecuteUbergraph_UI_MissionComplete_CombinedRewards(int32 EntryPoint, OnAudioFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
    void OnCountingFinished__DelegateSignature();
}

#endif
