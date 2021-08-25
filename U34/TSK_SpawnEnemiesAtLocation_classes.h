// BlueprintGeneratedClass TSK_SpawnEnemiesAtLocation.TSK_SpawnEnemiesAtLocation_C
// Size: 0xe8 (Inherited: 0xa8)
struct UTSK_SpawnEnemiesAtLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	int32_t count; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
	struct UEnemyDescriptor* EnemyToSpawn; // 0xb8(0x08)
	struct FBlackboardKeySelector LocationKey; // 0xc0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_SpawnEnemiesAtLocation.TSK_SpawnEnemiesAtLocation_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_SpawnEnemiesAtLocation(int32_t EntryPoint); // Function TSK_SpawnEnemiesAtLocation.TSK_SpawnEnemiesAtLocation_C.ExecuteUbergraph_TSK_SpawnEnemiesAtLocation
};

