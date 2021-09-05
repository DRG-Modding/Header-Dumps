// BlueprintGeneratedClass TSK_FaceTargetToCarve.TSK_FaceTargetToCarve_C
// Size: 0xe8 (Inherited: 0xa8)
struct UTSK_FaceTargetToCarve_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector TargetActorKey; // 0xb0(0x28)
	float Angle; // 0xd8(0x04)
	int32_t Tries; // 0xdc(0x04)
	bool FailIfCantTurn; // 0xe0(0x01)
	int32_t MaxTries; // 0xe4(0x04)

	bool IsFacingTarget(AActor* Tank);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FaceTargetToCarve(int32_t EntryPoint);
};

