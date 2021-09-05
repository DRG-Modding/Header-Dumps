// WidgetBlueprintGeneratedClass UI_Perks_View.UI_Perks_View_C
// Size: 0x299 (Inherited: 0x230)
struct UUI_Perks_View_C : UUI_KPI_Tab_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimLoadoutHint; // 0x238(0x08)
	UBorder* Border_4; // 0x240(0x08)
	UBorder* Border_5; // 0x248(0x08)
	UBasic_ButtonScalable2_C* ButtonOkHint; // 0x250(0x08)
	UBackgroundBlur* HintBlur; // 0x258(0x08)
	UBorder* PerksBorder; // 0x260(0x08)
	UHorizontalBox* TierBox; // 0x268(0x08)
	UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints; // 0x270(0x08)
	UUI_Perks_Buy_C* UI_Perks_Buy; // 0x278(0x08)
	UUI_Perks_Item_C* SelectedPerk; // 0x280(0x08)
	TArray<UPerkAsset*> AllPerks; // 0x288(0x10)
	bool FirstPerkPurchase; // 0x298(0x01)

	void HandleMouseEvent(FPointerEvent InMouseEvent, bool InUp, bool OutHandled);
	void HandleKeyEvent(FKeyEvent InKeyEvent, bool InUp, bool OutHandled);
	void SelectPerkWidget(UUI_Perks_Item_C* PerkWidget);
	void PreConstruct(bool IsDesignTime);
	void OnPerkClicked_Event(UUI_Perks_Item_C* PerkWidget);
	void BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature();
	void BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void Toggle Loadout Hint(bool Visible);
	void Construct();
	void OnFocusLost(FFocusEvent InFocusEvent);
	void ExecuteUbergraph_UI_Perks_View(int32_t EntryPoint);
};

