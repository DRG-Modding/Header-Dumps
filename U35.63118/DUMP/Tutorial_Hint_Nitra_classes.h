// BlueprintGeneratedClass Tutorial_Hint_Nitra.Tutorial_Hint_Nitra_C
// Size: 0x188 (Inherited: 0x170)
struct UTutorial_Hint_Nitra_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	UCappedResource* Resource; // 0x178(0x08)
	float MinimumAmount; // 0x180(0x04)
	float DelayBeforeActive; // 0x184(0x04)

	void OnIncreased_Event(UCappedResource* Resource, float Amount);
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Nitra(int32_t EntryPoint);
};

