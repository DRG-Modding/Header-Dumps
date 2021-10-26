// BlueprintGeneratedClass TSK_SetExternallyControlled.TSK_SetExternallyControlled_C
// Size: 0xb1 (Inherited: 0xa8)
struct UTSK_SetExternallyControlled_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) bool IsControlledExternally; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_SetExternallyControlled(int32_t EntryPoint);
};

