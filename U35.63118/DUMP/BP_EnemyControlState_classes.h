// BlueprintGeneratedClass BP_EnemyControlState.BP_EnemyControlState_C
// Size: 0x2a0 (Inherited: 0x290)
struct UBP_EnemyControlState_C : UEnemyControlStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	UAnimMontage* GetOnMontage; // 0x298(0x08)

	void OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
	void OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
	void OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
	void OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
	void OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
	void OnControllingEnemy(bool IsControlling);
	void OnControllingEnemyAttached();
	void ExecuteUbergraph_BP_EnemyControlState(int32_t EntryPoint);
};
