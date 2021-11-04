// WidgetBlueprintGeneratedClass Basic_Option.Basic_Option_C
// Size: 0x2cd (Inherited: 0x230)
struct UBasic_Option_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* ArrowBox_Text; // 0x238(0x08)
	UImage* backgroundNoOutline; // 0x240(0x08)
	UOverlay* BackgroundOverlay; // 0x248(0x08)
	UImage* Image_Separator; // 0x250(0x08)
	UBorder* MainBorder; // 0x258(0x08)
	UImage* outline; // 0x260(0x08)
	UNamedSlot* PutStuffHere; // 0x268(0x08)
	USizeBox* SizeBox; // 0x270(0x08)
	USizeBox* SizeBox_Content; // 0x278(0x08)
	FText Option Name; // 0x280(0x18)
	float LeftPadding; // 0x298(0x04)
	int32_t Slider; // 0x29c(0x04)
	int32_t switcher; // 0x2a0(0x04)
	bool WasHovering; // 0x2a4(0x01)
	FMulticastInlineDelegate OnHoveringBegin; // 0x2a8(0x10)
	FMulticastInlineDelegate OnHoveringEnd; // 0x2b8(0x10)
	int32_t Indent; // 0x2c8(0x04)
	enum class EHorizontalAlignment ContentHAlignment; // 0x2cc(0x01)

	void SetContentLayout(float InLeftPadding, enum class EHorizontalAlignment InHorizontalAlignment);
	void SetIndent(int32_t InIndent);
	void SetOptionText(FText InText);
	void PreConstruct(bool IsDesignTime);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Basic_Option(int32_t EntryPoint);
	void OnHoveringEnd__DelegateSignature();
	void OnHoveringBegin__DelegateSignature();
};

