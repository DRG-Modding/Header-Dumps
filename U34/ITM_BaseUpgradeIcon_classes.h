// WidgetBlueprintGeneratedClass ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C
// Size: 0x2ea (Inherited: 0x230)
struct UITM_BaseUpgradeIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Unlock; // 0x238(0x08)
	struct UWidgetAnimation* AnimHover; // 0x240(0x08)
	struct UImage* BG; // 0x248(0x08)
	struct UImage* Icon; // 0x250(0x08)
	struct UImage* Icon_Lock; // 0x258(0x08)
	struct UWidgetSwitcher* IconSwitch; // 0x260(0x08)
	struct UHorizontalBox* LockBar; // 0x268(0x08)
	struct UTextBlock* LockRequirementText; // 0x270(0x08)
	struct UImage* outline; // 0x278(0x08)
	struct UOverlay* Overlay_3; // 0x280(0x08)
	struct UImage* SelectionOutline; // 0x288(0x08)
	struct USizeBox* SizeBox_1; // 0x290(0x08)
	struct UButton* WidgetButton; // 0x298(0x08)
	struct UTexture2D* PreviewIcon; // 0x2a0(0x08)
	enum class EItemUpgradeStatus PreviewStatus; // 0x2a8(0x01)
	char UnknownData_2A9[0x3]; // 0x2a9(0x03)
	int32_t PreviewLockRequirement; // 0x2ac(0x04)
	bool PreviewShowEquippedAsBorder; // 0x2b0(0x01)
	bool PreviewShowLockIcon; // 0x2b1(0x01)
	bool PreviewShowLockRequirement; // 0x2b2(0x01)
	char UnknownData_2B3[0x5]; // 0x2b3(0x05)
	struct FMulticastInlineDelegate OnHoverBegin; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnHoverEnd; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2d8(0x10)
	bool Hovered; // 0x2e8(0x01)
	bool PreviewTierLocked; // 0x2e9(0x01)

	bool IsInteractable(); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.IsInteractable
	void Update(struct UTexture2D* InIcon, enum class EItemUpgradeStatus InStatus, int32_t InLockRequirement, struct UTexture2D* LockTexture, char LockTint, bool InShowEquippedAsBorder, bool InShowLockIcon, bool InShowLockRequirement, bool InTierLocked); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.Update
	void PreConstruct(bool IsDesignTime); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.PreConstruct
	void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature(); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature(); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_ITM_BaseUpgradeIcon(int32_t EntryPoint); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.ExecuteUbergraph_ITM_BaseUpgradeIcon
	void OnClicked__DelegateSignature(struct UITM_BaseUpgradeIcon_C* Widget); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnClicked__DelegateSignature
	void OnHoverEnd__DelegateSignature(struct UITM_BaseUpgradeIcon_C* Widget); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverEnd__DelegateSignature
	void OnHoverBegin__DelegateSignature(struct UITM_BaseUpgradeIcon_C* Widget); // Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverBegin__DelegateSignature
};

