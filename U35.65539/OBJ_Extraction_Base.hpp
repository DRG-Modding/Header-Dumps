#ifndef UE4SS_SDK_OBJ_Extraction_Base_HPP
#define UE4SS_SDK_OBJ_Extraction_Base_HPP

class UOBJ_Extraction_Base_C : UResourceObjective
{

    UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText(int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Round_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    FObjectiveMissionIcon GetMissionIcon(FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon);
    UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLengthfloat CallFunc_GetRequiredAmount_ReturnValue, int32 CallFunc_Round_ReturnValue);
    FText GetInMissionText(bool CallFunc_IsValid_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    FText GetObjectiveDescription(float missionLengthint32 CallFunc_GetObjectiveAmount_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
