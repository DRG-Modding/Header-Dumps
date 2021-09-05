// BlueprintGeneratedClass TSK_SetConditionTo.TSK_SetConditionTo_C
// Size: 0xd9 (Inherited: 0xa8)
struct UTSK_SetConditionTo_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FBlackboardKeySelector Condition; // 0xb0(0x28)
	bool SetConditionTo; // 0xd8(0x01)

	void ReceiveExecute(AActor* OwnerActor);
	void ExecuteUbergraph_TSK_SetConditionTo(int32_t EntryPoint);
};

