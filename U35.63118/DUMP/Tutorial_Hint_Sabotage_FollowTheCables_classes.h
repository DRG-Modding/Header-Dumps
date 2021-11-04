// BlueprintGeneratedClass Tutorial_Hint_Sabotage_FollowTheCables.Tutorial_Hint_Sabotage_FollowTheCables_C
// Size: 0x185 (Inherited: 0x170)
struct UTutorial_Hint_Sabotage_FollowTheCables_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	UObjective* Target Objective; // 0x178(0x08)
	float DelayAfterFacilityWasSeenBeforeShowingHint; // 0x180(0x04)
	bool FoundPowerstation; // 0x184(0x01)

	void ReceiveOnInitialized();
	void FacilityWasFound();
	void ExecuteUbergraph_Tutorial_Hint_Sabotage_FollowTheCables(int32_t EntryPoint);
};

