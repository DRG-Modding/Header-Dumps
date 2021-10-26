// WidgetBlueprintGeneratedClass ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C
// Size: 0x2e8 (Inherited: 0x230)
struct UToolTip_WithKeyIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	UWidgetAnimation* Intro; // 0x240(0x08)
	UBorder* Border_BG; // 0x248(0x08)
	UTextBlock* DATA_ToolTipHeadline; // 0x250(0x08)
	UTextBlock* DATA_TooltipText; // 0x258(0x08)
	UImage* Image__Icon; // 0x260(0x08)
	UImage* Image_Outline; // 0x268(0x08)
	UOverlay* Overlay_Content; // 0x270(0x08)
	USizeBox* ToolTipSizer; // 0x278(0x08)
	FText Headline; // 0x280(0x18)
	FText Text; // 0x298(0x18)
	FVector2D Position; // 0x2b0(0x08)
	FVector2D Alignment; // 0x2b8(0x08)
	FActionIconMapping Icon; // 0x2c0(0x28)

	void FadeIn(float Duration);
	void SetWidth(float InWidthOverride);
	void SetMaxWidth(float MaxWidth);
	void SetMinWidth(float MinWidth);
	void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment);
	void SetData(FText Headline, FText Text, FActionIconMapping Icon);
	void SetTarget(UWidget* Target Widget);
	void PreConstruct(bool IsDesignTime);
	void Set Tool Tip Owner(UWidget* Owner);
	void ExecuteUbergraph_ToolTip_WithKeyIcon(int32_t EntryPoint);
};

