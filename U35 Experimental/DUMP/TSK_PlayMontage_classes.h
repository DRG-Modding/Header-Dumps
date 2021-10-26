// BlueprintGeneratedClass TSK_PlayMontage.TSK_PlayMontage_C
// Size: 0xba (Inherited: 0xa8)
struct UTSK_PlayMontage_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAnimMontage* Montage; 
	UPROPERTY(BlueprintReadWrite) bool WaitForCompletion; 
	UPROPERTY(BlueprintReadWrite) bool FreezeAlignment; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_PlayMontage(int32_t EntryPoint);
};

