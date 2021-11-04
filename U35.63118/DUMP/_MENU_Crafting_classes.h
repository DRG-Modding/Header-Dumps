// WidgetBlueprintGeneratedClass _MENU_Crafting._MENU_Crafting_C
// Size: 0x2e0 (Inherited: 0x270)
struct U_MENU_Crafting_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_ScrollBarBox_C* BasicScrollBarBox; // 0x278(0x08)
	UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_C_1; // 0x280(0x08)
	UBlurBackground_C* BlurBackground; // 0x288(0x08)
	UITM_Wardrobe_ClassSelector_C* ClassSelector; // 0x290(0x08)
	UTextBlock* DATA_CategoryName; // 0x298(0x08)
	UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x2a0(0x08)
	UITM_ItemCategories_C* ITM_ItemCategories; // 0x2a8(0x08)
	UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x2b0(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2b8(0x08)
	UVerticalBox* ScrollHolder; // 0x2c0(0x08)
	enum class EVanitySlot CurrentSlot; // 0x2c8(0x01)
	UBTN_ItemCategory_C* ActiveButton; // 0x2d0(0x08)
	UPlayerCharacterID* Character; // 0x2d8(0x08)

	void SetPreviewItem(TScriptInterface<ICraftable> Item, bool Show);
	void GetNextAvailableRank(TArray<UVanityItem*> In Vanity Items, int32_t VisibleRank);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void PrevGroup();
	void NextGroup();
	void ClearItems();
	void ShowItems(enum class EVanitySlot Slot);
	void Construct();
	void OnChanged(APlayerCharacter* CharacterClass, int32_t Level, float Progress);
	void PreviewItem(TScriptInterface<ICraftable> Item);
	void HidePreview(TScriptInterface<ICraftable> Target);
	void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(APlayerCharacter* Character);
	void OnShown();
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature();
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature();
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature();
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature();
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature();
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature();
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature();
	void Update();
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature();
	void OnClosed();
	void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
	void ExecuteUbergraph__MENU_Crafting(int32_t EntryPoint);
};

