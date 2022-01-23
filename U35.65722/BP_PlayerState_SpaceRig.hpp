#ifndef UE4SS_SDK_BP_PlayerState_SpaceRig_HPP
#define UE4SS_SDK_BP_PlayerState_SpaceRig_HPP

class ABP_PlayerState_SpaceRig_C : public ABP_PlayerState_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UItemUpgradePreviewComponent* ItemUpgradePreview;
    int32 HealthInsuranceStatus;
    FBP_PlayerState_SpaceRig_COnStatChange OnStatChange;
    void OnStatChange(class UMissionStat* MissionStat, FText StatValue);
    TArray<FMissionStatItem> MissionStats;

    void GetMissionStatValue(class UMissionStat* MissionStat, FText& StatValue, bool& Valid, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FMissionStatItem CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FText CallFunc_MissionStatToText_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void SendMissionStatData(class UMissionStat* MissionStat, float Value, FText CallFunc_MissionStatToText_ReturnValue);
    void UpdateMissionStat(class UMissionStat* MissionStat, float Value, FMissionStatItem K2Node_MakeStruct_MissionStatItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FMissionStatItem CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FMissionStatItem K2Node_MakeStruct_MissionStatItem_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void IsListeningToMissionStat(class UMissionStat* MissionStat, bool& HasStat, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FMissionStatItem CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void OnRep_MissionStats(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FMissionStatItem CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void GetHealthInsuranceStatus(int32& HealthInsuranceStatus);
    void UserConstructionScript(int32 CallFunc_RandomInteger_ReturnValue);
    void WatchStat(class UMissionStat* MissionStat);
    void ReceiveBeginPlay();
    void CheckCampaign();
    void OnMissionStatChanged(class UMissionStat* MissionStat, float Value);
    void Server_UpdateStat(class UMissionStat* Mission Stat, float Stat Value);
    void ExecuteUbergraph_BP_PlayerState_SpaceRig(int32 EntryPoint, class UMissionStat* K2Node_CustomEvent_Mission_Stat, float K2Node_CustomEvent_Stat_Value, FExecuteUbergraph_BP_PlayerState_SpaceRigK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UMissionStat* K2Node_CustomEvent_MissionStat_1, float CallFunc_GetStatCountTotal_ReturnValue, bool CallFunc_IsListeningToMissionStat_HasStat, class AActor* CallFunc_GetOwner_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalPlayerController_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class ABP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController, bool CallFunc_IsValid_ReturnValue, class UWindowWidget* CallFunc_GetMissionSelect_Widget, class UMissionStat* K2Node_CustomEvent_MissionStat, float K2Node_CustomEvent_Value, bool CallFunc_IsWindowOpen_ReturnValue, FExecuteUbergraph_BP_PlayerState_SpaceRigK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
    void OnStatChange__DelegateSignature(class UMissionStat* MissionStat, FText StatValue);
};

#endif
