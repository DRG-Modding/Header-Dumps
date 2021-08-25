// BlueprintGeneratedClass TSK_PlayMontage.TSK_PlayMontage_C
// Size: 0xba (Inherited: 0xa8)
struct UTSK_PlayMontage_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct UAnimMontage* Montage; // 0xb0(0x08)
	bool WaitForCompletion; // 0xb8(0x01)
	bool FreezeAlignment; // 0xb9(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_PlayMontage.TSK_PlayMontage_C.ReceiveExecuteAI
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_PlayMontage.TSK_PlayMontage_C.ReceiveAbortAI
	void ExecuteUbergraph_TSK_PlayMontage(int32_t EntryPoint); // Function TSK_PlayMontage.TSK_PlayMontage_C.ExecuteUbergraph_TSK_PlayMontage
};

