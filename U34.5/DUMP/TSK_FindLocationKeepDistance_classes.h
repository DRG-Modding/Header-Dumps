// BlueprintGeneratedClass TSK_FindLocationKeepDistance.TSK_FindLocationKeepDistance_C
// Size: 0x110 (Inherited: 0xa8)
struct UTSK_FindLocationKeepDistance_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float MinDistance; // 0xb0(0x04)
	float MaxDistance; // 0xb4(0x04)
	FBlackboardKeySelector TargetToAvoid; // 0xb8(0x28)
	float IdealDistance; // 0xe0(0x04)
	FBlackboardKeySelector TargetLocation; // 0xe8(0x28)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindLocationKeepDistance(int32_t EntryPoint);
};

