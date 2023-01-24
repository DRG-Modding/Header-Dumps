#ifndef UE4SS_SDK_Tutorial_Hint_Escort_BoscoOilShale_HPP
#define UE4SS_SDK_Tutorial_Hint_Escort_BoscoOilShale_HPP

class UTutorial_Hint_Escort_BoscoOilShale_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveOnInitialized();
    void OnBoscoChanged(class ABosco* Bosco);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Tutorial_Hint_Escort_BoscoOilShale(int32 EntryPoint);
};

#endif
