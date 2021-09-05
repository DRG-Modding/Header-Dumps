// WidgetBlueprintGeneratedClass HUD_ItemWheel.HUD_ItemWheel_C
// Size: 0x2fd (Inherited: 0x288)
struct UHUD_ItemWheel_C : UItemsBar {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	UWidgetAnimation* FadeInOut; // 0x290(0x08)
	UImage* dpad_down; // 0x298(0x08)
	UImage* dpad_left; // 0x2a0(0x08)
	UImage* dpad_right; // 0x2a8(0x08)
	UImage* dpad_up; // 0x2b0(0x08)
	UWidgetSwitcher* ImageSwitcher; // 0x2b8(0x08)
	UOverlay* ItemHolder0; // 0x2c0(0x08)
	UOverlay* ItemHolder1; // 0x2c8(0x08)
	UOverlay* ItemHolder2; // 0x2d0(0x08)
	UOverlay* ItemHolder3; // 0x2d8(0x08)
	UOverlay* SupplyItemHolder; // 0x2e0(0x08)
	TArray<UOverlay*> ItemHolders; // 0x2e8(0x10)
	float VisibleDuration; // 0x2f8(0x04)
	bool WidgetVisible; // 0x2fc(0x01)

	void SwapUpperItems(UWidget* Unselected, UWidget* Selected);
	void OnItemAdded(UItemsBarIcon* ItemIcon);
	void PreConstruct(bool IsDesignTime);
	void OnItemEquipped(UItemsBarIcon* ItemIcon);
	void AddIcon(UItemsBarIcon* Icon, int32_t Index);
	void OnClear();
	void Construct();
	void OnInputSourceChanged(enum class EFSDInputSource InputSource);
	void Show();
	void OnItemClicked();
	void OnSupplyItemAdded(UItemsBarIcon* ItemIcon);
	void OnSupplyItemUnequipped(UItemsBarIcon* ItemIcon);
	void OnSupplyItemEquipped(UItemsBarIcon* ItemIcon);
	void OnFadeInOutFinished();
	void OnFadeInOutStarted();
	void ExecuteUbergraph_HUD_ItemWheel(int32_t EntryPoint);
};

