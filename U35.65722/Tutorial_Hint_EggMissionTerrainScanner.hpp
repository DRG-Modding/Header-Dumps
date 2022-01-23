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
    void ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScannerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, TSubclassOf<class UObjective> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool K2Node_CustomEvent_Visible, bool CallFunc_HasTutorialBeenShown_ReturnValue, float K2Node_Select_Default);
};

#endif
