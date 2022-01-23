#ifndef UE4SS_SDK_OBJ_DD_Defense_HPP
#define UE4SS_SDK_OBJ_DD_Defense_HPP

class UOBJ_DD_Defense_C : public UDefenseObjective
{

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText(FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    FObjectiveMissionIcon GetMissionIcon(FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon);
    class UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText(TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    FText GetObjectiveDescription(float missionLengthint32 CallFunc_GetObjectiveAmount_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
