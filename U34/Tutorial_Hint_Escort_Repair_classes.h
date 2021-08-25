// BlueprintGeneratedClass Tutorial_Hint_Escort_Repair.Tutorial_Hint_Escort_Repair_C
// Size: 0x190 (Inherited: 0x170)
struct UTutorial_Hint_Escort_Repair_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float AccumilatedDamage; // 0x178(0x04)
	float TotalDamageBeforeShowingHint; // 0x17c(0x04)
	struct AEscortMule* Drilldozer; // 0x180(0x08)
	struct UFriendlyHealthComponent* DrilldozerHealth; // 0x188(0x08)

	void ReceiveOnInitialized(); // Function Tutorial_Hint_Escort_Repair.Tutorial_Hint_Escort_Repair_C.ReceiveOnInitialized
	void OnPermanentDamage(int32_t currSegment, int32_t prevSegment); // Function Tutorial_Hint_Escort_Repair.Tutorial_Hint_Escort_Repair_C.OnPermanentDamage
	void DorettaDamaged(float amount); // Function Tutorial_Hint_Escort_Repair.Tutorial_Hint_Escort_Repair_C.DorettaDamaged
	void ExecuteUbergraph_Tutorial_Hint_Escort_Repair(int32_t EntryPoint); // Function Tutorial_Hint_Escort_Repair.Tutorial_Hint_Escort_Repair_C.ExecuteUbergraph_Tutorial_Hint_Escort_Repair
};

