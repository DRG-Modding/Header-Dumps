// WidgetBlueprintGeneratedClass ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C
// Size: 0x2ea (Inherited: 0x230)
struct UITM_BaseUpgradeIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Unlock; // 0x238(0x08)
	UWidgetAnimation* AnimHover; // 0x240(0x08)
	UImage* BG; // 0x248(0x08)
	UImage* Icon; // 0x250(0x08)
	UImage* Icon_Lock; // 0x258(0x08)
	UWidgetSwitcher* IconSwitch; // 0x260(0x08)
	UHorizontalBox* LockBar; // 0x268(0x08)
	UTextBlock* LockRequirementText; // 0x270(0x08)
	UImage* outline; // 0x278(0x08)
	UOverlay* Overlay_3; // 0x280(0x08)
	UImage* SelectionOutline; // 0x288(0x08)
	USizeBox* SizeBox_1; // 0x290(0x08)
	UButton* WidgetButton; // 0x298(0x08)
	UTexture2D* PreviewIcon; // 0x2a0(0x08)
	enum class EItemUpgradeStatus PreviewStatus; // 0x2a8(0x01)
	int32_t PreviewLockRequirement; // 0x2ac(0x04)
	bool PreviewShowEquippedAsBorder; // 0x2b0(0x01)
	bool PreviewShowLockIcon; // 0x2b1(0x01)
	bool PreviewShowLockRequirement; // 0x2b2(0x01)
	FMulticastInlineDelegate OnHoverBegin; // 0x2b8(0x10)
	FMulticastInlineDelegate OnHoverEnd; // 0x2c8(0x10)
	FMulticastInlineDelegate OnClicked; // 0x2d8(0x10)
	bool Hovered; // 0x2e8(0x01)
	bool PreviewTierLocked; // 0x2e9(0x01)

	bool IsInteractable();
	void Update(UTexture2D* InIcon, enum class EItemUpgradeStatus InStatus, int32_t InLockRequirement, UTexture2D* LockTexture, enum class ENUM_MenuColors LockTint, bool InShowEquippedAsBorder, bool InShowLockIcon, bool InShowLockRequirement, bool InTierLocked);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_BaseUpgradeIcon(int32_t EntryPoint);
	void OnClicked__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
	void OnHoverEnd__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
	void OnHoverBegin__DelegateSignature(UITM_BaseUpgradeIcon_C* Widget);
};

