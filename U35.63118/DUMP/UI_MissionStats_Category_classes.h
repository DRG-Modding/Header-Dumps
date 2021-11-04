// WidgetBlueprintGeneratedClass UI_MissionStats_Category.UI_MissionStats_Category_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_MissionStats_Category_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* AllText; // 0x238(0x08)
	UBorder* Background; // 0x240(0x08)
	UImage* Icon; // 0x248(0x08)
	UTexture2D* CategoryIcon; // 0x250(0x08)
	bool CategorySelected; // 0x258(0x01)
	bool IsAllCategory; // 0x259(0x01)
	FMulticastInlineDelegate On Clicked; // 0x260(0x10)

	void Click();
	bool IsInteractable();
	void GetCategoryIcon(UTexture2D* CategoryIcon);
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void IsSelected(bool CategorySelected);
	void PreConstruct(bool IsDesignTime);
	void Set Selected(bool CategorySelected);
	void Construct();
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void Set Hovered(bool IsHovered);
	void ExecuteUbergraph_UI_MissionStats_Category(int32_t EntryPoint);
	void On Clicked__DelegateSignature(UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected);
};

