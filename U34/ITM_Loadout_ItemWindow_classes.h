// WidgetBlueprintGeneratedClass ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C
// Size: 0x341 (Inherited: 0x230)
struct UITM_Loadout_ItemWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* IntroRight; // 0x238(0x08)
	struct UWidgetAnimation* IntroLeft; // 0x240(0x08)
	struct UWidgetAnimation* ClickAnim; // 0x248(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x250(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x258(0x08)
	struct UBorder* Brackets; // 0x260(0x08)
	struct UButton* ButtonLeft; // 0x268(0x08)
	struct UButton* ButtonRight; // 0x270(0x08)
	struct UTextBlock* DATA_ItemCount; // 0x278(0x08)
	struct UTextBlock* DATA_ItemName2; // 0x280(0x08)
	struct UImage* GearIcon_BG; // 0x288(0x08)
	struct UImage* GearIcon_Outline; // 0x290(0x08)
	struct UImage* HeaderGradient; // 0x298(0x08)
	struct UITM_ItemUnlockedIcon_C* ItemNotification; // 0x2a0(0x08)
	struct UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar_C_1; // 0x2a8(0x08)
	struct UITM_MasteryBar_C* ITM_MasteryBar; // 0x2b0(0x08)
	struct UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x2b8(0x08)
	struct UBorder* Main_BG; // 0x2c0(0x08)
	struct UButton* MainButton; // 0x2c8(0x08)
	struct UCanvasPanel* NavigationPanel; // 0x2d0(0x08)
	struct UOverlay* Overlay_3; // 0x2d8(0x08)
	struct UBorder* Upgrades_BG; // 0x2e0(0x08)
	struct FMulticastInlineDelegate On Clicked; // 0x2e8(0x10)
	struct APlayerCharacter* CharacterClass; // 0x2f8(0x08)
	enum class EItemCategory Item Category; // 0x300(0x01)
	bool ItemHovered; // 0x301(0x01)
	char UnknownData_302[0x6]; // 0x302(0x06)
	struct AActor* itemClass; // 0x308(0x08)
	struct FMulticastInlineDelegate On Hovered; // 0x310(0x10)
	struct FMulticastInlineDelegate On Unhovered; // 0x320(0x10)
	struct TArray<struct AActor*> ItemsOwned; // 0x330(0x10)
	bool HideCounter; // 0x340(0x01)

	void SetHideCounter(bool HideCounter); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHideCounter
	void GetNextItem(int32_t Direction, struct AActor* NextItem); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem
	void GetOwnedItems(struct APlayerCharacter* InCharacterClass, enum class EItemCategory InCategory, struct TArray<struct AActor*> Owned Items, bool NewWeaponNotification); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems
	void GetSelectedItem(struct AActor* itemClass, enum class EItemCategory Item Category); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem
	void SetCharacterClass(struct APlayerCharacter* InCharacterClass); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass
	void SetHovered(bool InHovered); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered
	bool IsHovering(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering
	void Construct(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct
	void SelectNext(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext
	void SelectPrevious(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious
	void Select Item(struct AActor* InItemClass); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature
	void OnClickAnimFinished(); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.OnClickAnimFinished
	void PlayIntroAnim(bool IsLeftSide, float Duration); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PlayIntroAnim
	void PreConstruct(bool IsDesignTime); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct
	void ExecuteUbergraph_ITM_Loadout_ItemWindow(int32_t EntryPoint); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow
	void On Unhovered__DelegateSignature(struct UITM_Loadout_ItemWindow_C* Item); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature
	void On Hovered__DelegateSignature(struct UITM_Loadout_ItemWindow_C* Item); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature
	void On Clicked__DelegateSignature(struct UITM_Loadout_ItemWindow_C* Item); // Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature
};

