// WidgetBlueprintGeneratedClass UI_Perks_Item.UI_Perks_Item_C
// Size: 0x2ac (Inherited: 0x230)
struct UUI_Perks_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Ping; // 0x238(0x08)
	UButton* ClickButton; // 0x240(0x08)
	UBorder* SelectionBorder; // 0x248(0x08)
	UUI_PerkBackground_C* UI_PerkBackground; // 0x250(0x08)
	UUI_PerkIcon_C* UI_PerkIcon; // 0x258(0x08)
	UPerkAsset* PerkAsset; // 0x260(0x08)
	int32_t Tier; // 0x268(0x04)
	FMulticastInlineDelegate OnHoverEnter; // 0x270(0x10)
	FMulticastInlineDelegate OnHoverLeave; // 0x280(0x10)
	FMulticastInlineDelegate OnClick; // 0x290(0x10)
	enum class EPerkTierState PreviewState; // 0x2a0(0x01)
	bool PreviewHovered; // 0x2a1(0x01)
	bool PreviewSelected; // 0x2a2(0x01)
	bool ItemHovered; // 0x2a3(0x01)
	bool ItemSelected; // 0x2a4(0x01)
	bool ItemHighlighted; // 0x2a5(0x01)
	bool PreviewHighlighted; // 0x2a6(0x01)
	int32_t Size; // 0x2a8(0x04)

	void SetIconSize(int32_t InSize);
	void Set Selected(bool InSelected);
	void ShowAs(UPerkAsset* InPerkAsset, int32_t InRank, enum class EPerkTierState InState, bool InHovered, bool InPerkHighlighted, bool InSelected);
	UWidget* CreateToolTipWidget();
	void GetPerkAsset(UPerkAsset* PerkAsset, enum class EPerkTierState State, int32_t Tier);
	void Refresh();
	void OnPerkClaimed(UPerkAsset* Perk, int32_t ClaimedTier);
	void Set Hovered(bool Hovered);
	void Construct();
	void OnPerkHighlighted_Event(UPerkAsset* Perk, bool IsHighlighted);
	void PreConstruct(bool IsDesignTime);
	void OnPerkPointsChanged(int32_t PerkPoints, int32_t Change);
	void OnPingFinished();
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Perks_Item(int32_t EntryPoint);
	void OnClick__DelegateSignature(UUI_Perks_Item_C* Widget);
	void OnHoverLeave__DelegateSignature(UUI_Perks_Item_C* Widget);
	void OnHoverEnter__DelegateSignature(UUI_Perks_Item_C* Widget);
};

