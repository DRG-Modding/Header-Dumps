// BlueprintGeneratedClass TSK_RandomPointFromOrigin.TSK_RandomPointFromOrigin_C
// Size: 0x128 (Inherited: 0xa8)
struct UTSK_RandomPointFromOrigin_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	bool FindAtDistance; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
	struct FBlackboardKeySelector Origin; // 0xb8(0x28)
	float Distance; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct FBlackboardKeySelector LocationKey; // 0xe8(0x28)
	struct FVector OriginVec; // 0x110(0x0c)
	struct FVector Vector; // 0x11c(0x0c)

	void ActorOrVector(); // Function TSK_RandomPointFromOrigin.TSK_RandomPointFromOrigin_C.ActorOrVector
	void snap(bool snap, struct UDeepPathfinderMovement* Path, struct FVector Origin); // Function TSK_RandomPointFromOrigin.TSK_RandomPointFromOrigin_C.snap
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_RandomPointFromOrigin.TSK_RandomPointFromOrigin_C.ReceiveExecuteAI
	void ExecuteUbergraph_TSK_RandomPointFromOrigin(int32_t EntryPoint); // Function TSK_RandomPointFromOrigin.TSK_RandomPointFromOrigin_C.ExecuteUbergraph_TSK_RandomPointFromOrigin
};

