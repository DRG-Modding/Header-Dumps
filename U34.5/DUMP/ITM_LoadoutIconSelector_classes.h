// WidgetBlueprintGeneratedClass ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_LoadoutIconSelector_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UBorder* Border_2; // 0x240(0x08)
	UUniformGridPanel* IconGrid; // 0x248(0x08)
	UTextBlock* SkinLabel; // 0x250(0x08)
	int32_t Columns; // 0x258(0x04)
	FMulticastInlineDelegate OnIconSelected; // 0x260(0x10)
	TArray<UTexture2D*> TempIconList; // 0x270(0x10)

	void FillGrid();
	void SetData();
	void OnIconClicked(UTexture2D* Texture, int32_t ImageIndex);
	void ExecuteUbergraph_ITM_LoadoutIconSelector(int32_t EntryPoint);
	void OnIconSelected__DelegateSignature(UTexture2D* Texture, int32_t ImageIndex);
};

