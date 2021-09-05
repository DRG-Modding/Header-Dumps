// BlueprintGeneratedClass TSK_GetDown.TSK_GetDown_C
// Size: 0xb1 (Inherited: 0xa8)
struct UTSK_GetDown_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool Down; // 0xb0(0x01)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_GetDown(int32_t EntryPoint);
};

