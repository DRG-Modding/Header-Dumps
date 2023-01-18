#ifndef UE4SS_SDK_EWC_TutorialGrunts_HPP
#define UE4SS_SDK_EWC_TutorialGrunts_HPP

class UEWC_TutorialGrunts_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    class ABP_TutorialTriggerManager_C* TriggerManager;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_TutorialGrunts(int32 EntryPoint);
};

#endif
