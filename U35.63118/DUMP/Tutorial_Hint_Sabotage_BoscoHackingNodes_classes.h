// BlueprintGeneratedClass Tutorial_Hint_Sabotage_BoscoHackingNodes.Tutorial_Hint_Sabotage_BoscoHackingNodes_C
// Size: 0x178 (Inherited: 0x170)
struct UTutorial_Hint_Sabotage_BoscoHackingNodes_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)

	void ReceiveOnInitialized();
	void OnBoscoChanged(ABosco* Bosco);
	void OnOverChargerCalled_Event_1(FVector Location, int32_t roomIndex);
	void TetherPickedup(APlayerCharacter* User, enum class EInputKeys Key);
	void ExecuteUbergraph_Tutorial_Hint_Sabotage_BoscoHackingNodes(int32_t EntryPoint);
};

