// BlueprintGeneratedClass GM_Motherlode.GM_Motherlode_C
// Size: 0x51c (Inherited: 0x508)
struct AGM_Motherlode_C : ABP_NetworkPlayGameMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	FVector SelectedSpawnLocation; // 0x510(0x0c)

	void GetLandingZoneLocation(FVector Output);
	void GetMineHead(ABP_MineHead_C* Output);
	void ReceiveBeginPlay();
	void OnMatchStarted_();
	void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature();
	void OnCountdownFinished();
	void RocketLaunched();
	void SpawnMissionCriticalItems();
	void ExecuteUbergraph_GM_Motherlode(int32_t EntryPoint);
};

