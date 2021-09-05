// WidgetBlueprintGeneratedClass HUD_Flares.HUD_Flares_C
// Size: 0x2d5 (Inherited: 0x250)
struct UHUD_Flares_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UHorizontalBox* FlareBox; // 0x258(0x08)
	UUI_AdvancedLabel_C* InputLabel; // 0x260(0x08)
	TArray<UHUD_FlareIcon_C*> Icons; // 0x268(0x10)
	TSet<FName> Reasons; // 0x278(0x50)
	bool LaserpointerPressed; // 0x2c8(0x01)
	int32_t NextIndex; // 0x2cc(0x04)
	float Progress; // 0x2d0(0x04)
	bool RechargingFirst; // 0x2d4(0x01)

	void SetFlareProduction(int32_t InNextIndex, float InProgress);
	void CreateIcons(int32_t IconCount);
	void OnItemsLoaded();
	void OnFlareProduction(int32_t NextIndex, float Progress);
	void Setup Dynamic HUD();
	void OnFlareCountChanged(int32_t CurrentCount, UInventoryComponent* Inventory);
	void Construct();
	void UpdateVisibility();
	void OnLaserPointerPressed();
	void OnLaserPointerReleased_Event();
	void PreConstruct(bool IsDesignTime);
	void OnMaxFlareCountChanged_Event(int32_t CurrentCount, UInventoryComponent* Inventory);
	void ExecuteUbergraph_HUD_Flares(int32_t EntryPoint);
};

