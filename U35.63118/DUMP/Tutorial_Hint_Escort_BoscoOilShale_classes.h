// BlueprintGeneratedClass Tutorial_Hint_Escort_BoscoOilShale.Tutorial_Hint_Escort_BoscoOilShale_C
// Size: 0x178 (Inherited: 0x170)
struct UTutorial_Hint_Escort_BoscoOilShale_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)

	void ReceiveOnInitialized();
	void OnBoscoChanged(ABosco* Bosco);
	void OnObjectiveUpdated(UObjective* Objective);
	void ExecuteUbergraph_Tutorial_Hint_Escort_BoscoOilShale(int32_t EntryPoint);
};

