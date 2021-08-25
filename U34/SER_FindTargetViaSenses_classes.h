// BlueprintGeneratedClass SER_FindTargetViaSenses.SER_FindTargetViaSenses_C
// Size: 0xe8 (Inherited: 0x98)
struct USER_FindTargetViaSenses_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xa0(0x28)
	struct FGameplayTagContainer AllowedTargets; // 0xc8(0x20)

	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function SER_FindTargetViaSenses.SER_FindTargetViaSenses_C.ReceiveSearchStartAI
	void OnSensePawn(struct APawn* Pawn); // Function SER_FindTargetViaSenses.SER_FindTargetViaSenses_C.OnSensePawn
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function SER_FindTargetViaSenses.SER_FindTargetViaSenses_C.ReceiveTickAI
	void ExecuteUbergraph_SER_FindTargetViaSenses(int32_t EntryPoint); // Function SER_FindTargetViaSenses.SER_FindTargetViaSenses_C.ExecuteUbergraph_SER_FindTargetViaSenses
};

