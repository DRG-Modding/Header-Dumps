// WidgetBlueprintGeneratedClass BTN_ItemCategory.BTN_ItemCategory_C
// Size: 0x300 (Inherited: 0x230)
struct UBTN_ItemCategory_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Pressed; // 0x238(0x08)
	UWidgetAnimation* Hover; // 0x240(0x08)
	UBorder* BorderOuter; // 0x248(0x08)
	UBorder* Bracket; // 0x250(0x08)
	UButton* Button_1; // 0x258(0x08)
	UTextBlock* DATA_CategoryTitle; // 0x260(0x08)
	UTextBlock* DATA_UnlockedNumber; // 0x268(0x08)
	UImage* Icon; // 0x270(0x08)
	UITM_ItemUnlockedIcon_C* Notification_NewItem; // 0x278(0x08)
	UOverlay* Overlay_1; // 0x280(0x08)
	USizeBox* SizeBox_1; // 0x288(0x08)
	UTextBlock* TEXT_Acquired; // 0x290(0x08)
	UOverlay* ToolTip; // 0x298(0x08)
	UImage* TooltipArrow; // 0x2a0(0x08)
	UBorder* ToolTipBox; // 0x2a8(0x08)
	UBorder* TooltipBracket; // 0x2b0(0x08)
	float IconSize; // 0x2b8(0x04)
	UTexture2D* Texture; // 0x2c0(0x08)
	FText CategoryTitle; // 0x2c8(0x18)
	FMulticastInlineDelegate ButtonClicked; // 0x2e0(0x10)
	enum class EVanitySlot VanitySlot; // 0x2f0(0x01)
	UPlayerCharacterID* characterID; // 0x2f8(0x08)

	void CheckForNotification();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Toggle(bool on);
	void SetData(UPlayerCharacterID* characterID);
	void OnClosed();
	void ExecuteUbergraph_BTN_ItemCategory(int32_t EntryPoint);
	void ButtonClicked__DelegateSignature();
};

