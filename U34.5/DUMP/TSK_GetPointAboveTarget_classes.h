// BlueprintGeneratedClass TSK_GetPointAboveTarget.TSK_GetPointAboveTarget_C
// Size: 0x118 (Inherited: 0xa8)
struct UTSK_GetPointAboveTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector TargetKey; // 0xb0(0x28)
	FBlackboardKeySelector LocationKey; // 0xd8(0x28)
	float RandomRange; // 0x100(0x04)
	float MinRangeAboveTarget; // 0x104(0x04)
	float MaxRangeAboveTarget; // 0x108(0x04)
	FVector TempStorage; // 0x10c(0x0c)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_GetPointAboveTarget(int32_t EntryPoint);
};

