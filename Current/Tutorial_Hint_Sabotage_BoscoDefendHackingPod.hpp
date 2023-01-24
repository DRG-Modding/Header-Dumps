#ifndef UE4SS_SDK_Tutorial_Hint_Sabotage_BoscoDefendHackingPod_HPP
#define UE4SS_SDK_Tutorial_Hint_Sabotage_BoscoDefendHackingPod_HPP

class UTutorial_Hint_Sabotage_BoscoDefendHackingPod_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveOnInitialized();
    void OnBoscoChanged(class ABosco* Bosco);
    void OnOverChargerCalled_Event_0(FVector Location, int32 roomIndex);
    void TetherPickedup(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_Tutorial_Hint_Sabotage_BoscoDefendHackingPod(int32 EntryPoint);
};

#endif
