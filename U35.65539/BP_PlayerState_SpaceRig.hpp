#ifndef UE4SS_SDK_BP_PlayerState_SpaceRig_HPP
#define UE4SS_SDK_BP_PlayerState_SpaceRig_HPP

class ABP_PlayerState_SpaceRig_C : UBP_PlayerState_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UItemUpgradePreviewComponent* ItemUpgradePreview;
    int32 HealthInsuranceStatus;
    FBP_PlayerState_SpaceRig_COnStatChange OnStatChange;
    void OnStatChange(UMissionStat* MissionStat, FText StatValue);
    TArray<FMissionStatItem> MissionStats;

    void GetMissionStatValue(UMissionStat* MissionStat, FText& StatValue, bool& Valid, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FMissionStatItem CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FText CallFunc_MissionStatToText_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void SendMissionStatData(UMissionStat* MissionStat, float Value, FText CallFunc_MissionStatToText_ReturnValue);
    void UpdateMissionStat(UMissionStat* MissionStat, float Value, FMissionStatItem K2Node_MakeStruct_MissionStatItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FMissionStatItem CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FMissionStatItem K2Node_MakeStruct_MissionStatItem_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void IsListeningToMissionStat(UMissionStat* MissionStat, bool& HasStat, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FMissionStatItem CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void OnRep_MissionStats(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FMissionStatItem CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void GetHealthInsuranceStatus(int32& HealthInsuranceStatus);
    void UserConstructionScript(int32 CallFunc_RandomInteger_ReturnValue);
    void WatchStat(UMissionStat* MissionStat);
    void ReceiveBeginPlay();
    void CheckCampaign();
    void OnMissionStatChanged(UMissionStat* MissionStat, float Value);
    void Server_UpdateStat(UMissionStat* Mission Stat, float Stat Value);
    void ExecuteUbergraph_BP_PlayerState_SpaceRig(int32 EntryPoint, UMissionStat* K2Node_CustomEvent_Mission_Stat, float K2Node_CustomEvent_Stat_Value, StatCountChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UMissionStat* K2Node_CustomEvent_MissionStat_1, float CallFunc_GetStatCountTotal_ReturnValue, bool CallFunc_IsListeningToMissionStat_HasStat, AActor* CallFunc_GetOwner_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UPlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalPlayerController_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UBP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController, bool CallFunc_IsValid_ReturnValue, UWindowWidget* CallFunc_GetMissionSelect_Widget, UMissionStat* K2Node_CustomEvent_MissionStat, float K2Node_CustomEvent_Value, bool CallFunc_IsWindowOpen_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
    void OnStatChange__DelegateSignature(UMissionStat* MissionStat, FText StatValue);
}

#endif
