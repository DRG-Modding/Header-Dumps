// BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C
// Size: 0x138 (Inherited: 0x130)
struct UBP_FrozenState_C : UFrozenStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)

	void ReceiveStateEnter();
	void ReceiveStateExit();
	void ReceiveOnDefrosting();
	void ExecuteUbergraph_BP_FrozenState(int32_t EntryPoint);
};

