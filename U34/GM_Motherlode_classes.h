// BlueprintGeneratedClass GM_Motherlode.GM_Motherlode_C
// Size: 0x51c (Inherited: 0x508)
struct AGM_Motherlode_C : ABP_NetworkPlayGameMode_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct FVector SelectedSpawnLocation; // 0x510(0x0c)

	void GetLandingZoneLocation(struct FVector Output); // Function GM_Motherlode.GM_Motherlode_C.GetLandingZoneLocation
	void GetMineHead(struct ABP_MineHead_C* Output); // Function GM_Motherlode.GM_Motherlode_C.GetMineHead
	void ReceiveBeginPlay(); // Function GM_Motherlode.GM_Motherlode_C.ReceiveBeginPlay
	void OnMatchStarted_(); // Function GM_Motherlode.GM_Motherlode_C.OnMatchStarted_
	void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature(); // Function GM_Motherlode.GM_Motherlode_C.BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature
	void OnCountdownFinished(); // Function GM_Motherlode.GM_Motherlode_C.OnCountdownFinished
	void RocketLaunched(); // Function GM_Motherlode.GM_Motherlode_C.RocketLaunched
	void SpawnMissionCriticalItems(); // Function GM_Motherlode.GM_Motherlode_C.SpawnMissionCriticalItems
	void ExecuteUbergraph_GM_Motherlode(int32_t EntryPoint); // Function GM_Motherlode.GM_Motherlode_C.ExecuteUbergraph_GM_Motherlode
};

