// WidgetBlueprintGeneratedClass _MENU_Crafting._MENU_Crafting_C
// Size: 0x2e0 (Inherited: 0x270)
struct U_MENU_Crafting_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_ScrollBarBox_C* BasicScrollBarBox; // 0x278(0x08)
	struct UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_C_1; // 0x280(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x288(0x08)
	struct UITM_Wardrobe_ClassSelector_C* ClassSelector; // 0x290(0x08)
	struct UTextBlock* DATA_CategoryName; // 0x298(0x08)
	struct UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x2a0(0x08)
	struct UITM_ItemCategories_C* ITM_ItemCategories; // 0x2a8(0x08)
	struct UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x2b0(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2b8(0x08)
	struct UVerticalBox* ScrollHolder; // 0x2c0(0x08)
	enum class EVanitySlot CurrentSlot; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	struct UBTN_ItemCategory_C* ActiveButton; // 0x2d0(0x08)
	struct UPlayerCharacterID* Character; // 0x2d8(0x08)

	void SetPreviewItem(struct TScriptInterface<None> Item, bool Show); // Function _MENU_Crafting._MENU_Crafting_C.SetPreviewItem
	void GetNextAvailableRank(struct TArray<struct UVanityItem*> In Vanity Items, int32_t VisibleRank); // Function _MENU_Crafting._MENU_Crafting_C.GetNextAvailableRank
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _MENU_Crafting._MENU_Crafting_C.OnKeyUp
	void PrevGroup(); // Function _MENU_Crafting._MENU_Crafting_C.PrevGroup
	void NextGroup(); // Function _MENU_Crafting._MENU_Crafting_C.NextGroup
	void ClearItems(); // Function _MENU_Crafting._MENU_Crafting_C.ClearItems
	void ShowItems(enum class EVanitySlot Slot); // Function _MENU_Crafting._MENU_Crafting_C.ShowItems
	void Construct(); // Function _MENU_Crafting._MENU_Crafting_C.Construct
	void OnChanged(struct APlayerCharacter* CharacterClass, int32_t Level, float Progress); // Function _MENU_Crafting._MENU_Crafting_C.OnChanged
	void PreviewItem(struct TScriptInterface<None> Item); // Function _MENU_Crafting._MENU_Crafting_C.PreviewItem
	void HidePreview(struct TScriptInterface<None> Target); // Function _MENU_Crafting._MENU_Crafting_C.HidePreview
	void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(struct APlayerCharacter* Character); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
	void OnShown(); // Function _MENU_Crafting._MENU_Crafting_C.OnShown
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature
	void Update(); // Function _MENU_Crafting._MENU_Crafting_C.Update
	void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature
	void OnClosed(); // Function _MENU_Crafting._MENU_Crafting_C.OnClosed
	void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature(); // Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
	void ExecuteUbergraph__MENU_Crafting(int32_t EntryPoint); // Function _MENU_Crafting._MENU_Crafting_C.ExecuteUbergraph__MENU_Crafting
};

