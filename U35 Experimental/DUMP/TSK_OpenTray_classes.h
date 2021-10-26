// BlueprintGeneratedClass TSK_OpenTray.TSK_OpenTray_C
// Size: 0xb9 (Inherited: 0xa8)
struct UTSK_OpenTray_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FName TrayOpen; 
	UPROPERTY(BlueprintReadWrite) bool Open; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_OpenTray(int32_t EntryPoint);
};

