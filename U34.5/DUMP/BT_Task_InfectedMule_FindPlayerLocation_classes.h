// BlueprintGeneratedClass BT_Task_InfectedMule_FindPlayerLocation.BT_Task_InfectedMule_FindPlayerLocation_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBT_Task_InfectedMule_FindPlayerLocation_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector LocationKey; // 0xb0(0x28)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_BT_Task_InfectedMule_FindPlayerLocation(int32_t EntryPoint);
};

