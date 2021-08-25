// WidgetBlueprintGeneratedClass ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C
// Size: 0x2e8 (Inherited: 0x230)
struct UToolTip_WithKeyIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UBorder* Border_BG; // 0x248(0x08)
	struct UTextBlock* DATA_ToolTipHeadline; // 0x250(0x08)
	struct UTextBlock* DATA_TooltipText; // 0x258(0x08)
	struct UImage* Image__Icon; // 0x260(0x08)
	struct UImage* Image_Outline; // 0x268(0x08)
	struct UOverlay* Overlay_Content; // 0x270(0x08)
	struct USizeBox* ToolTipSizer; // 0x278(0x08)
	struct FText Headline; // 0x280(0x18)
	struct FText Text; // 0x298(0x18)
	struct FVector2D Position; // 0x2b0(0x08)
	struct FVector2D Alignment; // 0x2b8(0x08)
	struct FActionIconMapping Icon; // 0x2c0(0x28)

	void FadeIn(float Duration); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.FadeIn
	void SetWidth(float InWidthOverride); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetWidth
	void SetMaxWidth(float MaxWidth); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMaxWidth
	void SetMinWidth(float MinWidth); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMinWidth
	void SetPostionAndAlignment(struct FVector2D InPosition, struct FVector2D InAlignment); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetPostionAndAlignment
	void SetData(struct FText Headline, struct FText Text, struct FActionIconMapping Icon); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetData
	void SetTarget(struct UWidget* Target Widget); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetTarget
	void PreConstruct(bool IsDesignTime); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.PreConstruct
	void Set Tool Tip Owner(struct UWidget* Owner); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.Set Tool Tip Owner
	void ExecuteUbergraph_ToolTip_WithKeyIcon(int32_t EntryPoint); // Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.ExecuteUbergraph_ToolTip_WithKeyIcon
};

