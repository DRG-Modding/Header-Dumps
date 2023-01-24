#ifndef UE4SS_SDK_Tutorial_Hint_EggMissionTerrainScanner_HPP
#define UE4SS_SDK_Tutorial_Hint_EggMissionTerrainScanner_HPP

class UTutorial_Hint_EggMissionTerrainScanner_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float First Time Delay;
    TSubclassOf<class UObjective> Target Objective;
    float AfterUseDelay;

    void ReceiveOnInitialized();
    void OnToggleMapTool_Event(bool Visible);
    void Mark Ready();
    void ReceiveOnHidden();
    void ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner(int32 EntryPoint);
};

#endif
