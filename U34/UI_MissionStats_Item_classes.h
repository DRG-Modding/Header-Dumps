// WidgetBlueprintGeneratedClass UI_MissionStats_Item.UI_MissionStats_Item_C
// Size: 0x290 (Inherited: 0x230)
struct UUI_MissionStats_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Icon; // 0x238(0x08)
	struct UBorder* LineBorder; // 0x240(0x08)
	struct UTextBlock* TitleText; // 0x248(0x08)
	struct UTextBlock* TotalText; // 0x250(0x08)
	struct UMissionStat* Mission Stat; // 0x258(0x08)
	bool IsSelected; // 0x260(0x01)
	char UnknownData_261[0x7]; // 0x261(0x07)
	struct FMulticastInlineDelegate OnHoverBegin; // 0x268(0x10)
	struct FMulticastInlineDelegate OnHoverEnd; // 0x278(0x10)
	struct UTexture2D* CategoryIcon; // 0x288(0x08)

	bool IsInteractable(); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.IsInteractable
	void SetCategoryFilter(struct TArray<struct UTexture2D*> Filter); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.SetCategoryFilter
	void GetMissionStat(struct UMissionStat* Mission Stat); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.GetMissionStat
	void PreConstruct(bool IsDesignTime); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.PreConstruct
	void Construct(); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.Construct
	void OnCountChanged_Event(struct UMissionStat* MissionStat, float Value); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnCountChanged_Event
	void Set Selected(bool Selected); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.Set Selected
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseLeave
	void ExecuteUbergraph_UI_MissionStats_Item(int32_t EntryPoint); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.ExecuteUbergraph_UI_MissionStats_Item
	void OnHoverEnd__DelegateSignature(struct UUI_MissionStats_Item_C* Sender); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverEnd__DelegateSignature
	void OnHoverBegin__DelegateSignature(struct UUI_MissionStats_Item_C* Sender); // Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverBegin__DelegateSignature
};

