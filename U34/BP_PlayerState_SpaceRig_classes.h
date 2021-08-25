// BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C
// Size: 0x480 (Inherited: 0x441)
struct ABP_PlayerState_SpaceRig_C : ABP_PlayerState_C {
	char UnknownData_441[0x7]; // 0x441(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UItemUpgradePreviewComponent* ItemUpgradePreview; // 0x450(0x08)
	int32_t HealthInsuranceStatus; // 0x458(0x04)
	char UnknownData_45C[0x4]; // 0x45c(0x04)
	struct FMulticastInlineDelegate OnStatChange; // 0x460(0x10)
	struct TArray<struct FMissionStatItem> MissionStats; // 0x470(0x10)

	void GetMissionStatValue(struct UMissionStat* MissionStat, struct FText StatValue, bool Valid); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetMissionStatValue
	void SendMissionStatData(struct UMissionStat* MissionStat, float Value); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.SendMissionStatData
	void UpdateMissionStat(struct UMissionStat* MissionStat, float Value); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UpdateMissionStat
	void IsListeningToMissionStat(struct UMissionStat* MissionStat, bool HasStat); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.IsListeningToMissionStat
	void OnRep_MissionStats(); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnRep_MissionStats
	void GetHealthInsuranceStatus(int32_t HealthInsuranceStatus); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus
	void UserConstructionScript(); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript
	void WatchStat(struct UMissionStat* MissionStat); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat
	void ReceiveBeginPlay(); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay
	void CheckCampaign(); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign
	void OnMissionStatChanged(struct UMissionStat* MissionStat, float Value); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnMissionStatChanged
	void Server_UpdateStat(struct UMissionStat* Mission Stat, float Stat Value); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.Server_UpdateStat
	void ExecuteUbergraph_BP_PlayerState_SpaceRig(int32_t EntryPoint); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig
	void OnStatChange__DelegateSignature(struct UMissionStat* MissionStat, struct FText StatValue); // Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature
};

