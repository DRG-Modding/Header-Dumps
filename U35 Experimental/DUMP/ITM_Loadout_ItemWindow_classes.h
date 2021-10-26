// WidgetBlueprintGeneratedClass ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C
// Size: 0x341 (Inherited: 0x230)
struct UITM_Loadout_ItemWindow_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* IntroRight; // 0x238(0x08)
	UWidgetAnimation* IntroLeft; // 0x240(0x08)
	UWidgetAnimation* ClickAnim; // 0x248(0x08)
	UWidgetAnimation* HoverAnim; // 0x250(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x258(0x08)
	UBorder* Brackets; // 0x260(0x08)
	UButton* ButtonLeft; // 0x268(0x08)
	UButton* ButtonRight; // 0x270(0x08)
	UOverlay* ContentOverlay; // 0x278(0x08)
	UTextBlock* DATA_ItemCount; // 0x280(0x08)
	UTextBlock* DATA_ItemName2; // 0x288(0x08)
	UImage* GearIcon_BG; // 0x290(0x08)
	UImage* GearIcon_Outline; // 0x298(0x08)
	UImage* HeaderGradient; // 0x2a0(0x08)
	UITM_ItemUnlockedIcon_C* ItemNotification; // 0x2a8(0x08)
	UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar_C_1; // 0x2b0(0x08)
	UITM_MasteryBar_C* ITM_MasteryBar; // 0x2b8(0x08)
	UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x2c0(0x08)
	UBorder* Main_BG; // 0x2c8(0x08)
	UButton* MainButton; // 0x2d0(0x08)
	UCanvasPanel* NavigationPanel; // 0x2d8(0x08)
	UBorder* Upgrades_BG; // 0x2e0(0x08)
	FMulticastInlineDelegate On Clicked; // 0x2e8(0x10)
	UPlayerCharacterID* CharacterClass; // 0x2f8(0x08)
	enum class EItemCategory Item Category; // 0x300(0x01)
	bool ItemHovered; // 0x301(0x01)
	AActor* itemClass; // 0x308(0x08)
	FMulticastInlineDelegate On Hovered; // 0x310(0x10)
	FMulticastInlineDelegate On Unhovered; // 0x320(0x10)
	TArray<AActor*> ItemsOwned; // 0x330(0x10)
	bool HideCounter; // 0x340(0x01)

	void SetHideCounter(bool HideCounter);
	void GetNextItem(int32_t Direction, AActor* NextItem);
	void GetOwnedItems(UPlayerCharacterID* InCharacterClass, enum class EItemCategory InCategory, TArray<AActor*> Owned Items, bool NewWeaponNotification);
	void GetSelectedItem(AActor* itemClass, enum class EItemCategory Item Category);
	void SetCharacterClass(UPlayerCharacterID* InCharacterClass);
	void SetHovered(bool InHovered);
	bool IsHovering();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void SelectNext();
	void SelectPrevious();
	void Select Item(AActor* InItemClass);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature();
	void OnClickAnimFinished();
	void PlayIntroAnim(bool IsLeftSide, float Duration);
	void ExecuteUbergraph_ITM_Loadout_ItemWindow(int32_t EntryPoint);
	void On Unhovered__DelegateSignature(UITM_Loadout_ItemWindow_C* Item);
	void On Hovered__DelegateSignature(UITM_Loadout_ItemWindow_C* Item);
	void On Clicked__DelegateSignature(UITM_Loadout_ItemWindow_C* Item);
};

