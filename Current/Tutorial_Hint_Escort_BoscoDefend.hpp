#ifndef UE4SS_SDK_Tutorial_Hint_Escort_BoscoDefend_HPP
#define UE4SS_SDK_Tutorial_Hint_Escort_BoscoDefend_HPP

class UTutorial_Hint_Escort_BoscoDefend_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveOnInitialized();
    void OnBoscoChanged(class ABosco* Bosco);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_Tutorial_Hint_Escort_BoscoDefend(int32 EntryPoint);
};

#endif
