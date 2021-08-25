// WidgetBlueprintGeneratedClass BTN_ItemCategory.BTN_ItemCategory_C
// Size: 0x300 (Inherited: 0x230)
struct UBTN_ItemCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Pressed; // 0x238(0x08)
	struct UWidgetAnimation* Hover; // 0x240(0x08)
	struct UBorder* BorderOuter; // 0x248(0x08)
	struct UBorder* Bracket; // 0x250(0x08)
	struct UButton* Button_1; // 0x258(0x08)
	struct UTextBlock* DATA_CategoryTitle; // 0x260(0x08)
	struct UTextBlock* DATA_UnlockedNumber; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UITM_ItemUnlockedIcon_C* Notification_NewItem; // 0x278(0x08)
	struct UOverlay* Overlay_1; // 0x280(0x08)
	struct USizeBox* SizeBox_1; // 0x288(0x08)
	struct UTextBlock* TEXT_Acquired; // 0x290(0x08)
	struct UOverlay* ToolTip; // 0x298(0x08)
	struct UImage* TooltipArrow; // 0x2a0(0x08)
	struct UBorder* ToolTipBox; // 0x2a8(0x08)
	struct UBorder* TooltipBracket; // 0x2b0(0x08)
	float IconSize; // 0x2b8(0x04)
	char UnknownData_2BC[0x4]; // 0x2bc(0x04)
	struct UTexture2D* Texture; // 0x2c0(0x08)
	struct FText CategoryTitle; // 0x2c8(0x18)
	struct FMulticastInlineDelegate ButtonClicked; // 0x2e0(0x10)
	enum class EVanitySlot VanitySlot; // 0x2f0(0x01)
	char UnknownData_2F1[0x7]; // 0x2f1(0x07)
	struct UPlayerCharacterID* characterID; // 0x2f8(0x08)

	void CheckForNotification(); // Function BTN_ItemCategory.BTN_ItemCategory_C.CheckForNotification
	void PreConstruct(bool IsDesignTime); // Function BTN_ItemCategory.BTN_ItemCategory_C.PreConstruct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	void Construct(); // Function BTN_ItemCategory.BTN_ItemCategory_C.Construct
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void Toggle(bool on); // Function BTN_ItemCategory.BTN_ItemCategory_C.Toggle
	void SetData(struct UPlayerCharacterID* characterID); // Function BTN_ItemCategory.BTN_ItemCategory_C.SetData
	void OnClosed(); // Function BTN_ItemCategory.BTN_ItemCategory_C.OnClosed
	void ExecuteUbergraph_BTN_ItemCategory(int32_t EntryPoint); // Function BTN_ItemCategory.BTN_ItemCategory_C.ExecuteUbergraph_BTN_ItemCategory
	void ButtonClicked__DelegateSignature(); // Function BTN_ItemCategory.BTN_ItemCategory_C.ButtonClicked__DelegateSignature
};

