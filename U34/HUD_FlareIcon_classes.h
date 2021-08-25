// WidgetBlueprintGeneratedClass HUD_FlareIcon.HUD_FlareIcon_C
// Size: 0x278 (Inherited: 0x250)
struct UHUD_FlareIcon_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Ping; // 0x258(0x08)
	struct UProgressBar* FlareProduction; // 0x260(0x08)
	struct UInventoryComponent* Inventory; // 0x268(0x08)
	int32_t Index; // 0x270(0x04)
	float LastProgress; // 0x274(0x04)

	void SetProgress(float Percent); // Function HUD_FlareIcon.HUD_FlareIcon_C.SetProgress
	void Init(int32_t Index, struct UInventoryComponent* Inventory); // Function HUD_FlareIcon.HUD_FlareIcon_C.Init
	void OnFlareCountChanged(int32_t CurrentCount, struct UInventoryComponent* Inventory); // Function HUD_FlareIcon.HUD_FlareIcon_C.OnFlareCountChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_FlareIcon.HUD_FlareIcon_C.PreConstruct
	void On Flare Production Finished(); // Function HUD_FlareIcon.HUD_FlareIcon_C.On Flare Production Finished
	void ExecuteUbergraph_HUD_FlareIcon(int32_t EntryPoint); // Function HUD_FlareIcon.HUD_FlareIcon_C.ExecuteUbergraph_HUD_FlareIcon
};

