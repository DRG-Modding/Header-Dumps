// WidgetBlueprintGeneratedClass HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C
// Size: 0x271 (Inherited: 0x250)
struct UHUD_BoscoAbillityCounter_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UHorizontalBox* FlareBox; // 0x258(0x08)
	TArray<UHUD_BoscoAbillityIcon_C*> Icons; // 0x260(0x10)
	bool Loaded; // 0x270(0x01)

	void CreateIcons(int32_t IconCount);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnItemsLoaded();
	void OnAbillityChargeProgress(float aProgress, int32_t aNextIndex);
	void OnBoscoChanged(ABosco* Bosco);
	void ExecuteUbergraph_HUD_BoscoAbillityCounter(int32_t EntryPoint);
};

