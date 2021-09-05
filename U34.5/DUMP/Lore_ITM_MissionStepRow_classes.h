// WidgetBlueprintGeneratedClass Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C
// Size: 0x288 (Inherited: 0x230)
struct ULore_ITM_MissionStepRow_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Arrow_2; // 0x238(0x08)
	UImage* Arrow_3; // 0x240(0x08)
	ULore_ITM_MissionStep_C* Lore_ITM_MissionStep1; // 0x248(0x08)
	ULore_ITM_MissionStep_C* Lore_ITM_MissionStep2; // 0x250(0x08)
	ULore_ITM_MissionStep_C* Lore_ITM_MissionStep3; // 0x258(0x08)
	int32_t CurrIdx; // 0x260(0x04)
	FMulticastInlineDelegate OnStepHovered; // 0x268(0x10)
	FMulticastInlineDelegate OnStepUnhovered; // 0x278(0x10)

	void AddStep(FMissionStepDescription step, int32_t StepNumber, int32_t StepsInRow, ULore_ITM_MissionStep_C* StepWidget);
	void ClearRow();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Lore_ITM_MissionStepRow(int32_t EntryPoint);
	void OnStepUnhovered__DelegateSignature();
	void OnStepHovered__DelegateSignature(FMissionStepDescription step);
};

