#ifndef UE4SS_SDK_OBJ_DD_RepairMinimules_HPP
#define UE4SS_SDK_OBJ_DD_RepairMinimules_HPP

class UOBJ_DD_RepairMinimules_C : public URepairObjective
{

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText(FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    FObjectiveMissionIcon GetMissionIcon(FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIconFromAsset_ReturnValue);
    int32 GetObjectiveAmount(float missionLength);
    FText GetInMissionText(TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    FText GetObjectiveDescription(float missionLengthint32 CallFunc_GetObjectiveAmount_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    class UTexture2D* GetObjectiveIcon();
};

#endif
