// BlueprintGeneratedClass TSK_PlayMontage.TSK_PlayMontage_C
// Size: 0xba (Inherited: 0xa8)
struct UTSK_PlayMontage_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	UAnimMontage* Montage; // 0xb0(0x08)
	bool WaitForCompletion; // 0xb8(0x01)
	bool FreezeAlignment; // 0xb9(0x01)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_PlayMontage(int32_t EntryPoint);
};

