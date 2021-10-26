// BlueprintGeneratedClass SER_GetEnemyTarget.SER_GetEnemyTarget_C
// Size: 0x149 (Inherited: 0x98)
struct USER_GetEnemyTarget_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	float range; // 0xa0(0x04)
	FBlackboardKeySelector Target; // 0xa8(0x28)
	bool Require LoS; // 0xd0(0x01)
	FGameplayTagQuery Query; // 0xd8(0x48)
	FBlackboardKeySelector FromKey; // 0x120(0x28)
	bool UseFromActor; // 0x148(0x01)

	void GetEnemyTarget(AActor* FromActor);
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_SER_GetEnemyTarget(int32_t EntryPoint);
};

