// WidgetBlueprintGeneratedClass HUD_FlareIcon.HUD_FlareIcon_C
// Size: 0x278 (Inherited: 0x250)
struct UHUD_FlareIcon_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Ping; // 0x258(0x08)
	UProgressBar* FlareProduction; // 0x260(0x08)
	UInventoryComponent* Inventory; // 0x268(0x08)
	int32_t Index; // 0x270(0x04)
	float LastProgress; // 0x274(0x04)

	void SetProgress(float Percent);
	void Init(int32_t Index, UInventoryComponent* Inventory);
	void OnFlareCountChanged(int32_t CurrentCount, UInventoryComponent* Inventory);
	void PreConstruct(bool IsDesignTime);
	void On Flare Production Finished();
	void ExecuteUbergraph_HUD_FlareIcon(int32_t EntryPoint);
};

