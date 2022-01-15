#ifndef UE4SS_SDK_Tutorial_Hint_EggMissionTerrainScanner_HPP
#define UE4SS_SDK_Tutorial_Hint_EggMissionTerrainScanner_HPP

class UTutorial_Hint_EggMissionTerrainScanner_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float First Time Delay;
    TSubclassOf<UObjective> Target Objective;
    float AfterUseDelay;

    void ReceiveOnInitialized();
    void OnToggleMapTool_Event(bool Visible);
    void Mark Ready();
    void ReceiveOnHidden();
    void ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner(int32 EntryPoint, bool Temp_bool_Variable, ToggleMapToolSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, TSubclassOf<UObjective> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool K2Node_CustomEvent_Visible, bool CallFunc_HasTutorialBeenShown_ReturnValue, float K2Node_Select_Default);
}

#endif
