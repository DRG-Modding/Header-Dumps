// WidgetBlueprintGeneratedClass Lore_List_Header.Lore_List_Header_C
// Size: 0x240 (Inherited: 0x230)
struct ULore_List_Header_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* TextBlock_Headline; // 0x238(0x08)

	void SetText(FText Headline);
	void ExecuteUbergraph_Lore_List_Header(int32_t EntryPoint);
};

