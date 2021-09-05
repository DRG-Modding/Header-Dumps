// BlueprintGeneratedClass SER_FindTargetViaSenses.SER_FindTargetViaSenses_C
// Size: 0xe8 (Inherited: 0x98)
struct USER_FindTargetViaSenses_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	FBlackboardKeySelector TargetKey; // 0xa0(0x28)
	FGameplayTagContainer AllowedTargets; // 0xc8(0x20)

	void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);
	void OnSensePawn(APawn* Pawn);
	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_SER_FindTargetViaSenses(int32_t EntryPoint);
};

