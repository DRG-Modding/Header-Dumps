// WidgetBlueprintGeneratedClass UI_ForceSpecialEvent.UI_ForceSpecialEvent_C
// Size: 0x260 (Inherited: 0x230)
struct UUI_ForceSpecialEvent_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UComboBoxString* ComboBoxString_46; // 0x238(0x08)
	FString NewVar_1; // 0x240(0x10)
	TArray<TSoftObjectPtr<USpecialEvent>> Events; // 0x250(0x10)

	void PreConstruct(bool IsDesignTime);
	void BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, enum class ESelectInfo SelectionType);
	void ExecuteUbergraph_UI_ForceSpecialEvent(int32_t EntryPoint);
};

