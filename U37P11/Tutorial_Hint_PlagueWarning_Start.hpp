#ifndef UE4SS_SDK_Tutorial_Hint_PlagueWarning_Start_HPP
#define UE4SS_SDK_Tutorial_Hint_PlagueWarning_Start_HPP

class UTutorial_Hint_PlagueWarning_Start_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float AccumilatedDamage;
    float TotalDamageBeforeShowingHint;
    class AEscortMule* Drilldozer;
    class UFriendlyHealthComponent* DrilldozerHealth;

    void ReceiveOnInitialized();
    void ExecuteUbergraph_Tutorial_Hint_PlagueWarning_Start(int32 EntryPoint);
};

#endif
