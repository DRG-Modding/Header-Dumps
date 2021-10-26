// BlueprintGeneratedClass Tutorial_Hint_Refinery_BoscoBuilding.Tutorial_Hint_Refinery_BoscoBuilding_C
// Size: 0x184 (Inherited: 0x170)
struct UTutorial_Hint_Refinery_BoscoBuilding_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	UObjective* Target Objective; // 0x178(0x08)
	int32_t NumPipeSegmentsBeforeShowingHint; // 0x180(0x04)

	void ReceiveOnInitialized();
	void OnBoscoChanged(ABosco* Bosco);
	void PipelineSegmentPlaced(APipelineSegment* InSegment);
	void ExecuteUbergraph_Tutorial_Hint_Refinery_BoscoBuilding(int32_t EntryPoint);
};

