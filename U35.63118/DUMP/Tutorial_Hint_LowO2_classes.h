// BlueprintGeneratedClass Tutorial_Hint_LowO2.Tutorial_Hint_LowO2_C
// Size: 0x190 (Inherited: 0x170)
struct UTutorial_Hint_LowO2_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float AccumilatedDamage; // 0x178(0x04)
	float TotalDamageBeforeShowingHint; // 0x17c(0x04)
	AEscortMule* Drilldozer; // 0x180(0x08)
	UFriendlyHealthComponent* DrilldozerHealth; // 0x188(0x08)

	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_LowO2(int32_t EntryPoint);
};

