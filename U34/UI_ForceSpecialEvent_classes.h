// WidgetBlueprintGeneratedClass UI_ForceSpecialEvent.UI_ForceSpecialEvent_C
// Size: 0x260 (Inherited: 0x230)
struct UUI_ForceSpecialEvent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UComboBoxString* ComboBoxString_46; // 0x238(0x08)
	struct FString NewVar_1; // 0x240(0x10)
	struct TArray<struct TSoftObjectPtr<struct USpecialEvent>> Events; // 0x250(0x10)

	void PreConstruct(bool IsDesignTime); // Function UI_ForceSpecialEvent.UI_ForceSpecialEvent_C.PreConstruct
	void BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function UI_ForceSpecialEvent.UI_ForceSpecialEvent_C.BndEvt__ComboBoxString_45_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	void ExecuteUbergraph_UI_ForceSpecialEvent(int32_t EntryPoint); // Function UI_ForceSpecialEvent.UI_ForceSpecialEvent_C.ExecuteUbergraph_UI_ForceSpecialEvent
};

