#ifndef UE4SS_SDK_W_Tutorial_TerrainScanner_HPP
#define UE4SS_SDK_W_Tutorial_TerrainScanner_HPP

class UW_Tutorial_TerrainScanner_C : UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ABP_TutorialTriggerManager_C* Manager;
    bool HasStartedScanning;
    float ScanStartTime;

    void OnShown();
    void UpdateText();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Tutorial_TerrainScanner(int32 EntryPoint, FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsTerrainScannerEquipped_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_HasCharacter_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TArray<ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetUseToggleTerrainScanner_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
