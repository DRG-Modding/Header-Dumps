// BlueprintGeneratedClass TSK_SetExternallyControlled.TSK_SetExternallyControlled_C
// Size: 0xb1 (Inherited: 0xa8)
struct UTSK_SetExternallyControlled_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool IsControlledExternally; // 0xb0(0x01)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_SetExternallyControlled(int32_t EntryPoint);
};

