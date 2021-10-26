// BlueprintGeneratedClass GM_Motherlode.GM_Motherlode_C
// Size: 0x51c (Inherited: 0x508)
struct AGM_Motherlode_C : ABP_NetworkPlayGameMode_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FVector SelectedSpawnLocation; 

	UFUNCTION(BlueprintCallable) void GetLandingZoneLocation(FVector Output);
	UFUNCTION(BlueprintCallable) void GetMineHead(ABP_MineHead_C* Output);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnMatchStarted_();
	UFUNCTION(BlueprintCallable) void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnCountdownFinished();
	UFUNCTION(BlueprintCallable) void RocketLaunched();
	UFUNCTION(BlueprintCallable) void SpawnMissionCriticalItems();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_GM_Motherlode(int32_t EntryPoint);
};

