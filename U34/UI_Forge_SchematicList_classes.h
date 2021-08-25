// WidgetBlueprintGeneratedClass UI_Forge_SchematicList.UI_Forge_SchematicList_C
// Size: 0x2c9 (Inherited: 0x230)
struct UUI_Forge_SchematicList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x238(0x08)
	struct UOverlay* EmptyOverlay; // 0x240(0x08)
	struct UOverlay* FullOverlay; // 0x248(0x08)
	struct UImage* Image_160; // 0x250(0x08)
	struct UImage* Image_162; // 0x258(0x08)
	struct UImage* Image_163; // 0x260(0x08)
	struct URichTextBlock* RichTextBlock_252; // 0x268(0x08)
	struct UVerticalBox* SchematicsBox; // 0x270(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x278(0x08)
	struct FMulticastInlineDelegate OnItemClicked; // 0x280(0x10)
	struct TArray<struct USchematic*> Schematics; // 0x290(0x10)
	int32_t Index; // 0x2a0(0x04)
	char UnknownData_2A4[0x4]; // 0x2a4(0x04)
	struct FTimerHandle NextTimer; // 0x2a8(0x08)
	struct FText CurrentCategory; // 0x2b0(0x18)
	bool ShowHistory; // 0x2c8(0x01)

	void AddSeparator(struct FText Text); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSeparator
	void PopulateList(); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.PopulateList
	void TryAddSeparator(struct USchematic* InNextSchematic); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.TryAddSeparator
	void GetCategoryOrder(struct USchematic* Schematic, int32_t OutOrder, struct FText OutName); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.GetCategoryOrder
	void AddNext(); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddNext
	void Refresh(); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Refresh
	void SortMethod(struct USchematic* Schematic1, struct USchematic* Schematic2, bool FirstIsLarger); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.SortMethod
	void ItemClicked(struct UUI_Forge_Schematic_C* Item); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ItemClicked
	void AddSchematic(struct USchematic* InSchematic); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.AddSchematic
	void Clear(); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Clear
	void Construct(); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.Construct
	void ExecuteUbergraph_UI_Forge_SchematicList(int32_t EntryPoint); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.ExecuteUbergraph_UI_Forge_SchematicList
	void OnItemClicked__DelegateSignature(struct UUI_Forge_Schematic_C* Item); // Function UI_Forge_SchematicList.UI_Forge_SchematicList_C.OnItemClicked__DelegateSignature
};

