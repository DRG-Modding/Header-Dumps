// BlueprintGeneratedClass TSK_FindLocationKeepDistance.TSK_FindLocationKeepDistance_C
// Size: 0x110 (Inherited: 0xa8)
struct UTSK_FindLocationKeepDistance_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float MinDistance; // 0xb0(0x04)
	float MaxDistance; // 0xb4(0x04)
	struct FBlackboardKeySelector TargetToAvoid; // 0xb8(0x28)
	float IdealDistance; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct FBlackboardKeySelector TargetLocation; // 0xe8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FindLocationKeepDistance.TSK_FindLocationKeepDistance_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_FindLocationKeepDistance(int32_t EntryPoint); // Function TSK_FindLocationKeepDistance.TSK_FindLocationKeepDistance_C.ExecuteUbergraph_TSK_FindLocationKeepDistance
};

