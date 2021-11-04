// WidgetBlueprintGeneratedClass Basic_ExpandableMenu.Basic_ExpandableMenu_C
// Size: 0x2c0 (Inherited: 0x230)
struct UBasic_ExpandableMenu_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimOpen; // 0x238(0x08)
	UBorder* Border_1; // 0x240(0x08)
	UButton* CategoryButton; // 0x248(0x08)
	UNamedSlot* Content; // 0x250(0x08)
	USizeBox* ContentSize; // 0x258(0x08)
	UTextBlock* Header1Text; // 0x260(0x08)
	UTextBlock* Header2Text; // 0x268(0x08)
	UImage* OpenImage; // 0x270(0x08)
	USizeBox* WidthSizeBox; // 0x278(0x08)
	bool Menu Open; // 0x280(0x01)
	float OpenHeight; // 0x284(0x04)
	float HeightScale; // 0x288(0x04)
	float Width; // 0x28c(0x04)
	FText Header1; // 0x290(0x18)
	FText Header2; // 0x2a8(0x18)

	void SetWidth(float InWidth);
	void InstaOpenMenu(bool Open);
	void SetFixedSizeOpenHeight(int32_t Item Count, float Item Height);
	void SetOpenHeight(float OpenHeight);
	void SetHovered(bool InHovered);
	void SetHeader2(FText InText);
	void SetHeader1(FText InText);
	void SetMenuOpen(bool IsOpen, bool OutIsOpen);
	void GetButtonStyle(enum class ENUM_MenuColors Color, FSlateBrush SlateBrush);
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetHeightScale(float newScale);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_Basic_ExpandableMenu(int32_t EntryPoint);
};

