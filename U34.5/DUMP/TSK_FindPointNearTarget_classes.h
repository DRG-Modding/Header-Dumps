// BlueprintGeneratedClass TSK_FindPointNearTarget.TSK_FindPointNearTarget_C
// Size: 0x110 (Inherited: 0xa8)
struct UTSK_FindPointNearTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FVector ManualOffset; // 0xb0(0x0c)
	float Distance; // 0xbc(0x04)
	FBlackboardKeySelector TargetKey; // 0xc0(0x28)
	FBlackboardKeySelector LocationKey; // 0xe8(0x28)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindPointNearTarget(int32_t EntryPoint);
};

