// WidgetBlueprintGeneratedClass ITM_Craft_ItemBox.ITM_Craft_ItemBox_C
// Size: 0x2c9 (Inherited: 0x230)
struct UITM_Craft_ItemBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Click; // 0x238(0x08)
	struct UWidgetAnimation* Hover; // 0x240(0x08)
	struct UImage* Arrow; // 0x248(0x08)
	struct UBorder* BG; // 0x250(0x08)
	struct UBorder* Border_1; // 0x258(0x08)
	struct UBorder* Border_124; // 0x260(0x08)
	struct UBorder* Brackets; // 0x268(0x08)
	struct UBTN_UnlockItem_C* BTN_UnlockItem; // 0x270(0x08)
	struct UButton* Button_2; // 0x278(0x08)
	struct UTextBlock* DATA_ItemDescription; // 0x280(0x08)
	struct UTextBlock* DATA_ItemName; // 0x288(0x08)
	struct UITM_Craft_ItemIcon_C* ITEM_Crafting_ItemIcon; // 0x290(0x08)
	struct UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x298(0x08)
	struct UHorizontalBox* ResourceHolder; // 0x2a0(0x08)
	struct UTextBlock* Text_UsesEquippedPaintjob; // 0x2a8(0x08)
	struct TScriptInterface<None> Item; // 0x2b0(0x10)
	struct APlayerCharacter* Character; // 0x2c0(0x08)
	bool IsHovering; // 0x2c8(0x01)

	void FreeRenderTarget(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.FreeRenderTarget
	void CreateResources(struct TScriptInterface<None> Item); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.CreateResources
	void SetCostColor(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCostColor
	void SetRankRequirements(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetRankRequirements
	void SetTextAndIcon(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetTextAndIcon
	void SetCanUnlock(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetCanUnlock
	void SetData(struct TScriptInterface<None> Item, struct APlayerCharacter* Character); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.PreConstruct
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void Update(); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.Update
	void ExecuteUbergraph_ITM_Craft_ItemBox(int32_t EntryPoint); // Function ITM_Craft_ItemBox.ITM_Craft_ItemBox_C.ExecuteUbergraph_ITM_Craft_ItemBox
};

