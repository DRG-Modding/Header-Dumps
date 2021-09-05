// BlueprintGeneratedClass TSK_TunnelToLocation.TSK_TunnelToLocation_C
// Size: 0xf0 (Inherited: 0xa8)
struct UTSK_TunnelToLocation_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector TargetLocationKey; // 0xb0(0x28)
	UBP_BurrowComponent_C* BurrowComponent; // 0xd8(0x08)
	AEnemyDeepPathfinderCharacter* enemy; // 0xe0(0x08)
	float BurrowSpeed; // 0xe8(0x04)
	float BurrowDuration; // 0xec(0x04)

	FVector GetLocation();
	float GetBurrowDuration();
	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_TunnelToLocation(int32_t EntryPoint);
};

