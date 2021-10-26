// WidgetBlueprintGeneratedClass ITM_Overclocks_Equip.ITM_Overclocks_Equip_C
// Size: 0x371 (Inherited: 0x230)
struct UITM_Overclocks_Equip_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimPopUpSelection; // 0x238(0x08)
	UWidgetAnimation* AnimHoverButton; // 0x240(0x08)
	UWidgetAnimation* AnimFadeIn; // 0x248(0x08)
	UButton* BlockCursorInput; // 0x250(0x08)
	UImage* ButtonFrame; // 0x258(0x08)
	UTextBlock* DATA_Overclock_CategoryName; // 0x260(0x08)
	UTextBlock* DATA_Overclock_Title; // 0x268(0x08)
	UWidgetSwitcher* DetailsSwitcher; // 0x270(0x08)
	UBorder* EquipBorder; // 0x278(0x08)
	UButton* EquipButton; // 0x280(0x08)
	UBorder* HeaderBorder; // 0x288(0x08)
	UOverlay* HeaderOverlay; // 0x290(0x08)
	USizeBox* HeaderSize; // 0x298(0x08)
	UImage* ImgLocked; // 0x2a0(0x08)
	UITM_Overclock_Details_C* ITM_Overclock_Details; // 0x2a8(0x08)
	UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x2b0(0x08)
	UTextBlock* LabelLocked; // 0x2b8(0x08)
	UVerticalBox* LockedNoOverclocks; // 0x2c0(0x08)
	UVerticalBox* LockedRequirementBox; // 0x2c8(0x08)
	UITM_ItemUnlockedIcon_C* Notification_NewOverclock; // 0x2d0(0x08)
	USizeBox* OverclockSlotISizer; // 0x2d8(0x08)
	UWrapBox* SelectionBox; // 0x2e0(0x08)
	UBackgroundBlur* SelectorBlur; // 0x2e8(0x08)
	UTextBlock* TextBlock_1; // 0x2f0(0x08)
	UTextBlock* TextBlock_2; // 0x2f8(0x08)
	UTextBlock* TextBlock_362; // 0x300(0x08)
	FLinearColor TintClean; // 0x308(0x10)
	FLinearColor TintBalanced; // 0x318(0x10)
	FLinearColor TintUnstable; // 0x328(0x10)
	APlayerCharacter* CharacterClass; // 0x338(0x08)
	AActor* itemClass; // 0x340(0x08)
	UUpgradableItemComponent* UpgradableComponent; // 0x348(0x08)
	bool SelectionOpen; // 0x350(0x01)
	bool MenuActive; // 0x351(0x01)
	bool Hovering; // 0x352(0x01)
	bool MenuLocked; // 0x353(0x01)
	TArray<UItemUpgrade*> Overclocks; // 0x358(0x10)
	UItemUpgrade* DisplayedOverclock; // 0x368(0x08)
	bool OverclockUnlocked; // 0x370(0x01)

	void TryToggleSelection();
	void OnRefreshItem(bool WasCreated, UUserWidget* Widget, int32_t ActiveIndex);
	void SetMenuLocked(bool InLocked, bool InRequirementMet, bool OverclockEquipped);
	void SetMenuActive(bool Inactive, bool ActiveChanged);
	void ShowOverclock(UItemUpgrade* Overclock);
	void SetSelectionVisible(bool InVisible);
	void OnItemUnhovered(UITM_Overclocks_Equip_Item_C* Widget);
	void OnItemHovered(UITM_Overclocks_Equip_Item_C* Widget);
	void OnItemClicked(UITM_Overclocks_Equip_Item_C* Widget);
	void Refresh();
	void SetData(APlayerCharacter* InCharacterClass, AActor* InItemClass);
	void SetBackgroundTint(FLinearColor Tint);
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void OnPopUpFinished();
	void OnPopupStarted();
	void OnItemUpgradeCrafted_Event(UItemUpgrade* Upgrade);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void CloseMenuNicely();
	void ExecuteUbergraph_ITM_Overclocks_Equip(int32_t EntryPoint);
};

