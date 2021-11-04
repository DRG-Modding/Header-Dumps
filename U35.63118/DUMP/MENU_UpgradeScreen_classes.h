// WidgetBlueprintGeneratedClass MENU_UpgradeScreen.MENU_UpgradeScreen_C
// Size: 0x3aa (Inherited: 0x270)
struct UMENU_UpgradeScreen_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* ItemDesc_Hover; // 0x278(0x08)
	UWidgetAnimation* ItemDesc_Click; // 0x280(0x08)
	UBasic_Popup_YesNoPrompt_C* Basic_Popup_YesNoPrompt; // 0x288(0x08)
	UButton* BTN_Info; // 0x290(0x08)
	UTextBlock* DATA_GearDesc; // 0x298(0x08)
	UTextBlock* DATA_ItemCategory; // 0x2a0(0x08)
	UBorder* Description_BG; // 0x2a8(0x08)
	UHorizontalBox* GearTabsHolder; // 0x2b0(0x08)
	UImage* Icon_Info_Base; // 0x2b8(0x08)
	UImage* Icon_Info_Brackets; // 0x2c0(0x08)
	UOverlay* InfoOverlay; // 0x2c8(0x08)
	UVerticalBox* ItemDescHolder; // 0x2d0(0x08)
	UTextBlock* ItemName; // 0x2d8(0x08)
	UWidgetSwitcher* ItemTypeSwitcher; // 0x2e0(0x08)
	UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x2e8(0x08)
	UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x2f0(0x08)
	UWND_Skins_C* ITM_Skins_Color; // 0x2f8(0x08)
	UWND_Skins_C* ITM_Skins_Mesh; // 0x300(0x08)
	UITM_UnlockedCelebration_C* ITM_UnlockedCelebration; // 0x308(0x08)
	UITM_UpgGear_SideBar_GrenadeSelect_C* ITM_UpgGear_GrenadeSelect; // 0x310(0x08)
	UITM_UpgGear_SideBar_C* ITM_UpgGear_Upgrades; // 0x318(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x320(0x08)
	UNamedSlot* PutStuffHere; // 0x328(0x08)
	UBorder* StatBox_BG; // 0x330(0x08)
	UVerticalBox* StatBox_Holder; // 0x338(0x08)
	UBasic_Menu_ColorBar_C* StatsColorBar; // 0x340(0x08)
	FMulticastInlineDelegate OnCloseClicked; // 0x348(0x10)
	APlayerCharacter* CharacterClass; // 0x358(0x08)
	AActor* itemClass; // 0x360(0x08)
	UUpgradableGearComponent* Upgradable; // 0x368(0x08)
	enum class EItemCategory ItemCategory; // 0x370(0x01)
	FMulticastInlineDelegate OnItemChanged; // 0x378(0x10)
	bool ItemDescClicked; // 0x388(0x01)
	bool ShowTabsBar; // 0x389(0x01)
	FMulticastInlineDelegate OnItemPurchased; // 0x390(0x10)
	UDialogDataAsset* ShoutUpgradePurchased; // 0x3a0(0x08)
	bool LoadoutSwitched; // 0x3a8(0x01)
	bool IsBoscoUpgScreen; // 0x3a9(0x01)

	void Toggle Auto GearStats Preview(bool IsOn);
	void ChangeItemCustom(AActor* InItemClass, bool EquipItem, bool IsUnlocked);
	void GetItemTabIndex(AActor* InItemClass, int32_t OutIndex);
	void SelectNextTab(int32_t Direction);
	void GetYesNoPrompt(UBasic_Popup_YesNoPrompt_C* YesNoPrompt);
	void RefreshGearStats(FString Entry);
	void GetTabItems(APlayerCharacter* InCharacterClass, enum class EItemCategory InCategory, TArray<AActor*> Tab Items);
	void BuildGearTabs();
	void ChangeItem(AActor* InItemClass);
	void RefreshItemDetails();
	void Show(APlayerCharacter* InCharacterClass, AActor* InItemClass, enum class EItemCategory InItemCategory);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature();
	void ReceiveSelectNextCommand();
	void ReceiveSelectPreviousCommand();
	void Construct();
	void OnClosed();
	void OnShown();
	void BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void ReceiveCloseCommand();
	void ReceiveOkCommand();
	void OnGrenadeSelected(AActor* itemClass, bool Equip, bool IsUnlocked);
	void OnPreviewUpgradeChangedEvent(UItemUpgrade* PreviewUpgrade);
	void OnItemRewarded(FMasteryItem Reward);
	void OnFinished(TArray<UUnlockReward*> Rewards);
	void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature();
	void BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature();
	void BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature();
	void BndEvt__ITM_UpgGear_GrenadeSelect_K2Node_ComponentBoundEvent_7_OnGrenadePurchased__DelegateSignature();
	void ExecuteUbergraph_MENU_UpgradeScreen(int32_t EntryPoint);
	void OnItemPurchased__DelegateSignature();
	void OnItemChanged__DelegateSignature(AActor* NewItemClass);
	void OnCloseClicked__DelegateSignature();
};

