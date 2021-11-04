// WidgetBlueprintGeneratedClass HUD_Grenades.HUD_Grenades_C
// Size: 0x282 (Inherited: 0x250)
struct UHUD_Grenades_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UTextBlock* DATA_GrenadeCount; // 0x258(0x08)
	UHUD_GrenadeIcon_C* HUD_GrenadeIcon; // 0x260(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x268(0x08)
	UInventoryComponent* Inventory; // 0x270(0x08)
	AThrownGrenadeItem* GrenadeItem; // 0x278(0x08)
	bool LaserpointerPressed; // 0x280(0x01)
	bool ItemEquipped; // 0x281(0x01)

	void PreConstruct(bool IsDesignTime);
	void OnGrenadeCountChanged(int32_t CurrentCount);
	void Construct();
	void Setup Dynamic HUD();
	void OnItemEquipped_Event(AItem* Item);
	void OnItemUnequipped_Event(AItem* Item);
	void Update Visibility();
	void OnLaserPointerPressed();
	void OnLaserPointerReleased();
	void ExecuteUbergraph_HUD_Grenades(int32_t EntryPoint);
};

