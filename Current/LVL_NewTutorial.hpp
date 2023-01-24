#ifndef UE4SS_SDK_LVL_NewTutorial_HPP
#define UE4SS_SDK_LVL_NewTutorial_HPP

class ALVL_NewTutorial_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_TutorialTriggerManager_C* manager;
    class UEWC_TutorialGrunts_C* WaveManager;
    class UHUD_TutorialLevelManager_C* WidgetManager;
    class AFSDPlayerController* PlayerController;

    void MessageReceived_Event_0(FName TriggerName);
    void ReceiveBeginPlay();
    void objectivesCompleted();
    void ExecuteUbergraph_LVL_NewTutorial(int32 EntryPoint);
};

#endif
