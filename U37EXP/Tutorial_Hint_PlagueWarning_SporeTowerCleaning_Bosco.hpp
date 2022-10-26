#ifndef UE4SS_SDK_Tutorial_Hint_PlagueWarning_SporeTowerCleaning_Bosco_HPP
#define UE4SS_SDK_Tutorial_Hint_PlagueWarning_SporeTowerCleaning_Bosco_HPP

class UTutorial_Hint_PlagueWarning_SporeTowerCleaning_Bosco_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float AccumilatedDamage;
    float TotalDamageBeforeShowingHint;
    class AEscortMule* Drilldozer;
    class UFriendlyHealthComponent* DrilldozerHealth;
    class ABP_CleanupPod_C* CleanupPod;

    void ReceiveOnInitialized();
    void OnTriggerCleaningTutorial();
    void OnItemEquipped_LithoFoamer(class AItem* Item);
    void ExecuteUbergraph_Tutorial_Hint_PlagueWarning_SporeTowerCleaning_Bosco(int32 EntryPoint);
};

#endif
