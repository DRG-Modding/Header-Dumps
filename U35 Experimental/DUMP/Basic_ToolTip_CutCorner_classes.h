// WidgetBlueprintGeneratedClass Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C
// Size: 0x2b8 (Inherited: 0x230)
struct UBasic_ToolTip_CutCorner_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	UWidgetAnimation* Intro; // 0x240(0x08)
	UBorder* Border_BG; // 0x248(0x08)
	UTextBlock* DATA_ToolTipHeadline; // 0x250(0x08)
	UTextBlock* DATA_TooltipText; // 0x258(0x08)
	UImage* Image_Outline; // 0x260(0x08)
	UOverlay* Overlay_Content; // 0x268(0x08)
	USizeBox* ToolTipSizer; // 0x270(0x08)
	FText Headline; // 0x278(0x18)
	FText Text; // 0x290(0x18)
	FVector2D Position; // 0x2a8(0x08)
	FVector2D Alignment; // 0x2b0(0x08)

	void FadeIn(float Duration);
	void SetWidth(float InWidthOverride);
	void SetMaxWidth(float MaxWidth);
	void SetMinWidth(float MinWidth);
	void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment);
	void SetText(FText Headline, FText Text);
	void SetTarget(UWidget* Target Widget);
	void PreConstruct(bool IsDesignTime);
	void Set Tool Tip Owner(UWidget* Owner);
	void ExecuteUbergraph_Basic_ToolTip_CutCorner(int32_t EntryPoint);
};

