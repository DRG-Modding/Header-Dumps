// WidgetBlueprintGeneratedClass MENU_UpgradeScreen.MENU_UpgradeScreen_C
// Size: 0x3aa (Inherited: 0x270)
struct UMENU_UpgradeScreen_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* ItemDesc_Hover; // 0x278(0x08)
	struct UWidgetAnimation* ItemDesc_Click; // 0x280(0x08)
	struct UBasic_Popup_YesNoPrompt_C* Basic_Popup_YesNoPrompt; // 0x288(0x08)
	struct UButton* BTN_Info; // 0x290(0x08)
	struct UTextBlock* DATA_GearDesc; // 0x298(0x08)
	struct UTextBlock* DATA_ItemCategory; // 0x2a0(0x08)
	struct UBorder* Description_BG; // 0x2a8(0x08)
	struct UHorizontalBox* GearTabsHolder; // 0x2b0(0x08)
	struct UImage* Icon_Info_Base; // 0x2b8(0x08)
	struct UImage* Icon_Info_Brackets; // 0x2c0(0x08)
	struct UOverlay* InfoOverlay; // 0x2c8(0x08)
	struct UVerticalBox* ItemDescHolder; // 0x2d0(0x08)
	struct UTextBlock* ItemName; // 0x2d8(0x08)
	struct UWidgetSwitcher* ItemTypeSwitcher; // 0x2e0(0x08)
	struct UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x2e8(0x08)
	struct UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x2f0(0x08)
	struct UWND_Skins_C* ITM_Skins_Color; // 0x2f8(0x08)
	struct UWND_Skins_C* ITM_Skins_Mesh; // 0x300(0x08)
	struct UITM_UnlockedCelebration_C* ITM_UnlockedCelebration; // 0x308(0x08)
	struct UITM_UpgGear_SideBar_GrenadeSelect_C* ITM_UpgGear_GrenadeSelect; // 0x310(0x08)
	struct UITM_UpgGear_SideBar_C* ITM_UpgGear_Upgrades; // 0x318(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x320(0x08)
	struct UNamedSlot* PutStuffHere; // 0x328(0x08)
	struct UBorder* StatBox_BG; // 0x330(0x08)
	struct UVerticalBox* StatBox_Holder; // 0x338(0x08)
	struct UBasic_Menu_ColorBar_C* StatsColorBar; // 0x340(0x08)
	struct FMulticastInlineDelegate OnCloseClicked; // 0x348(0x10)
	struct APlayerCharacter* CharacterClass; // 0x358(0x08)
	struct AActor* itemClass; // 0x360(0x08)
	struct UUpgradableGearComponent* Upgradable; // 0x368(0x08)
	enum class EItemCategory ItemCategory; // 0x370(0x01)
	char UnknownData_371[0x7]; // 0x371(0x07)
	struct FMulticastInlineDelegate OnItemChanged; // 0x378(0x10)
	bool ItemDescClicked; // 0x388(0x01)
	bool ShowTabsBar; // 0x389(0x01)
	char UnknownData_38A[0x6]; // 0x38a(0x06)
	struct FMulticastInlineDelegate OnItemPurchased; // 0x390(0x10)
	struct UDialogDataAsset* ShoutUpgradePurchased; // 0x3a0(0x08)
	bool LoadoutSwitched; // 0x3a8(0x01)
	bool IsBoscoUpgScreen; // 0x3a9(0x01)

	void Toggle Auto GearStats Preview(bool IsOn); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Toggle Auto GearStats Preview
	void ChangeItemCustom(struct AActor* InItemClass, bool EquipItem, bool IsUnlocked); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItemCustom
	void GetItemTabIndex(struct AActor* InItemClass, int32_t OutIndex); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex
	void SelectNextTab(int32_t Direction); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab
	void GetYesNoPrompt(struct UBasic_Popup_YesNoPrompt_C* YesNoPrompt); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt
	void RefreshGearStats(struct FString entry); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats
	void GetTabItems(struct APlayerCharacter* InCharacterClass, enum class EItemCategory InCategory, struct TArray<struct AActor*> Tab Items); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems
	void BuildGearTabs(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs
	void ChangeItem(struct AActor* InItemClass); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem
	void RefreshItemDetails(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails
	void Show(struct APlayerCharacter* InCharacterClass, struct AActor* InItemClass, enum class EItemCategory InItemCategory); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show
	void PreConstruct(bool IsDesignTime); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct
	void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature
	void ReceiveSelectNextCommand(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand
	void ReceiveSelectPreviousCommand(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand
	void Construct(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct
	void OnClosed(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed
	void OnShown(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown
	void BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void ReceiveCloseCommand(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand
	void ReceiveOkCommand(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand
	void OnGrenadeSelected(struct AActor* itemClass, bool Equip, bool IsUnlocked); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnGrenadeSelected
	void OnPreviewUpgradeChangedEvent(struct UItemUpgrade* PreviewUpgrade); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnPreviewUpgradeChangedEvent
	void OnItemRewarded(struct FMasteryItem Reward); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemRewarded
	void OnFinished(struct TArray<struct UUnlockReward*> Rewards); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnFinished
	void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature
	void BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature
	void BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature
	void ExecuteUbergraph_MENU_UpgradeScreen(int32_t EntryPoint); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen
	void OnItemPurchased__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemPurchased__DelegateSignature
	void OnItemChanged__DelegateSignature(struct AActor* NewItemClass); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature
	void OnCloseClicked__DelegateSignature(); // Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature
};

