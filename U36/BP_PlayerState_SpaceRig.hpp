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

    void GetMissionStatValue(class UMissionStat* MissionStat, FText& StatValue, bool& Valid);
    void SendMissionStatData(class UMissionStat* MissionStat, float Value);
    void UpdateMissionStat(class UMissionStat* MissionStat, float Value);
    void IsListeningToMissionStat(class UMissionStat* MissionStat, bool& HasStat);
    void OnRep_MissionStats();
    void GetHealthInsuranceStatus(int32& HealthInsuranceStatus);
    void UserConstructionScript();
    void WatchStat(class UMissionStat* MissionStat);
    void ReceiveBeginPlay();
    void CheckCampaign();
    void OnMissionStatChanged(class UObject* WorldContext, class UMissionStat* MissionStat, float Value);
    void Server_UpdateStat(class UMissionStat* Mission Stat, float Stat Value);
    void ExecuteUbergraph_BP_PlayerState_SpaceRig(int32 EntryPoint);
    void OnStatChange__DelegateSignature(class UMissionStat* MissionStat, FText StatValue);
};

#endif
