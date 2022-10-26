#ifndef UE4SS_SDK_Tutorial_Hint_BoscoFirstSoloMission_HPP
#define UE4SS_SDK_Tutorial_Hint_BoscoFirstSoloMission_HPP

class UTutorial_Hint_BoscoFirstSoloMission_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    FTutorialHint ReminderHint;

    void ReceiveOnInitialized();
    void OnLaserPointerEvent(const FLaserPointerTarget& HitInfo);
    void ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission(int32 EntryPoint);
};

#endif
