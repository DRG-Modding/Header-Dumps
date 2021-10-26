// BlueprintGeneratedClass TSK_StopAttackStance.TSK_StopAttackStance_C
// Size: 0xb0 (Inherited: 0xa8)
struct UTSK_StopAttackStance_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_StopAttackStance(int32_t EntryPoint);
};

