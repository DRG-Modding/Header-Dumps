// BlueprintGeneratedClass GM_Salvage.GM_Salvage_C
// Size: 0x5c0 (Inherited: 0x508)
struct AGM_Salvage_C : ABP_NetworkPlayGameMode_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* UplinkComplete_Cue; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* DroppodMuleReady_Cue; 
	UPROPERTY(BlueprintReadWrite) AMiningPod* DropPod; 
	UPROPERTY(BlueprintReadWrite) AEVENT_DropPodDefense_Base_C* DefenseEvent; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> MulesSalvaged; 
	UPROPERTY(BlueprintReadWrite) TArray<ABP_Salvage_Point_C*> RepairPoints; 
	UPROPERTY(BlueprintReadWrite) UOBJ_1st_Salvage_C* Objective; 
	UPROPERTY(BlueprintReadWrite) TArray<AEVENT_DropPodDefense_Base_C*> RepairEvents; 
	UPROPERTY(BlueprintReadWrite) int32_t MollyFailsafeCounter; 
	UPROPERTY(BlueprintReadWrite) int32_t MollyCloseCounter; 
	UPROPERTY(BlueprintReadWrite) TMap<ABP_Salvage_Point_C*, int32_t> SalvagePointsAndDist; 

	UFUNCTION(BlueprintCallable) void UpdateFailsafeMollyCounters(FVector v2);
	UFUNCTION(BlueprintCallable) void SpawnRepairPoints();
	UFUNCTION(BlueprintCallable) void EnableNextRepairPoint();
	UFUNCTION(BlueprintCallable) void OnLevelGenerationComplete(int32_t pass);
	UFUNCTION(BlueprintCallable) void Call DropPod();
	UFUNCTION(BlueprintCallable) void DonkeyButtonPressed();
	UFUNCTION(BlueprintCallable) void ReachedDropShip();
	UFUNCTION(BlueprintCallable) void RepairPoint_Repaired(AActor* RepairPoint);
	UFUNCTION(BlueprintCallable) void DefendFail();
	UFUNCTION(BlueprintCallable) void DefendDone();
	UFUNCTION(BlueprintCallable) void OnCountdownFinished();
	UFUNCTION(BlueprintCallable) void Countdowncomplete();
	UFUNCTION(BlueprintCallable) void ActivateDonkeyButton();
	UFUNCTION(BlueprintCallable) void OnMuleBayOpenedDispatch_Event_1();
	UFUNCTION(BlueprintCallable) void OnObjectivesInitialized();
	UFUNCTION(BlueprintCallable) void AllActorsSalaged();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_GM_Salvage(int32_t EntryPoint);
};

