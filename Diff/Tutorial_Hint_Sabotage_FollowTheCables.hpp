#ifndef UE4SS_SDK_Tutorial_Hint_Sabotage_FollowTheCables_HPP
#define UE4SS_SDK_Tutorial_Hint_Sabotage_FollowTheCables_HPP

class UTutorial_Hint_Sabotage_FollowTheCables_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UObjective> Target Objective;
    float DelayAfterFacilityWasSeenBeforeShowingHint;
    bool FoundPowerstation;

    void ReceiveOnInitialized();
    void FacilityWasFound();
    void ExecuteUbergraph_Tutorial_Hint_Sabotage_FollowTheCables(int32 EntryPoint);
};

#endif
