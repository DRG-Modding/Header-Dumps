// WidgetBlueprintGeneratedClass Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C
// Size: 0x288 (Inherited: 0x230)
struct ULore_ITM_MissionStepRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Arrow_2; // 0x238(0x08)
	struct UImage* Arrow_3; // 0x240(0x08)
	struct ULore_ITM_MissionStep_C* Lore_ITM_MissionStep1; // 0x248(0x08)
	struct ULore_ITM_MissionStep_C* Lore_ITM_MissionStep2; // 0x250(0x08)
	struct ULore_ITM_MissionStep_C* Lore_ITM_MissionStep3; // 0x258(0x08)
	int32_t CurrIdx; // 0x260(0x04)
	char UnknownData_264[0x4]; // 0x264(0x04)
	struct FMulticastInlineDelegate OnStepHovered; // 0x268(0x10)
	struct FMulticastInlineDelegate OnStepUnhovered; // 0x278(0x10)

	void AddStep(struct FMissionStepDescription step, int32_t StepNumber, int32_t StepsInRow, struct ULore_ITM_MissionStep_C* StepWidget); // Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.AddStep
	void ClearRow(); // Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ClearRow
	void PreConstruct(bool IsDesignTime); // Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.PreConstruct
	void ExecuteUbergraph_Lore_ITM_MissionStepRow(int32_t EntryPoint); // Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ExecuteUbergraph_Lore_ITM_MissionStepRow
	void OnStepUnhovered__DelegateSignature(); // Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepUnhovered__DelegateSignature
	void OnStepHovered__DelegateSignature(struct FMissionStepDescription step); // Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepHovered__DelegateSignature
};

