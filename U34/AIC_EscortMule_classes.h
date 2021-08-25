// BlueprintGeneratedClass AIC_EscortMule.AIC_EscortMule_C
// Size: 0x460 (Inherited: 0x410)
struct AAIC_EscortMule_C : AEscortMuleAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct AEscortMule* EscortMule; // 0x418(0x08)
	bool DoDebugPath; // 0x420(0x01)
	char UnknownData_421[0x3]; // 0x421(0x03)
	float SpeedModWhileTunneling; // 0x424(0x04)
	float SpeedModPlayers; // 0x428(0x04)
	float SpeedModEnemies; // 0x42c(0x04)
	struct UEWC_Escort_DigPhase_C* WaveController_Drilling; // 0x430(0x08)
	struct UEWC_Escort_Refueling_C* WaveController_Refueling; // 0x438(0x08)
	float SpeedModCheat; // 0x440(0x04)
	struct FVector DrilldozerLocationWhenActivated; // 0x444(0x0c)
	bool AtDestination; // 0x450(0x01)
	bool MuleReady; // 0x451(0x01)
	char UnknownData_452[0x2]; // 0x452(0x02)
	int32_t debugStartRoom; // 0x454(0x04)
	struct FTimerHandle SpeedModifierHandle; // 0x458(0x08)

	void CalculateSpeedModifier(); // Function AIC_EscortMule.AIC_EscortMule_C.CalculateSpeedModifier
	void GetPointBehindMule(float atDistance, struct FVector Point); // Function AIC_EscortMule.AIC_EscortMule_C.GetPointBehindMule
	void UpdateDrillSegmentCubic(); // Function AIC_EscortMule.AIC_EscortMule_C.UpdateDrillSegmentCubic
	void DebugPath(struct TArray<struct FVector> inArray, struct FLinearColor Color); // Function AIC_EscortMule.AIC_EscortMule_C.DebugPath
	void ReceiveBeginPlay(); // Function AIC_EscortMule.AIC_EscortMule_C.ReceiveBeginPlay
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_EscortMule.AIC_EscortMule_C.ReceivePossess
	void OnMessageBehaviorTreeEvent_Event(struct FName Message); // Function AIC_EscortMule.AIC_EscortMule_C.OnMessageBehaviorTreeEvent_Event
	void OnActivatePressed(); // Function AIC_EscortMule.AIC_EscortMule_C.OnActivatePressed
	void Cheat_IncreaseSpeed(); // Function AIC_EscortMule.AIC_EscortMule_C.Cheat_IncreaseSpeed
	void CompleteRefuel(); // Function AIC_EscortMule.AIC_EscortMule_C.CompleteRefuel
	void MoveToEndOfPath(); // Function AIC_EscortMule.AIC_EscortMule_C.MoveToEndOfPath
	void OnExitGaragePathSet(struct TArray<struct FVector> Path); // Function AIC_EscortMule.AIC_EscortMule_C.OnExitGaragePathSet
	void Cheat_SetMuleSpeed(float FloatValue); // Function AIC_EscortMule.AIC_EscortMule_C.Cheat_SetMuleSpeed
	void Cheat_JumpToNextPhase(); // Function AIC_EscortMule.AIC_EscortMule_C.Cheat_JumpToNextPhase
	void SetIsRefueled(); // Function AIC_EscortMule.AIC_EscortMule_C.SetIsRefueled
	void ArrivedAtStop(); // Function AIC_EscortMule.AIC_EscortMule_C.ArrivedAtStop
	void DrawDebugPath(); // Function AIC_EscortMule.AIC_EscortMule_C.DrawDebugPath
	void OnPathComplete(); // Function AIC_EscortMule.AIC_EscortMule_C.OnPathComplete
	void ExecuteUbergraph_AIC_EscortMule(int32_t EntryPoint); // Function AIC_EscortMule.AIC_EscortMule_C.ExecuteUbergraph_AIC_EscortMule
};

