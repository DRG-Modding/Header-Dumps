// WidgetBlueprintGeneratedClass HUD_Milestone_Manager.HUD_Milestone_Manager_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_Milestone_Manager_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UVerticalBox* MilestoneRoot; // 0x238(0x08)

	void PreConstruct(bool IsDesignTime); // Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.PreConstruct
	void OnMilestoneReached(); // Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.OnMilestoneReached
	void ExecuteUbergraph_HUD_Milestone_Manager(int32_t EntryPoint); // Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.ExecuteUbergraph_HUD_Milestone_Manager
};

