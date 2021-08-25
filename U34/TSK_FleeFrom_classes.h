// BlueprintGeneratedClass TSK_FleeFrom.TSK_FleeFrom_C
// Size: 0xe4 (Inherited: 0xa8)
struct UTSK_FleeFrom_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector DangerKey; // 0xb0(0x28)
	float Distance; // 0xd8(0x04)
	float WaitAfterFleeing; // 0xdc(0x04)
	float RandomWaitTime; // 0xe0(0x04)

	struct FVector GetDanagerLocation(); // Function TSK_FleeFrom.TSK_FleeFrom_C.GetDanagerLocation
	void SetFleeFalse(struct AController* Controller); // Function TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse
	void OutsideDanger(struct AActor* Pawn, bool res); // Function TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI
	void PathDone(bool success); // Function TSK_FleeFrom.TSK_FleeFrom_C.PathDone
	void RefreshDest(); // Function TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI
	void ExecuteUbergraph_TSK_FleeFrom(int32_t EntryPoint); // Function TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom
};

