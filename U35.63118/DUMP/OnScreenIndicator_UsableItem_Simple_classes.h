// WidgetBlueprintGeneratedClass OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C
// Size: 0x268 (Inherited: 0x230)
struct UOnScreenIndicator_UsableItem_Simple_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_HUD_BracketWindowSmall_C* BasicWindow_BracketSmall; // 0x238(0x08)
	UUI_AdvancedLabel_C* KeyLabel; // 0x240(0x08)
	UProgressBar* ProgressBar_2; // 0x248(0x08)
	APlayerCharacter* Character; // 0x250(0x08)
	AItem* Item; // 0x258(0x08)
	UUsableAggregator* Aggregator; // 0x260(0x08)

	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnItemEquipped(AItem* Item);
	void OnVisibilityChanged(bool IsVisible);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple(int32_t EntryPoint);
};

