// BlueprintGeneratedClass TSK_BackOff.TSK_BackOff_C
// Size: 0xe4 (Inherited: 0xa8)
struct UTSK_BackOff_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector DangerKey; // 0xb0(0x28)
	float Distance; // 0xd8(0x04)
	float WaitAfterFleeing; // 0xdc(0x04)
	float RandomWaitTime; // 0xe0(0x04)

	void SetBackOffFalse(struct AController* Controller); // Function TSK_BackOff.TSK_BackOff_C.SetBackOffFalse
	void OutsideDanger(struct AActor* Pawn, bool res); // Function TSK_BackOff.TSK_BackOff_C.OutsideDanger
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_BackOff.TSK_BackOff_C.ReceiveExecuteAI
	void PathDone(bool success); // Function TSK_BackOff.TSK_BackOff_C.PathDone
	void RefreshDest(); // Function TSK_BackOff.TSK_BackOff_C.RefreshDest
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_BackOff.TSK_BackOff_C.ReceiveAbortAI
	void ExecuteUbergraph_TSK_BackOff(int32_t EntryPoint); // Function TSK_BackOff.TSK_BackOff_C.ExecuteUbergraph_TSK_BackOff
};

