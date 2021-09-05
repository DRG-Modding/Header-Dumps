// BlueprintGeneratedClass TSK_FleeFrom.TSK_FleeFrom_C
// Size: 0xe4 (Inherited: 0xa8)
struct UTSK_FleeFrom_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector DangerKey; // 0xb0(0x28)
	float Distance; // 0xd8(0x04)
	float WaitAfterFleeing; // 0xdc(0x04)
	float RandomWaitTime; // 0xe0(0x04)

	FVector GetDanagerLocation();
	void SetFleeFalse(AController* Controller);
	void OutsideDanger(AActor* Pawn, bool res);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void PathDone(bool success);
	void RefreshDest();
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FleeFrom(int32_t EntryPoint);
};

