// WidgetBlueprintGeneratedClass HUD_Milestone_Manager.HUD_Milestone_Manager_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_Milestone_Manager_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* MilestoneRoot; // 0x238(0x08)

	void PreConstruct(bool IsDesignTime);
	void OnMilestoneReached();
	void ExecuteUbergraph_HUD_Milestone_Manager(int32_t EntryPoint);
};

