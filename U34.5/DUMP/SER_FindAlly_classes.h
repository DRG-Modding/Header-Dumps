// BlueprintGeneratedClass SER_FindAlly.SER_FindAlly_C
// Size: 0x11c (Inherited: 0x98)
struct USER_FindAlly_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	FBlackboardKeySelector TargetKey; // 0xa0(0x28)
	float MaxRange; // 0xc8(0x04)
	FGameplayTagQuery AllyQuery; // 0xd0(0x48)
	float RangeToReCheck; // 0x118(0x04)

	void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_SER_FindAlly(int32_t EntryPoint);
};

