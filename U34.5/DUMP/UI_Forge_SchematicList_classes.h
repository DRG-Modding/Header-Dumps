// WidgetBlueprintGeneratedClass UI_Forge_SchematicList.UI_Forge_SchematicList_C
// Size: 0x2c9 (Inherited: 0x230)
struct UUI_Forge_SchematicList_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetSwitcher* ContentSwitcher; // 0x238(0x08)
	UOverlay* EmptyOverlay; // 0x240(0x08)
	UOverlay* FullOverlay; // 0x248(0x08)
	UImage* Image_160; // 0x250(0x08)
	UImage* Image_162; // 0x258(0x08)
	UImage* Image_163; // 0x260(0x08)
	URichTextBlock* RichTextBlock_252; // 0x268(0x08)
	UVerticalBox* SchematicsBox; // 0x270(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x278(0x08)
	FMulticastInlineDelegate OnItemClicked; // 0x280(0x10)
	TArray<USchematic*> Schematics; // 0x290(0x10)
	int32_t Index; // 0x2a0(0x04)
	FTimerHandle NextTimer; // 0x2a8(0x08)
	FText CurrentCategory; // 0x2b0(0x18)
	bool ShowHistory; // 0x2c8(0x01)

	void AddSeparator(FText Text);
	void PopulateList();
	void TryAddSeparator(USchematic* InNextSchematic);
	void GetCategoryOrder(USchematic* Schematic, int32_t OutOrder, FText OutName);
	void AddNext();
	void Refresh();
	void SortMethod(USchematic* Schematic1, USchematic* Schematic2, bool FirstIsLarger);
	void ItemClicked(UUI_Forge_Schematic_C* Item);
	void AddSchematic(USchematic* InSchematic);
	void Clear();
	void Construct();
	void ExecuteUbergraph_UI_Forge_SchematicList(int32_t EntryPoint);
	void OnItemClicked__DelegateSignature(UUI_Forge_Schematic_C* Item);
};

