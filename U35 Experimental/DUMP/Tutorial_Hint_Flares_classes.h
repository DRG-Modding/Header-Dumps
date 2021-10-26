// BlueprintGeneratedClass Tutorial_Hint_Flares.Tutorial_Hint_Flares_C
// Size: 0x180 (Inherited: 0x170)
struct UTutorial_Hint_Flares_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	float AfterUseDelay; // 0x17c(0x04)

	void OnFlareThrown();
	void ReceiveOnHidden();
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Flares(int32_t EntryPoint);
};

