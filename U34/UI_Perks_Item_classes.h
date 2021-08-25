// WidgetBlueprintGeneratedClass UI_Perks_Item.UI_Perks_Item_C
// Size: 0x2ac (Inherited: 0x230)
struct UUI_Perks_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Ping; // 0x238(0x08)
	struct UButton* ClickButton; // 0x240(0x08)
	struct UBorder* SelectionBorder; // 0x248(0x08)
	struct UUI_PerkBackground_C* UI_PerkBackground; // 0x250(0x08)
	struct UUI_PerkIcon_C* UI_PerkIcon; // 0x258(0x08)
	struct UPerkAsset* PerkAsset; // 0x260(0x08)
	int32_t Tier; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct FMulticastInlineDelegate OnHoverEnter; // 0x270(0x10)
	struct FMulticastInlineDelegate OnHoverLeave; // 0x280(0x10)
	struct FMulticastInlineDelegate OnClick; // 0x290(0x10)
	enum class EPerkTierState PreviewState; // 0x2a0(0x01)
	bool PreviewHovered; // 0x2a1(0x01)
	bool PreviewSelected; // 0x2a2(0x01)
	bool ItemHovered; // 0x2a3(0x01)
	bool ItemSelected; // 0x2a4(0x01)
	bool ItemHighlighted; // 0x2a5(0x01)
	bool PreviewHighlighted; // 0x2a6(0x01)
	char UnknownData_2A7[0x1]; // 0x2a7(0x01)
	int32_t Size; // 0x2a8(0x04)

	void SetIconSize(int32_t InSize); // Function UI_Perks_Item.UI_Perks_Item_C.SetIconSize
	void Set Selected(bool inSelected); // Function UI_Perks_Item.UI_Perks_Item_C.Set Selected
	void ShowAs(struct UPerkAsset* InPerkAsset, int32_t InRank, enum class EPerkTierState InState, bool InHovered, bool InPerkHighlighted, bool inSelected); // Function UI_Perks_Item.UI_Perks_Item_C.ShowAs
	struct UWidget* CreateToolTipWidget(); // Function UI_Perks_Item.UI_Perks_Item_C.CreateToolTipWidget
	void GetPerkAsset(struct UPerkAsset* PerkAsset, enum class EPerkTierState State, int32_t Tier); // Function UI_Perks_Item.UI_Perks_Item_C.GetPerkAsset
	void Refresh(); // Function UI_Perks_Item.UI_Perks_Item_C.Refresh
	void OnPerkClaimed(struct UPerkAsset* Perk, int32_t ClaimedTier); // Function UI_Perks_Item.UI_Perks_Item_C.OnPerkClaimed
	void Set Hovered(bool Hovered); // Function UI_Perks_Item.UI_Perks_Item_C.Set Hovered
	void Construct(); // Function UI_Perks_Item.UI_Perks_Item_C.Construct
	void OnPerkHighlighted_Event(struct UPerkAsset* Perk, bool IsHighlighted); // Function UI_Perks_Item.UI_Perks_Item_C.OnPerkHighlighted_Event
	void PreConstruct(bool IsDesignTime); // Function UI_Perks_Item.UI_Perks_Item_C.PreConstruct
	void OnPerkPointsChanged(int32_t PerkPoints, int32_t Change); // Function UI_Perks_Item.UI_Perks_Item_C.OnPerkPointsChanged
	void OnPingFinished(); // Function UI_Perks_Item.UI_Perks_Item_C.OnPingFinished
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_Perks_Item.UI_Perks_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_UI_Perks_Item(int32_t EntryPoint); // Function UI_Perks_Item.UI_Perks_Item_C.ExecuteUbergraph_UI_Perks_Item
	void OnClick__DelegateSignature(struct UUI_Perks_Item_C* Widget); // Function UI_Perks_Item.UI_Perks_Item_C.OnClick__DelegateSignature
	void OnHoverLeave__DelegateSignature(struct UUI_Perks_Item_C* Widget); // Function UI_Perks_Item.UI_Perks_Item_C.OnHoverLeave__DelegateSignature
	void OnHoverEnter__DelegateSignature(struct UUI_Perks_Item_C* Widget); // Function UI_Perks_Item.UI_Perks_Item_C.OnHoverEnter__DelegateSignature
};

