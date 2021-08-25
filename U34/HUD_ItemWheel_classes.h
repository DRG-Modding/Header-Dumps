// WidgetBlueprintGeneratedClass HUD_ItemWheel.HUD_ItemWheel_C
// Size: 0x2fd (Inherited: 0x288)
struct UHUD_ItemWheel_C : UItemsBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* FadeInOut; // 0x290(0x08)
	struct UImage* dpad_down; // 0x298(0x08)
	struct UImage* dpad_left; // 0x2a0(0x08)
	struct UImage* dpad_right; // 0x2a8(0x08)
	struct UImage* dpad_up; // 0x2b0(0x08)
	struct UWidgetSwitcher* ImageSwitcher; // 0x2b8(0x08)
	struct UOverlay* ItemHolder0; // 0x2c0(0x08)
	struct UOverlay* ItemHolder1; // 0x2c8(0x08)
	struct UOverlay* ItemHolder2; // 0x2d0(0x08)
	struct UOverlay* ItemHolder3; // 0x2d8(0x08)
	struct UOverlay* SupplyItemHolder; // 0x2e0(0x08)
	struct TArray<struct UOverlay*> ItemHolders; // 0x2e8(0x10)
	float VisibleDuration; // 0x2f8(0x04)
	bool WidgetVisible; // 0x2fc(0x01)

	void SwapUpperItems(struct UWidget* Unselected, struct UWidget* Selected); // Function HUD_ItemWheel.HUD_ItemWheel_C.SwapUpperItems
	void OnItemAdded(struct UItemsBarIcon* ItemIcon); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemAdded
	void PreConstruct(bool IsDesignTime); // Function HUD_ItemWheel.HUD_ItemWheel_C.PreConstruct
	void OnItemEquipped(struct UItemsBarIcon* ItemIcon); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemEquipped
	void AddIcon(struct UItemsBarIcon* Icon, int32_t Index); // Function HUD_ItemWheel.HUD_ItemWheel_C.AddIcon
	void OnClear(); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnClear
	void Construct(); // Function HUD_ItemWheel.HUD_ItemWheel_C.Construct
	void OnInputSourceChanged(enum class EFSDInputSource InputSource); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnInputSourceChanged
	void Show(); // Function HUD_ItemWheel.HUD_ItemWheel_C.Show
	void OnItemClicked(); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnItemClicked
	void OnSupplyItemAdded(struct UItemsBarIcon* ItemIcon); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemAdded
	void OnSupplyItemUnequipped(struct UItemsBarIcon* ItemIcon); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemUnequipped
	void OnSupplyItemEquipped(struct UItemsBarIcon* ItemIcon); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnSupplyItemEquipped
	void OnFadeInOutFinished(); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutFinished
	void OnFadeInOutStarted(); // Function HUD_ItemWheel.HUD_ItemWheel_C.OnFadeInOutStarted
	void ExecuteUbergraph_HUD_ItemWheel(int32_t EntryPoint); // Function HUD_ItemWheel.HUD_ItemWheel_C.ExecuteUbergraph_HUD_ItemWheel
};

