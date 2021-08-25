// WidgetBlueprintGeneratedClass LoreScreen_Master.LoreScreen_Master_C
// Size: 0x2c8 (Inherited: 0x2a8)
struct ULoreScreen_Master_C : ULoreScreenMasterWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* OutandIntro; // 0x2b0(0x08)
	struct UWidgetAnimation* Intro; // 0x2b8(0x08)
	struct UMinersManual* MinersManual; // 0x2c0(0x08)

	void OnShown(); // Function LoreScreen_Master.LoreScreen_Master_C.OnShown
	void RefreshContent(); // Function LoreScreen_Master.LoreScreen_Master_C.RefreshContent
	void PlayIntroAnim(); // Function LoreScreen_Master.LoreScreen_Master_C.PlayIntroAnim
	void ExecuteUbergraph_LoreScreen_Master(int32_t EntryPoint); // Function LoreScreen_Master.LoreScreen_Master_C.ExecuteUbergraph_LoreScreen_Master
};

