// BlueprintGeneratedClass GM_Salvage.GM_Salvage_C
// Size: 0x5c0 (Inherited: 0x508)
struct AGM_Salvage_C : ABP_NetworkPlayGameMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	UAudioComponent* UplinkComplete_Cue; // 0x510(0x08)
	UAudioComponent* DroppodMuleReady_Cue; // 0x518(0x08)
	AMiningPod* DropPod; // 0x520(0x08)
	AEVENT_DropPodDefense_Base_C* DefenseEvent; // 0x528(0x08)
	TArray<AActor*> MulesSalvaged; // 0x530(0x10)
	TArray<ABP_Salvage_Point_C*> RepairPoints; // 0x540(0x10)
	UOBJ_1st_Salvage_C* Objective; // 0x550(0x08)
	TArray<AEVENT_DropPodDefense_Base_C*> RepairEvents; // 0x558(0x10)
	int32_t MollyFailsafeCounter; // 0x568(0x04)
	int32_t MollyCloseCounter; // 0x56c(0x04)
	TMap<ABP_Salvage_Point_C*, int32_t> SalvagePointsAndDist; // 0x570(0x50)

	void UpdateFailsafeMollyCounters(FVector v2);
	void SpawnRepairPoints();
	void EnableNextRepairPoint();
	void OnLevelGenerationComplete(int32_t pass);
	void Call DropPod();
	void DonkeyButtonPressed();
	void ReachedDropShip();
	void RepairPoint_Repaired(AActor* RepairPoint);
	void DefendFail();
	void DefendDone();
	void OnCountdownFinished();
	void Countdowncomplete();
	void ActivateDonkeyButton();
	void OnMuleBayOpenedDispatch_Event_1();
	void OnObjectivesInitialized();
	void AllActorsSalaged();
	void ExecuteUbergraph_GM_Salvage(int32_t EntryPoint);
};

