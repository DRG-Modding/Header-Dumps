#ifndef UE4SS_SDK_OBJ_Elimination_Base_HPP
#define UE4SS_SDK_OBJ_Elimination_Base_HPP

class UOBJ_Elimination_Base_C : public UEliminationObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText Title;
    FText Description;

    class UTexture2D* GetInMissionCounterIcon();
    FText GetInMissionCounterText(FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    class UTexture2D* GetObjectiveIcon();
    int32 GetObjectiveAmount(float missionLengthfloat CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
    FText GetInMissionText();
    FText GetObjectiveDescription(float missionLengthint32 CallFunc_GetObjectiveAmount_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void ReceiveTargetKilled();
    void ReceiveTargetSpawned();
    void ExecuteUbergraph_OBJ_Elimination_Base(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue_1);
};

#endif
