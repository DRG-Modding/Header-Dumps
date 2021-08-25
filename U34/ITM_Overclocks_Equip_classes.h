// WidgetBlueprintGeneratedClass ITM_Overclocks_Equip.ITM_Overclocks_Equip_C
// Size: 0x371 (Inherited: 0x230)
struct UITM_Overclocks_Equip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimPopUpSelection; // 0x238(0x08)
	struct UWidgetAnimation* AnimHoverButton; // 0x240(0x08)
	struct UWidgetAnimation* AnimFadeIn; // 0x248(0x08)
	struct UButton* BlockCursorInput; // 0x250(0x08)
	struct UImage* ButtonFrame; // 0x258(0x08)
	struct UTextBlock* DATA_Overclock_CategoryName; // 0x260(0x08)
	struct UTextBlock* DATA_Overclock_Title; // 0x268(0x08)
	struct UWidgetSwitcher* DetailsSwitcher; // 0x270(0x08)
	struct UBorder* EquipBorder; // 0x278(0x08)
	struct UButton* EquipButton; // 0x280(0x08)
	struct UBorder* HeaderBorder; // 0x288(0x08)
	struct UOverlay* HeaderOverlay; // 0x290(0x08)
	struct USizeBox* HeaderSize; // 0x298(0x08)
	struct UImage* ImgLocked; // 0x2a0(0x08)
	struct UITM_Overclock_Details_C* ITM_Overclock_Details; // 0x2a8(0x08)
	struct UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x2b0(0x08)
	struct UTextBlock* LabelLocked; // 0x2b8(0x08)
	struct UVerticalBox* LockedNoOverclocks; // 0x2c0(0x08)
	struct UVerticalBox* LockedRequirementBox; // 0x2c8(0x08)
	struct UITM_ItemUnlockedIcon_C* Notification_NewOverclock; // 0x2d0(0x08)
	struct USizeBox* OverclockSlotISizer; // 0x2d8(0x08)
	struct UWrapBox* SelectionBox; // 0x2e0(0x08)
	struct UBackgroundBlur* SelectorBlur; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_1; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_2; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_362; // 0x300(0x08)
	struct FLinearColor TintClean; // 0x308(0x10)
	struct FLinearColor TintBalanced; // 0x318(0x10)
	struct FLinearColor TintUnstable; // 0x328(0x10)
	struct APlayerCharacter* CharacterClass; // 0x338(0x08)
	struct AActor* itemClass; // 0x340(0x08)
	struct UUpgradableItemComponent* UpgradableComponent; // 0x348(0x08)
	bool SelectionOpen; // 0x350(0x01)
	bool MenuActive; // 0x351(0x01)
	bool Hovering; // 0x352(0x01)
	bool MenuLocked; // 0x353(0x01)
	char UnknownData_354[0x4]; // 0x354(0x04)
	struct TArray<struct UItemUpgrade*> Overclocks; // 0x358(0x10)
	struct UItemUpgrade* DisplayedOverclock; // 0x368(0x08)
	bool OverclockUnlocked; // 0x370(0x01)

	void TryToggleSelection(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.TryToggleSelection
	void OnRefreshItem(bool WasCreated, struct UUserWidget* Widget, int32_t ActiveIndex); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnRefreshItem
	void SetMenuLocked(bool InLocked, bool InRequirementMet, bool OverclockEquipped); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuLocked
	void SetMenuActive(bool Inactive, bool ActiveChanged); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuActive
	void ShowOverclock(struct UItemUpgrade* Overclock); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ShowOverclock
	void SetSelectionVisible(bool InVisible); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetSelectionVisible
	void OnItemUnhovered(struct UITM_Overclocks_Equip_Item_C* Widget); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUnhovered
	void OnItemHovered(struct UITM_Overclocks_Equip_Item_C* Widget); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemHovered
	void OnItemClicked(struct UITM_Overclocks_Equip_Item_C* Widget); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemClicked
	void Refresh(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Refresh
	void SetData(struct APlayerCharacter* InCharacterClass, struct AActor* InItemClass); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetData
	void SetBackgroundTint(struct FLinearColor Tint); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetBackgroundTint
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void OnPopUpFinished(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopUpFinished
	void OnPopupStarted(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopupStarted
	void OnItemUpgradeCrafted_Event(struct UItemUpgrade* Upgrade); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUpgradeCrafted_Event
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseLeave
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseEnter
	void Construct(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.PreConstruct
	void CloseMenuNicely(); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.CloseMenuNicely
	void ExecuteUbergraph_ITM_Overclocks_Equip(int32_t EntryPoint); // Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ExecuteUbergraph_ITM_Overclocks_Equip
};

