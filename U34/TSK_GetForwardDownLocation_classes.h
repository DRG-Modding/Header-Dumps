// BlueprintGeneratedClass TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C
// Size: 0x11c (Inherited: 0xa8)
struct UTSK_GetForwardDownLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector LocationKey; // 0xb0(0x28)
	struct FBlackboardKeySelector TargetKey; // 0xd8(0x28)
	struct FVector targetloc; // 0x100(0x0c)
	bool ToTarget; // 0x10c(0x01)
	bool Continue; // 0x10d(0x01)
	char UnknownData_10E[0x2]; // 0x10e(0x02)
	struct FVector Location; // 0x110(0x0c)

	void GetEnd(struct FVector PawnLocation, struct FVector TargetLocation, struct FVector PawnForward); // Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.GetEnd
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_GetForwardDownLocation(int32_t EntryPoint); // Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.ExecuteUbergraph_TSK_GetForwardDownLocation
};

