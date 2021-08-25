// BlueprintGeneratedClass Tutorial_Hint_Refinery_BoscoBuilding.Tutorial_Hint_Refinery_BoscoBuilding_C
// Size: 0x184 (Inherited: 0x170)
struct UTutorial_Hint_Refinery_BoscoBuilding_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct UObjective* Target Objective; // 0x178(0x08)
	int32_t NumPipeSegmentsBeforeShowingHint; // 0x180(0x04)

	void ReceiveOnInitialized(); // Function Tutorial_Hint_Refinery_BoscoBuilding.Tutorial_Hint_Refinery_BoscoBuilding_C.ReceiveOnInitialized
	void OnBoscoChanged(struct ABosco* Bosco); // Function Tutorial_Hint_Refinery_BoscoBuilding.Tutorial_Hint_Refinery_BoscoBuilding_C.OnBoscoChanged
	void PipelineSegmentPlaced(struct APipelineSegment* InSegment); // Function Tutorial_Hint_Refinery_BoscoBuilding.Tutorial_Hint_Refinery_BoscoBuilding_C.PipelineSegmentPlaced
	void ExecuteUbergraph_Tutorial_Hint_Refinery_BoscoBuilding(int32_t EntryPoint); // Function Tutorial_Hint_Refinery_BoscoBuilding.Tutorial_Hint_Refinery_BoscoBuilding_C.ExecuteUbergraph_Tutorial_Hint_Refinery_BoscoBuilding
};

