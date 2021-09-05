// BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C
// Size: 0x130 (Inherited: 0x128)
struct UBP_FrozenState_C : UFrozenStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x128(0x08)

	void ReceiveStateEnter();
	void ReceiveStateExit();
	void ReceiveOnDefrosting();
	void ExecuteUbergraph_BP_FrozenState(int32_t EntryPoint);
};

