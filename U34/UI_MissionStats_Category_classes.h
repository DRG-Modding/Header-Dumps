// WidgetBlueprintGeneratedClass UI_MissionStats_Category.UI_MissionStats_Category_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_MissionStats_Category_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* AllText; // 0x238(0x08)
	struct UBorder* Background; // 0x240(0x08)
	struct UImage* Icon; // 0x248(0x08)
	struct UTexture2D* CategoryIcon; // 0x250(0x08)
	bool CategorySelected; // 0x258(0x01)
	bool IsAllCategory; // 0x259(0x01)
	char UnknownData_25A[0x6]; // 0x25a(0x06)
	struct FMulticastInlineDelegate On Clicked; // 0x260(0x10)

	void Click(); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.Click
	bool IsInteractable(); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsInteractable
	void GetCategoryIcon(struct UTexture2D* CategoryIcon); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.GetCategoryIcon
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseButtonUp
	void IsSelected(bool CategorySelected); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsSelected
	void PreConstruct(bool IsDesignTime); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.PreConstruct
	void Set Selected(bool CategorySelected); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Selected
	void Construct(); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.Construct
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseLeave
	void Set Hovered(bool IsHovered); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Hovered
	void ExecuteUbergraph_UI_MissionStats_Category(int32_t EntryPoint); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.ExecuteUbergraph_UI_MissionStats_Category
	void On Clicked__DelegateSignature(struct UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected); // Function UI_MissionStats_Category.UI_MissionStats_Category_C.On Clicked__DelegateSignature
};

