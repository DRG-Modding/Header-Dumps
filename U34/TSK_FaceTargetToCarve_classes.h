// BlueprintGeneratedClass TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C
// Size: 0xe8 (Inherited: 0xa8)
struct UTSK_FaceTargetToCarve_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetActorKey; // 0xb0(0x28)
	float Angle; // 0xd8(0x04)
	int32_t Tries; // 0xdc(0x04)
	bool FailIfCantTurn; // 0xe0(0x01)
	char UnknownData_E1[0x3]; // 0xe1(0x03)
	int32_t MaxTries; // 0xe4(0x04)

	bool IsFacingTarget(struct AActor* Tank); // Function TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C.IsFacingTarget
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C.ReceiveExecuteAI
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C.ReceiveAbortAI
	void ExecuteUbergraph_TSK_FaceTargetToCarve(int32_t EntryPoint); // Function TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C.ExecuteUbergraph_TSK_FaceTargetToCarve
};

