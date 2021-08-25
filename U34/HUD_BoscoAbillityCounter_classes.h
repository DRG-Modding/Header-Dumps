// WidgetBlueprintGeneratedClass HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C
// Size: 0x271 (Inherited: 0x250)
struct UHUD_BoscoAbillityCounter_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHorizontalBox* FlareBox; // 0x258(0x08)
	struct TArray<struct UHUD_BoscoAbillityIcon_C*> Icons; // 0x260(0x10)
	bool Loaded; // 0x270(0x01)

	void CreateIcons(int32_t IconCount); // Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons
	void PreConstruct(bool IsDesignTime); // Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct
	void Construct(); // Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct
	void OnItemsLoaded(); // Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded
	void OnAbillityChargeProgress(float aProgress, int32_t aNextIndex); // Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress
	void OnBoscoChanged(struct ABosco* Bosco); // Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged
	void ExecuteUbergraph_HUD_BoscoAbillityCounter(int32_t EntryPoint); // Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter
};

