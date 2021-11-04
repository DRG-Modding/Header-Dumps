// BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C
// Size: 0x488 (Inherited: 0x449)
struct ABP_PlayerState_SpaceRig_C : ABP_PlayerState_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	UItemUpgradePreviewComponent* ItemUpgradePreview; // 0x458(0x08)
	int32_t HealthInsuranceStatus; // 0x460(0x04)
	FMulticastInlineDelegate OnStatChange; // 0x468(0x10)
	TArray<FMissionStatItem> MissionStats; // 0x478(0x10)

	void GetMissionStatValue(UMissionStat* MissionStat, FText StatValue, bool Valid);
	void SendMissionStatData(UMissionStat* MissionStat, float Value);
	void UpdateMissionStat(UMissionStat* MissionStat, float Value);
	void IsListeningToMissionStat(UMissionStat* MissionStat, bool HasStat);
	void OnRep_MissionStats();
	void GetHealthInsuranceStatus(int32_t HealthInsuranceStatus);
	void UserConstructionScript();
	void WatchStat(UMissionStat* MissionStat);
	void ReceiveBeginPlay();
	void CheckCampaign();
	void OnMissionStatChanged(UMissionStat* MissionStat, float Value);
	void Server_UpdateStat(UMissionStat* Mission Stat, float Stat Value);
	void ExecuteUbergraph_BP_PlayerState_SpaceRig(int32_t EntryPoint);
	void OnStatChange__DelegateSignature(UMissionStat* MissionStat, FText StatValue);
};

