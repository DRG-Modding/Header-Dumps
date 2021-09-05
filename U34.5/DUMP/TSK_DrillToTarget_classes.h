// BlueprintGeneratedClass TSK_DrillToTarget.TSK_DrillToTarget_C
// Size: 0x180 (Inherited: 0xa8)
struct UTSK_DrillToTarget_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector StartPosKey; // 0xb0(0x28)
	FBlackboardKeySelector EndPosKey; // 0xd8(0x28)
	FBlackboardKeySelector StartTangentKey; // 0x100(0x28)
	FBlackboardKeySelector EndTangentKey; // 0x128(0x28)
	float Progress; // 0x150(0x04)
	float MoveSpeed; // 0x154(0x04)
	FVector NewLocation; // 0x158(0x0c)
	AEscortMule* MULE; // 0x168(0x08)
	float RotateSpeedMod; // 0x170(0x04)
	FRotator NewRotation; // 0x174(0x0c)

	void FindNextLoc(float DeltaSeconds, float additionalProgress, FVector NewLoc, FRotator NewRotation);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_TSK_DrillToTarget(int32_t EntryPoint);
};

