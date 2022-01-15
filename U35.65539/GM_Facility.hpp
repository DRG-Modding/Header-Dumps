#ifndef UE4SS_SDK_GM_Facility_HPP
#define UE4SS_SDK_GM_Facility_HPP

class AGM_Facility_C : UBP_NetworkPlayGameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<ABP_SmallGenerator_C*> generators;
    UOBJ_1st_Facility_C* Objective;
    ABP_MainFacility_DataVault_C* mainFacility;
    TSubclassOf<AActor> ActivatorClass;
    TSubclassOf<AActor> FacilityClass;
    TSubclassOf<ARessuplyPod> FacilityGeneratorClass;
    UEWC_Base_C* WaveMusic;
    TArray<int32> RoomsToSpawnIn;
    int32 activations;
    int32 current;
    ABP_Facility_PowerStation_GeneratorBase_C* LastGenerator;
    TArray<UEWC_OverloadShieldGenerator_Facility_C*> ActiveWaves;
    FMusicHandle MusicHandle;
    int32 GeneratorsCalled;

    void StopOverChargerWave(UBP_Facility_PowerStation_GeneratorBase_C* WaveOrigin, int32 Temp_int_Array_Index_Variable, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UEWC_OverloadShieldGenerator_Facility_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, UEWC_OverloadShieldGenerator_Facility_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void StartOverChargerWave(UBP_Facility_PowerStation_GeneratorBase_C* ShieldGenerator, UTetherComponent* tetherlineStart, bool CallFunc_HasAuthority_ReturnValue, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, UEWC_OverloadShieldGenerator_Facility_C* CallFunc_TriggerWave_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, USoundCue* CallFunc_Array_Get_Item, FMusicHandle CallFunc_Play_ReturnValue);
    void GetGeneratorRooms(TArray<int32>& Array, TArray<int32> NewLocalVar_0, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, UPLS_Facility_C* K2Node_DynamicCast_AsPLS_Facility, bool K2Node_DynamicCast_bSuccess);
    void GetTargetRooms(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void SetObjective(UOBJ_1st_Facility_C* Objective);
    void FacilityActivated();
    void OnFacilityDestroyed();
    void Damaged();
    void SpawnMissionCriticalItems();
    void ReceiveBeginPlay();
    void GeneratorCharged(UBP_Facility_PowerStation_GeneratorBase_C* Generator);
    void OnOverChargerCalled(FVector Location, int32 roomIndex);
    void SubscribeToShieldEvents(UBP_Facility_PowerStation_GeneratorBase_C* Generator);
    void Recieve_Charged(UBP_Facility_PowerStation_GeneratorBase_C* Generator);
    void Recieve_ChargerCalled(FVector Location, int32 roomIndex);
    void Recieve_FirstConnected(UBP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherlineStart);
    void OnObjectivesInitialized();
    void DonkeyButtonPressed();
    void ExecuteUbergraph_GM_Facility(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, FacilityActivated__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, UOBJ_1st_Facility_C* K2Node_CustomEvent_Objective, int32 CallFunc_Add_IntInt_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsSubObjectiveComplete_ReturnValue, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, int32 CallFunc_GetShieldGeneratorCount_ReturnValue, UPLS_Facility_C* K2Node_DynamicCast_AsPLS_Facility, bool K2Node_DynamicCast_bSuccess, TArray<int32>& CallFunc_GetGeneratorRooms_Array, int32 CallFunc_Array_Get_Item, AActor* CallFunc_PlaceObjectInRoom_ReturnValue, UBP_MainFacility_DataVault_C* K2Node_DynamicCast_AsBP_Main_Facility_Data_Vault, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable_1, AActor* CallFunc_PlaceObjectInRoom_ReturnValue_1, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Generator_Base, bool K2Node_DynamicCast_bSuccess_2, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator_3, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_2, FVector K2Node_CustomEvent_Location_1, int32 K2Node_CustomEvent_RoomIndex_1, bool CallFunc_HasAuthority_ReturnValue_1, FacilityDestroyed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FacilityDamaged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, UDialogDataAsset* Temp_object_Variable, UDialogDataAsset* Temp_object_Variable_1, bool Temp_bool_Variable, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator_2, FirstConnect__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, OnOverChargerCalled__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator_1, FVector K2Node_CustomEvent_Location, int32 K2Node_CustomEvent_RoomIndex, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, UTetherComponent* K2Node_CustomEvent_tetherlineStart, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, OnShieldGeneratorCharged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UOBJ_1st_Facility_C* K2Node_DynamicCast_AsOBJ_1st_Facility, bool K2Node_DynamicCast_bSuccess_3, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, UEWC_ShieledGenerator_DronePresure_Facility_C* CallFunc_TriggerWave_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue_1, UDialogDataAsset* K2Node_Select_Default);
}

#endif
