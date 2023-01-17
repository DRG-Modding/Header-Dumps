#ifndef UE4SS_SDK_Tutorial_Hint_PlagueWarning_SporeTowerCleaning_HPP
#define UE4SS_SDK_Tutorial_Hint_PlagueWarning_SporeTowerCleaning_HPP

class UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float AccumilatedDamage;
    float TotalDamageBeforeShowingHint;
    class AEscortMule* Drilldozer;
    class UFriendlyHealthComponent* DrilldozerHealth;
    class ABP_CleanupPod_C* CleanupPod;
    FTutorialHint FollowupHint;

    void ReceiveOnInitialized();
    void OnTriggerCleaningTutorial();
    void OnTutorialTaskFinished();
    void ExecuteUbergraph_Tutorial_Hint_PlagueWarning_SporeTowerCleaning(int32 EntryPoint);
};

#endif
