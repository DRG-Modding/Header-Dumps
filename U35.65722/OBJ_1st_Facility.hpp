#ifndef UE4SS_SDK_OBJ_1st_Facility_HPP
#define UE4SS_SDK_OBJ_1st_Facility_HPP

class UOBJ_1st_Facility_C : public UFacilityObjective
{
    FPointerToUberGraphFrame UberGraphFrame;

    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionCounterText(const FSubObjective CallFunc_GetCurrentObjective_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    FText GetInMissionText(const FSubObjective CallFunc_GetCurrentObjective_ReturnValue);
    int32 GetObjectiveAmount(float missionLength);
    bool IsObjectiveResource(class UResourceData* InResourcebool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    class UTexture2D* GetInMissionCounterIcon(class UTexture2D* CallFunc_GetInMissionCounterIcon_ReturnValue);
    class UTexture2D* GetObjectiveIcon();
    void ReceiveBeginPlay();
    void OnCoreDeposited();
    void Receive_AddEnemies(class AProceduralSetup* setup);
    void ExecuteUbergraph_OBJ_1st_Facility(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEncounterManager* CallFunc_GetEncounterManager_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class AProceduralSetup* K2Node_Event_setup);
};

#endif
