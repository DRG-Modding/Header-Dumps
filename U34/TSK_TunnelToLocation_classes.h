// BlueprintGeneratedClass TSK_TunnelToLocation.TSK_TunnelToLocation_C
// Size: 0xf0 (Inherited: 0xa8)
struct UTSK_TunnelToLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector TargetLocationKey; // 0xb0(0x28)
	struct UBP_BurrowComponent_C* BurrowComponent; // 0xd8(0x08)
	struct AEnemyDeepPathfinderCharacter* enemy; // 0xe0(0x08)
	float BurrowSpeed; // 0xe8(0x04)
	float BurrowDuration; // 0xec(0x04)

	struct FVector GetLocation(); // Function TSK_TunnelToLocation.TSK_TunnelToLocation_C.GetLocation
	float GetBurrowDuration(); // Function TSK_TunnelToLocation.TSK_TunnelToLocation_C.GetBurrowDuration
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_TunnelToLocation.TSK_TunnelToLocation_C.ReceiveExecuteAI
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TSK_TunnelToLocation.TSK_TunnelToLocation_C.ReceiveAbortAI
	void ExecuteUbergraph_TSK_TunnelToLocation(int32_t EntryPoint); // Function TSK_TunnelToLocation.TSK_TunnelToLocation_C.ExecuteUbergraph_TSK_TunnelToLocation
};

