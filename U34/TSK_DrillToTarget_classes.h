// BlueprintGeneratedClass TSK_DrillToTarget.TSK_DrillToTarget_C
// Size: 0x180 (Inherited: 0xa8)
struct UTSK_DrillToTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector StartPosKey; // 0xb0(0x28)
	struct FBlackboardKeySelector EndPosKey; // 0xd8(0x28)
	struct FBlackboardKeySelector StartTangentKey; // 0x100(0x28)
	struct FBlackboardKeySelector EndTangentKey; // 0x128(0x28)
	float Progress; // 0x150(0x04)
	float MoveSpeed; // 0x154(0x04)
	struct FVector NewLocation; // 0x158(0x0c)
	char UnknownData_164[0x4]; // 0x164(0x04)
	struct AEscortMule* MULE; // 0x168(0x08)
	float RotateSpeedMod; // 0x170(0x04)
	struct FRotator NewRotation; // 0x174(0x0c)

	void FindNextLoc(float DeltaSeconds, float additionalProgress, struct FVector NewLoc, struct FRotator NewRotation); // Function TSK_DrillToTarget.TSK_DrillToTarget_C.FindNextLoc
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_DrillToTarget.TSK_DrillToTarget_C.ReceiveExecuteAI
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function TSK_DrillToTarget.TSK_DrillToTarget_C.ReceiveTickAI
	void ExecuteUbergraph_TSK_DrillToTarget(int32_t EntryPoint); // Function TSK_DrillToTarget.TSK_DrillToTarget_C.ExecuteUbergraph_TSK_DrillToTarget
};

