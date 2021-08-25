// WidgetBlueprintGeneratedClass UI_Perks_View.UI_Perks_View_C
// Size: 0x299 (Inherited: 0x230)
struct UUI_Perks_View_C : UUI_KPI_Tab_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimLoadoutHint; // 0x238(0x08)
	struct UBorder* Border_4; // 0x240(0x08)
	struct UBorder* Border_5; // 0x248(0x08)
	struct UBasic_ButtonScalable2_C* ButtonOkHint; // 0x250(0x08)
	struct UBackgroundBlur* HintBlur; // 0x258(0x08)
	struct UBorder* PerksBorder; // 0x260(0x08)
	struct UHorizontalBox* TierBox; // 0x268(0x08)
	struct UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints; // 0x270(0x08)
	struct UUI_Perks_Buy_C* UI_Perks_Buy; // 0x278(0x08)
	struct UUI_Perks_Item_C* SelectedPerk; // 0x280(0x08)
	struct TArray<struct UPerkAsset*> AllPerks; // 0x288(0x10)
	bool FirstPerkPurchase; // 0x298(0x01)

	void HandleMouseEvent(struct FPointerEvent InMouseEvent, bool InUp, bool OutHandled); // Function UI_Perks_View.UI_Perks_View_C.HandleMouseEvent
	void HandleKeyEvent(struct FKeyEvent InKeyEvent, bool InUp, bool OutHandled); // Function UI_Perks_View.UI_Perks_View_C.HandleKeyEvent
	void SelectPerkWidget(struct UUI_Perks_Item_C* PerkWidget); // Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget
	void PreConstruct(bool IsDesignTime); // Function UI_Perks_View.UI_Perks_View_C.PreConstruct
	void OnPerkClicked_Event(struct UUI_Perks_Item_C* PerkWidget); // Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event
	void BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature(); // Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature
	void BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UI_Perks_View.UI_Perks_View_C.BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void Toggle Loadout Hint(bool Visible); // Function UI_Perks_View.UI_Perks_View_C.Toggle Loadout Hint
	void Construct(); // Function UI_Perks_View.UI_Perks_View_C.Construct
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UI_Perks_View.UI_Perks_View_C.OnFocusLost
	void ExecuteUbergraph_UI_Perks_View(int32_t EntryPoint); // Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View
};

