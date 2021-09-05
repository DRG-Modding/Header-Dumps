// BlueprintGeneratedClass TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C
// Size: 0x11c (Inherited: 0xa8)
struct UTSK_GetForwardDownLocation_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector LocationKey; // 0xb0(0x28)
	FBlackboardKeySelector TargetKey; // 0xd8(0x28)
	FVector targetloc; // 0x100(0x0c)
	bool ToTarget; // 0x10c(0x01)
	bool Continue; // 0x10d(0x01)
	FVector Location; // 0x110(0x0c)

	void GetEnd(FVector PawnLocation, FVector TargetLocation, FVector PawnForward);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_GetForwardDownLocation(int32_t EntryPoint);
};

