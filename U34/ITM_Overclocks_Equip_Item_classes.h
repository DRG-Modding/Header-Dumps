// WidgetBlueprintGeneratedClass ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C
// Size: 0x2b1 (Inherited: 0x230)
struct UITM_Overclocks_Equip_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimHover; // 0x238(0x08)
	struct UButton* ClickButton; // 0x240(0x08)
	struct UImage* HoveringImg; // 0x248(0x08)
	struct USizeBox* ItemSizer; // 0x250(0x08)
	struct UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x258(0x08)
	struct UITM_ItemUnlockedIcon_C* Notification_NewOverclock; // 0x260(0x08)
	struct UImage* SelectionImg; // 0x268(0x08)
	int32_t IconSize; // 0x270(0x04)
	char UnknownData_274[0x4]; // 0x274(0x04)
	struct FMulticastInlineDelegate OnHovered; // 0x278(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x288(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	struct UItemUpgrade* Overclock; // 0x2a8(0x08)
	enum class EItemUpgradeStatus State; // 0x2b0(0x01)

	struct UWidget* GetToolTipWidget(); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetToolTipWidget
	void SetState(enum class EItemUpgradeStatus InState); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetState
	void GetOverClock(struct UItemUpgrade* Overclock); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetOverClock
	void SetOverclock(struct UItemUpgrade* InOverclock); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetOverclock
	void SetIconSize(int32_t NewSize); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetIconSize
	void PreConstruct(bool IsDesignTime); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.PreConstruct
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_ITM_Overclocks_Equip_Item(int32_t EntryPoint); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.ExecuteUbergraph_ITM_Overclocks_Equip_Item
	void OnClicked__DelegateSignature(struct UITM_Overclocks_Equip_Item_C* Item); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnClicked__DelegateSignature
	void OnUnhovered__DelegateSignature(struct UITM_Overclocks_Equip_Item_C* Item); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UITM_Overclocks_Equip_Item_C* Item); // Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnHovered__DelegateSignature
};

