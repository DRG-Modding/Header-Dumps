// WidgetBlueprintGeneratedClass LoreScreen_Master.LoreScreen_Master_C
// Size: 0x2c8 (Inherited: 0x2a8)
struct ULoreScreen_Master_C : ULoreScreenMasterWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	UWidgetAnimation* OutandIntro; // 0x2b0(0x08)
	UWidgetAnimation* Intro; // 0x2b8(0x08)
	UMinersManual* MinersManual; // 0x2c0(0x08)

	void OnShown();
	void RefreshContent();
	void PlayIntroAnim();
	void ExecuteUbergraph_LoreScreen_Master(int32_t EntryPoint);
};

