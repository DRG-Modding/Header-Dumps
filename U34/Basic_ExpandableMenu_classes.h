// WidgetBlueprintGeneratedClass Basic_ExpandableMenu.Basic_ExpandableMenu_C
// Size: 0x2b8 (Inherited: 0x230)
struct UBasic_ExpandableMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimOpen; // 0x238(0x08)
	struct UBorder* Border_1; // 0x240(0x08)
	struct UButton* CategoryButton; // 0x248(0x08)
	struct UNamedSlot* Content; // 0x250(0x08)
	struct USizeBox* ContentSize; // 0x258(0x08)
	struct UTextBlock* Header1Text; // 0x260(0x08)
	struct UTextBlock* Header2Text; // 0x268(0x08)
	struct UImage* OpenImage; // 0x270(0x08)
	bool Menu Open; // 0x278(0x01)
	char UnknownData_279[0x3]; // 0x279(0x03)
	float OpenHeight; // 0x27c(0x04)
	float HeightScale; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct FText Header1; // 0x288(0x18)
	struct FText Header2; // 0x2a0(0x18)

	void InstaOpenMenu(bool Open); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.InstaOpenMenu
	void SetFixedSizeOpenHeight(int32_t Item Count, float Item Height); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetFixedSizeOpenHeight
	void SetOpenHeight(float OpenHeight); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetOpenHeight
	void SetHovered(bool InHovered); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHovered
	void SetHeader2(struct FText InText); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader2
	void SetHeader1(struct FText InText); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader1
	void SetMenuOpen(bool IsOpen, bool OutIsOpen); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetMenuOpen
	void GetButtonStyle(char Color, struct FSlateBrush SlateBrush); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.GetButtonStyle
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void SetHeightScale(float NewScale); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeightScale
	void PreConstruct(bool IsDesignTime); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.PreConstruct
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_Basic_ExpandableMenu(int32_t EntryPoint); // Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.ExecuteUbergraph_Basic_ExpandableMenu
};

