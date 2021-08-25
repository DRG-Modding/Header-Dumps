// WidgetBlueprintGeneratedClass ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_LoadoutIconSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBorder* Border_2; // 0x240(0x08)
	struct UUniformGridPanel* IconGrid; // 0x248(0x08)
	struct UTextBlock* SkinLabel; // 0x250(0x08)
	int32_t Columns; // 0x258(0x04)
	char UnknownData_25C[0x4]; // 0x25c(0x04)
	struct FMulticastInlineDelegate OnIconSelected; // 0x260(0x10)
	struct TArray<struct UTexture2D*> TempIconList; // 0x270(0x10)

	void FillGrid(); // Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.FillGrid
	void SetData(); // Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.SetData
	void OnIconClicked(struct UTexture2D* Texture, int32_t ImageIndex); // Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconClicked
	void ExecuteUbergraph_ITM_LoadoutIconSelector(int32_t EntryPoint); // Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.ExecuteUbergraph_ITM_LoadoutIconSelector
	void OnIconSelected__DelegateSignature(struct UTexture2D* Texture, int32_t ImageIndex); // Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconSelected__DelegateSignature
};

