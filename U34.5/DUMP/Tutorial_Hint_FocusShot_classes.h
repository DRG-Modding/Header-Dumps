// BlueprintGeneratedClass Tutorial_Hint_FocusShot.Tutorial_Hint_FocusShot_C
// Size: 0x188 (Inherited: 0x170)
struct UTutorial_Hint_FocusShot_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	float AfterUseDelay; // 0x17c(0x04)
	bool HasUsedFocus; // 0x180(0x01)
	float InitializeTime; // 0x184(0x04)

	void ReceiveOnInitialized();
	void OnItemEquipped_Event(AItem* Item);
	void FullyFocusedEvent_Event();
	void ExecuteUbergraph_Tutorial_Hint_FocusShot(int32_t EntryPoint);
};

