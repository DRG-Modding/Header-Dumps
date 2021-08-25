// BlueprintGeneratedClass Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C
// Size: 0x188 (Inherited: 0x170)
struct UTutorial_Hint_Nitra_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct UCappedResource* Resource; // 0x178(0x08)
	float MinimumAmount; // 0x180(0x04)
	float DelayBeforeActive; // 0x184(0x04)

	void OnIncreased_Event(struct UCappedResource* Resource, float amount); // Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.OnIncreased_Event
	void ReceiveOnInitialized(); // Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.ReceiveOnInitialized
	void ExecuteUbergraph_Tutorial_Hint_Nitra(int32_t EntryPoint); // Function Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C.ExecuteUbergraph_Tutorial_Hint_Nitra
};

