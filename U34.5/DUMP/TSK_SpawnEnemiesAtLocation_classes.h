// BlueprintGeneratedClass TSK_SpawnEnemiesAtLocation.TSK_SpawnEnemiesAtLocation_C
// Size: 0xe8 (Inherited: 0xa8)
struct UTSK_SpawnEnemiesAtLocation_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t count; // 0xb0(0x04)
	UEnemyDescriptor* EnemyToSpawn; // 0xb8(0x08)
	FBlackboardKeySelector LocationKey; // 0xc0(0x28)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_SpawnEnemiesAtLocation(int32_t EntryPoint);
};

