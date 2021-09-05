// WidgetBlueprintGeneratedClass ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C
// Size: 0x2b1 (Inherited: 0x230)
struct UITM_Overclocks_Equip_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimHover; // 0x238(0x08)
	UButton* ClickButton; // 0x240(0x08)
	UImage* HoveringImg; // 0x248(0x08)
	USizeBox* ItemSizer; // 0x250(0x08)
	UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x258(0x08)
	UITM_ItemUnlockedIcon_C* Notification_NewOverclock; // 0x260(0x08)
	UImage* SelectionImg; // 0x268(0x08)
	int32_t IconSize; // 0x270(0x04)
	FMulticastInlineDelegate OnHovered; // 0x278(0x10)
	FMulticastInlineDelegate OnUnhovered; // 0x288(0x10)
	FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	UItemUpgrade* Overclock; // 0x2a8(0x08)
	enum class EItemUpgradeStatus State; // 0x2b0(0x01)

	UWidget* GetToolTipWidget();
	void SetState(enum class EItemUpgradeStatus InState);
	void GetOverClock(UItemUpgrade* Overclock);
	void SetOverclock(UItemUpgrade* InOverclock);
	void SetIconSize(int32_t NewSize);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_Overclocks_Equip_Item(int32_t EntryPoint);
	void OnClicked__DelegateSignature(UITM_Overclocks_Equip_Item_C* Item);
	void OnUnhovered__DelegateSignature(UITM_Overclocks_Equip_Item_C* Item);
	void OnHovered__DelegateSignature(UITM_Overclocks_Equip_Item_C* Item);
};

