// BlueprintGeneratedClass TSK_RandomPointFromOrigin.TSK_RandomPointFromOrigin_C
// Size: 0x128 (Inherited: 0xa8)
struct UTSK_RandomPointFromOrigin_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool FindAtDistance; // 0xb0(0x01)
	FBlackboardKeySelector Origin; // 0xb8(0x28)
	float Distance; // 0xe0(0x04)
	FBlackboardKeySelector LocationKey; // 0xe8(0x28)
	FVector OriginVec; // 0x110(0x0c)
	FVector Vector; // 0x11c(0x0c)

	void ActorOrVector();
	void snap(bool snap, UDeepPathfinderMovement* Path, FVector Origin);
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_RandomPointFromOrigin(int32_t EntryPoint);
};

