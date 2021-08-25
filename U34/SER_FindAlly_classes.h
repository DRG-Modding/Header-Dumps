// BlueprintGeneratedClass SER_FindAlly.SER_FindAlly_C
// Size: 0x11c (Inherited: 0x98)
struct USER_FindAlly_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector TargetKey; // 0xa0(0x28)
	float MaxRange; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct FGameplayTagQuery AllyQuery; // 0xd0(0x48)
	float RangeToReCheck; // 0x118(0x04)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function SER_FindAlly.SER_FindAlly_C.ReceiveTickAI
	void ExecuteUbergraph_SER_FindAlly(int32_t EntryPoint); // Function SER_FindAlly.SER_FindAlly_C.ExecuteUbergraph_SER_FindAlly
};

