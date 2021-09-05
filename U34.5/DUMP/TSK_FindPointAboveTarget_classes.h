// BlueprintGeneratedClass TSK_FindPointAboveTarget.TSK_FindPointAboveTarget_C
// Size: 0x118 (Inherited: 0xa8)
struct UTSK_FindPointAboveTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector LocationKey; // 0xb0(0x28)
	float Distance; // 0xd8(0x04)
	FBlackboardKeySelector TargetKey; // 0xe0(0x28)
	float Height; // 0x108(0x04)
	FVector ManualOffset; // 0x10c(0x0c)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindPointAboveTarget(int32_t EntryPoint);
};

