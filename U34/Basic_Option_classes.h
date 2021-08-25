// WidgetBlueprintGeneratedClass Basic_Option.Basic_Option_C
// Size: 0x2cd (Inherited: 0x230)
struct UBasic_Option_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* ArrowBox_Text; // 0x238(0x08)
	struct UImage* backgroundNoOutline; // 0x240(0x08)
	struct UOverlay* BackgroundOverlay; // 0x248(0x08)
	struct UImage* Image_Separator; // 0x250(0x08)
	struct UBorder* MainBorder; // 0x258(0x08)
	struct UImage* outline; // 0x260(0x08)
	struct UNamedSlot* PutStuffHere; // 0x268(0x08)
	struct USizeBox* SizeBox; // 0x270(0x08)
	struct USizeBox* SizeBox_Content; // 0x278(0x08)
	struct FText Option Name; // 0x280(0x18)
	float LeftPadding; // 0x298(0x04)
	int32_t Slider; // 0x29c(0x04)
	int32_t switcher; // 0x2a0(0x04)
	bool WasHovering; // 0x2a4(0x01)
	char UnknownData_2A5[0x3]; // 0x2a5(0x03)
	struct FMulticastInlineDelegate OnHoveringBegin; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnHoveringEnd; // 0x2b8(0x10)
	int32_t Indent; // 0x2c8(0x04)
	char ContentHAlignment; // 0x2cc(0x01)

	void SetContentLayout(float InLeftPadding, char InHorizontalAlignment); // Function Basic_Option.Basic_Option_C.SetContentLayout
	void SetIndent(int32_t InIndent); // Function Basic_Option.Basic_Option_C.SetIndent
	void SetOptionText(struct FText InText); // Function Basic_Option.Basic_Option_C.SetOptionText
	void PreConstruct(bool IsDesignTime); // Function Basic_Option.Basic_Option_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Basic_Option.Basic_Option_C.Tick
	void ExecuteUbergraph_Basic_Option(int32_t EntryPoint); // Function Basic_Option.Basic_Option_C.ExecuteUbergraph_Basic_Option
	void OnHoveringEnd__DelegateSignature(); // Function Basic_Option.Basic_Option_C.OnHoveringEnd__DelegateSignature
	void OnHoveringBegin__DelegateSignature(); // Function Basic_Option.Basic_Option_C.OnHoveringBegin__DelegateSignature
};

