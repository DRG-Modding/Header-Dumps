#ifndef UE4SS_SDK_GM_Facility_HPP
#define UE4SS_SDK_GM_Facility_HPP

class AGM_Facility_C : public ABP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class ABP_SmallGenerator_C*> generators;
    class UOBJ_1st_Facility_C* Objective;
    class ABP_MainFacility_DataVault_C* mainFacility;
    TSubclassOf<class AActor> ActivatorClass;
    TSubclassOf<class AActor> FacilityClass;
    TSubclassOf<class ARessuplyPod> FacilityGeneratorClass;
    class UEWC_Base_C* WaveMusic;
    TArray<int32> RoomsToSpawnIn;
    int32 activations;
    int32 current;
    class ABP_Facility_PowerStation_GeneratorBase_C* LastGenerator;
    TArray<class UEWC_OverloadShieldGenerator_Facility_C*> ActiveWaves;
    FMusicHandle MusicHandle;
    int32 GeneratorsCalled;

    void StopOverChargerWave(class ABP_Facility_PowerStation_GeneratorBase_C* WaveOrigin, int32 Temp_int_Array_Index_Variable, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UEWC_OverloadShieldGenerator_Facility_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UEWC_OverloadShieldGenerator_Facility_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void StartOverChargerWave(class ABP_Facility_PowerStation_GeneratorBase_C* ShieldGenerator, class UTetherComponent* tetherlineStart, bool CallFunc_HasAuthority_ReturnValue, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, class UEWC_OverloadShieldGenerator_Facility_C* CallFunc_TriggerWave_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class USoundCue* CallFunc_Array_Get_Item, FMusicHandle CallFunc_Play_ReturnValue);
    void GetGeneratorRooms(TArray<int32>& Array, TArray<int32> NewLocalVar_0, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, class APLS_Facility_C* K2Node_DynamicCast_AsPLS_Facility, bool K2Node_DynamicCast_bSuccess);
    void GetTargetRooms(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void SetObjective(class UOBJ_1st_Facility_C* Objective);
    void FacilityActivated();
    void OnFacilityDestroyed();
    void Damaged();
    void SpawnMissionCriticalItems();
    void ReceiveBeginPlay();
    void GeneratorCharged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void OnOverChargerCalled(FVector Location, int32 roomIndex);
    void SubscribeToShieldEvents(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void Recieve_Charged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void Recieve_ChargerCalled(FVector Location, int32 roomIndex);
    void Recieve_FirstConnected(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherlineStart);
    void OnObjectivesInitialized();
    void DonkeyButtonPressed();
    void ExecuteUbergraph_GM_Facility(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_GM_FacilityK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class UOBJ_1st_Facility_C* K2Node_CustomEvent_Objective, int32 CallFunc_Add_IntInt_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsSubObjectiveComplete_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, int32 CallFunc_GetShieldGeneratorCount_ReturnValue, class APLS_Facility_C* K2Node_DynamicCast_AsPLS_Facility, bool K2Node_DynamicCast_bSuccess, TArray<int32>& CallFunc_GetGeneratorRooms_Array, int32 CallFunc_Array_Get_Item, class AActor* CallFunc_PlaceObjectInRoom_ReturnValue, class ABP_MainFacility_DataVault_C* K2Node_DynamicCast_AsBP_Main_Facility_Data_Vault, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable_1, class AActor* CallFunc_PlaceObjectInRoom_ReturnValue_1, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Generator_Base, bool K2Node_DynamicCast_bSuccess_2, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator_3, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_2, FVector K2Node_CustomEvent_Location_1, int32 K2Node_CustomEvent_RoomIndex_1, bool CallFunc_HasAuthority_ReturnValue_1, FExecuteUbergraph_GM_FacilityK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_GM_FacilityK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UDialogDataAsset* Temp_object_Variable, class UDialogDataAsset* Temp_object_Variable_1, bool Temp_bool_Variable, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator_2, FExecuteUbergraph_GM_FacilityK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_GM_FacilityK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator_1, FVector K2Node_CustomEvent_Location, int32 K2Node_CustomEvent_RoomIndex, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, class UTetherComponent* K2Node_CustomEvent_tetherlineStart, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, FExecuteUbergraph_GM_FacilityK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class UOBJ_1st_Facility_C* K2Node_DynamicCast_AsOBJ_1st_Facility, bool K2Node_DynamicCast_bSuccess_3, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, class UEWC_ShieledGenerator_DronePresure_Facility_C* CallFunc_TriggerWave_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue_1, class UDialogDataAsset* K2Node_Select_Default);
};

#endif
