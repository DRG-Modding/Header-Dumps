// BlueprintGeneratedClass BP_EnemyControlState.BP_EnemyControlState_C
// Size: 0x280 (Inherited: 0x270)
struct UBP_EnemyControlState_C : UEnemyControlStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UAnimMontage* GetOnMontage; // 0x278(0x08)

	void OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24
	void OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24
	void OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24
	void OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24
	void OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24(struct FName NotifyName); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24
	void OnControllingEnemy(bool IsControlling); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemy
	void OnControllingEnemyAttached(); // Function BP_EnemyControlState.BP_EnemyControlState_C.OnControllingEnemyAttached
	void ExecuteUbergraph_BP_EnemyControlState(int32_t EntryPoint); // Function BP_EnemyControlState.BP_EnemyControlState_C.ExecuteUbergraph_BP_EnemyControlState
};

