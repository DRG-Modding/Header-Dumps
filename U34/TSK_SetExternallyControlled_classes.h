// BlueprintGeneratedClass TSK_SetExternallyControlled.TSK_SetExternallyControlled_C
// Size: 0xb1 (Inherited: 0xa8)
struct UTSK_SetExternallyControlled_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool IsControlledExternally; // 0xb0(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_SetExternallyControlled.TSK_SetExternallyControlled_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_SetExternallyControlled(int32_t EntryPoint); // Function TSK_SetExternallyControlled.TSK_SetExternallyControlled_C.ExecuteUbergraph_TSK_SetExternallyControlled
};

