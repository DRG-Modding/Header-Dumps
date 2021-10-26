// BlueprintGeneratedClass BT_Task_InfectedMule_FindPlayerLocation.BT_Task_InfectedMule_FindPlayerLocation_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBT_Task_InfectedMule_FindPlayerLocation_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector LocationKey; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BT_Task_InfectedMule_FindPlayerLocation(int32_t EntryPoint);
};

