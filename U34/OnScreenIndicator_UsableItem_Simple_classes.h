// WidgetBlueprintGeneratedClass OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C
// Size: 0x268 (Inherited: 0x230)
struct UOnScreenIndicator_UsableItem_Simple_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_HUD_BracketWindowSmall_C* BasicWindow_BracketSmall; // 0x238(0x08)
	struct UUI_AdvancedLabel_C* KeyLabel; // 0x240(0x08)
	struct UProgressBar* ProgressBar_2; // 0x248(0x08)
	struct APlayerCharacter* Character; // 0x250(0x08)
	struct AItem* Item; // 0x258(0x08)
	struct UUsableAggregator* Aggregator; // 0x260(0x08)

	void Construct(); // Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick
	void OnItemEquipped(struct AItem* Item); // Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped
	void OnVisibilityChanged(bool IsVisible); // Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnVisibilityChanged
	void PreConstruct(bool IsDesignTime); // Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct
	void ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple(int32_t EntryPoint); // Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple
};

