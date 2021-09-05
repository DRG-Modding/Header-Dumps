// BlueprintGeneratedClass AIC_EscortMule.AIC_EscortMule_C
// Size: 0x460 (Inherited: 0x410)
struct AAIC_EscortMule_C : AEscortMuleAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	AEscortMule* EscortMule; // 0x418(0x08)
	bool DoDebugPath; // 0x420(0x01)
	float SpeedModWhileTunneling; // 0x424(0x04)
	float SpeedModPlayers; // 0x428(0x04)
	float SpeedModEnemies; // 0x42c(0x04)
	UEWC_Escort_DigPhase_C* WaveController_Drilling; // 0x430(0x08)
	UEWC_Escort_Refueling_C* WaveController_Refueling; // 0x438(0x08)
	float SpeedModCheat; // 0x440(0x04)
	FVector DrilldozerLocationWhenActivated; // 0x444(0x0c)
	bool AtDestination; // 0x450(0x01)
	bool MuleReady; // 0x451(0x01)
	int32_t debugStartRoom; // 0x454(0x04)
	FTimerHandle SpeedModifierHandle; // 0x458(0x08)

	void CalculateSpeedModifier();
	void GetPointBehindMule(float atDistance, FVector Point);
	void UpdateDrillSegmentCubic();
	void DebugPath(TArray<FVector> inArray, FLinearColor Color);
	void ReceiveBeginPlay();
	void ReceivePossess(APawn* PossessedPawn);
	void OnMessageBehaviorTreeEvent_Event(FName Message);
	void OnActivatePressed();
	void Cheat_IncreaseSpeed();
	void CompleteRefuel();
	void MoveToEndOfPath();
	void OnExitGaragePathSet(TArray<FVector> Path);
	void Cheat_SetMuleSpeed(float FloatValue);
	void Cheat_JumpToNextPhase();
	void SetIsRefueled();
	void ArrivedAtStop();
	void DrawDebugPath();
	void OnPathComplete();
	void ExecuteUbergraph_AIC_EscortMule(int32_t EntryPoint);
};

