// BlueprintGeneratedClass AIC_EscortMule.AIC_EscortMule_C
// Size: 0x460 (Inherited: 0x410)
struct AAIC_EscortMule_C : AEscortMuleAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) AEscortMule* EscortMule; 
	UPROPERTY(BlueprintReadWrite) bool DoDebugPath; 
	UPROPERTY(BlueprintReadWrite) float SpeedModWhileTunneling; 
	UPROPERTY(BlueprintReadWrite) float SpeedModPlayers; 
	UPROPERTY(BlueprintReadWrite) float SpeedModEnemies; 
	UPROPERTY(BlueprintReadWrite) UEWC_Escort_DigPhase_C* WaveController_Drilling; 
	UPROPERTY(BlueprintReadWrite) UEWC_Escort_Refueling_C* WaveController_Refueling; 
	UPROPERTY(BlueprintReadWrite) float SpeedModCheat; 
	UPROPERTY(BlueprintReadWrite) FVector DrilldozerLocationWhenActivated; 
	UPROPERTY(BlueprintReadWrite) bool AtDestination; 
	UPROPERTY(BlueprintReadWrite) bool MuleReady; 
	UPROPERTY(BlueprintReadWrite) int32_t debugStartRoom; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle SpeedModifierHandle; 

	UFUNCTION(BlueprintCallable) void CalculateSpeedModifier();
	UFUNCTION(BlueprintCallable) void GetPointBehindMule(float atDistance, FVector Point);
	UFUNCTION(BlueprintCallable) void UpdateDrillSegmentCubic();
	UFUNCTION(BlueprintCallable) void DebugPath(TArray<FVector> inArray, FLinearColor Color);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceivePossess(APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable) void OnMessageBehaviorTreeEvent_Event(FName Message);
	UFUNCTION(BlueprintCallable) void OnActivatePressed();
	UFUNCTION(BlueprintCallable) void Cheat_IncreaseSpeed();
	UFUNCTION(BlueprintCallable) void CompleteRefuel();
	UFUNCTION(BlueprintCallable) void MoveToEndOfPath();
	UFUNCTION(BlueprintCallable) void OnExitGaragePathSet(TArray<FVector> Path);
	UFUNCTION(BlueprintCallable) void Cheat_SetMuleSpeed(float FloatValue);
	UFUNCTION(BlueprintCallable) void Cheat_JumpToNextPhase();
	UFUNCTION(BlueprintCallable) void SetIsRefueled();
	UFUNCTION(BlueprintCallable) void ArrivedAtStop();
	UFUNCTION(BlueprintCallable) void DrawDebugPath();
	UFUNCTION(BlueprintCallable) void OnPathComplete();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_EscortMule(int32_t EntryPoint);
};

