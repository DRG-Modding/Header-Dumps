// BlueprintGeneratedClass TSK_SpawnEnemiesAtLocation.TSK_SpawnEnemiesAtLocation_C
// Size: 0xe8 (Inherited: 0xa8)
struct UTSK_SpawnEnemiesAtLocation_C : UBTTask_BlueprintBase {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) int32_t count; 
	UPROPERTY(BlueprintReadWrite) UEnemyDescriptor* EnemyToSpawn; 
	UPROPERTY(BlueprintReadWrite) FBlackboardKeySelector LocationKey; 

	UFUNCTION(BlueprintCallable) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_TSK_SpawnEnemiesAtLocation(int32_t EntryPoint);
};

