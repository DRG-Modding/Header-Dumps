// BlueprintGeneratedClass TSK_FindPointAboveTarget.TSK_FindPointAboveTarget_C
// Size: 0x118 (Inherited: 0xa8)
struct UTSK_FindPointAboveTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector LocationKey; // 0xb0(0x28)
	float Distance; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct FBlackboardKeySelector TargetKey; // 0xe0(0x28)
	float Height; // 0x108(0x04)
	struct FVector ManualOffset; // 0x10c(0x0c)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FindPointAboveTarget.TSK_FindPointAboveTarget_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_FindPointAboveTarget(int32_t EntryPoint); // Function TSK_FindPointAboveTarget.TSK_FindPointAboveTarget_C.ExecuteUbergraph_TSK_FindPointAboveTarget
};

