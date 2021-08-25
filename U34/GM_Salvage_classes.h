// BlueprintGeneratedClass GM_Salvage.GM_Salvage_C
// Size: 0x5c0 (Inherited: 0x508)
struct AGM_Salvage_C : ABP_NetworkPlayGameMode_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UAudioComponent* UplinkComplete_Cue; // 0x510(0x08)
	struct UAudioComponent* DroppodMuleReady_Cue; // 0x518(0x08)
	struct AMiningPod* DropPod; // 0x520(0x08)
	struct AEVENT_DropPodDefense_Base_C* DefenseEvent; // 0x528(0x08)
	struct TArray<struct AActor*> MulesSalvaged; // 0x530(0x10)
	struct TArray<struct ABP_Salvage_Point_C*> RepairPoints; // 0x540(0x10)
	struct UOBJ_1st_Salvage_C* Objective; // 0x550(0x08)
	struct TArray<struct AEVENT_DropPodDefense_Base_C*> RepairEvents; // 0x558(0x10)
	int32_t MollyFailsafeCounter; // 0x568(0x04)
	int32_t MollyCloseCounter; // 0x56c(0x04)
	struct TMap<struct ABP_Salvage_Point_C*, int32_t> SalvagePointsAndDist; // 0x570(0x50)

	void UpdateFailsafeMollyCounters(struct FVector v2); // Function GM_Salvage.GM_Salvage_C.UpdateFailsafeMollyCounters
	void SpawnRepairPoints(); // Function GM_Salvage.GM_Salvage_C.SpawnRepairPoints
	void EnableNextRepairPoint(); // Function GM_Salvage.GM_Salvage_C.EnableNextRepairPoint
	void OnLevelGenerationComplete(int32_t pass); // Function GM_Salvage.GM_Salvage_C.OnLevelGenerationComplete
	void Call DropPod(); // Function GM_Salvage.GM_Salvage_C.Call DropPod
	void DonkeyButtonPressed(); // Function GM_Salvage.GM_Salvage_C.DonkeyButtonPressed
	void ReachedDropShip(); // Function GM_Salvage.GM_Salvage_C.ReachedDropShip
	void RepairPoint_Repaired(struct AActor* RepairPoint); // Function GM_Salvage.GM_Salvage_C.RepairPoint_Repaired
	void DefendFail(); // Function GM_Salvage.GM_Salvage_C.DefendFail
	void DefendDone(); // Function GM_Salvage.GM_Salvage_C.DefendDone
	void OnCountdownFinished(); // Function GM_Salvage.GM_Salvage_C.OnCountdownFinished
	void Countdowncomplete(); // Function GM_Salvage.GM_Salvage_C.Countdowncomplete
	void ActivateDonkeyButton(); // Function GM_Salvage.GM_Salvage_C.ActivateDonkeyButton
	void OnMuleBayOpenedDispatch_Event_1(); // Function GM_Salvage.GM_Salvage_C.OnMuleBayOpenedDispatch_Event_1
	void OnObjectivesInitialized(); // Function GM_Salvage.GM_Salvage_C.OnObjectivesInitialized
	void AllActorsSalaged(); // Function GM_Salvage.GM_Salvage_C.AllActorsSalaged
	void ExecuteUbergraph_GM_Salvage(int32_t EntryPoint); // Function GM_Salvage.GM_Salvage_C.ExecuteUbergraph_GM_Salvage
};

