// WidgetBlueprintGeneratedClass ITM_Craft_ItemBox.ITM_Craft_ItemBox_C
// Size: 0x2c9 (Inherited: 0x230)
struct UITM_Craft_ItemBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Click; // 0x238(0x08)
	UWidgetAnimation* Hover; // 0x240(0x08)
	UImage* Arrow; // 0x248(0x08)
	UBorder* BG; // 0x250(0x08)
	UBorder* Border_1; // 0x258(0x08)
	UBorder* Border_124; // 0x260(0x08)
	UBorder* Brackets; // 0x268(0x08)
	UBTN_UnlockItem_C* BTN_UnlockItem; // 0x270(0x08)
	UButton* Button_2; // 0x278(0x08)
	UTextBlock* DATA_ItemDescription; // 0x280(0x08)
	UTextBlock* DATA_ItemName; // 0x288(0x08)
	UITM_Craft_ItemIcon_C* ITEM_Crafting_ItemIcon; // 0x290(0x08)
	UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x298(0x08)
	UHorizontalBox* ResourceHolder; // 0x2a0(0x08)
	UTextBlock* Text_UsesEquippedPaintjob; // 0x2a8(0x08)
	TScriptInterface<ICraftable> Item; // 0x2b0(0x10)
	APlayerCharacter* Character; // 0x2c0(0x08)
	bool IsHovering; // 0x2c8(0x01)

	void FreeRenderTarget();
	void CreateResources(TScriptInterface<ICraftable> Item);
	void SetCostColor();
	void SetRankRequirements();
	void SetTextAndIcon();
	void SetCanUnlock();
	void SetData(TScriptInterface<ICraftable> Item, APlayerCharacter* Character);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Update();
	void ExecuteUbergraph_ITM_Craft_ItemBox(int32_t EntryPoint);
};

