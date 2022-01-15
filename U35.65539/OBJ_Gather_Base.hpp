#ifndef UE4SS_SDK_OBJ_Gather_Base_HPP
#define UE4SS_SDK_OBJ_Gather_Base_HPP

class UOBJ_Gather_Base_C : UGatherGemsObjective
{
    FText ObjectiveDescription;

    bool IsObjectiveResource(UResourceData* InResourcebool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText(FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLengthbool Temp_bool_Variable, float Temp_float_Variable, float K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLengthint32 CallFunc_GetObjectiveAmount_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
