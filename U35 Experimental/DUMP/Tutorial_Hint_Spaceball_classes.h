// BlueprintGeneratedClass Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C
// Size: 0x188 (Inherited: 0x170)
struct UTutorial_Hint_Spaceball_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	UResourceData* ResourceType; // 0x178(0x08)
	UCappedResource* Resource; // 0x180(0x08)

	void ReceiveOnHidden();
	void ReceiveOnInitialized();
	void OnUse(UUsableComponentBase* Component);
	void ExecuteUbergraph_Tutorial_Hint_Spaceball(int32_t EntryPoint);
};

