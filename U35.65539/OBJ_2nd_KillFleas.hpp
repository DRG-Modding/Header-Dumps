#ifndef UE4SS_SDK_OBJ_2nd_KillFleas_HPP
#define UE4SS_SDK_OBJ_2nd_KillFleas_HPP

class UOBJ_2nd_KillFleas_C : UKillEnemiesObjective
{
    FText MissionText;

    UTexture2D* GetInMissionCounterIcon(TSubclassOf<APawn> CallFunc_GetEnemyClass_ReturnValue, UObjectInfoComponent* CallFunc_GetComponentFromClass_ReturnValue, UTexture2D* CallFunc_GetInGameIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    FText GetInMissionCounterText(FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    FObjectiveMissionIcon GetMissionIcon(FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon);
    UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLengthbool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLengthint32 CallFunc_GetObjectiveAmount_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
