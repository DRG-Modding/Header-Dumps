// WidgetBlueprintGeneratedClass Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C
// Size: 0x2b8 (Inherited: 0x230)
struct UBasic_ToolTip_CutCorner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UBorder* Border_BG; // 0x248(0x08)
	struct UTextBlock* DATA_ToolTipHeadline; // 0x250(0x08)
	struct UTextBlock* DATA_TooltipText; // 0x258(0x08)
	struct UImage* Image_Outline; // 0x260(0x08)
	struct UOverlay* Overlay_Content; // 0x268(0x08)
	struct USizeBox* ToolTipSizer; // 0x270(0x08)
	struct FText Headline; // 0x278(0x18)
	struct FText Text; // 0x290(0x18)
	struct FVector2D Position; // 0x2a8(0x08)
	struct FVector2D Alignment; // 0x2b0(0x08)

	void FadeIn(float Duration); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.FadeIn
	void SetWidth(float InWidthOverride); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetWidth
	void SetMaxWidth(float MaxWidth); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetMaxWidth
	void SetMinWidth(float MinWidth); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetMinWidth
	void SetPostionAndAlignment(struct FVector2D InPosition, struct FVector2D InAlignment); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetPostionAndAlignment
	void SetText(struct FText Headline, struct FText Text); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetText
	void SetTarget(struct UWidget* Target Widget); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetTarget
	void PreConstruct(bool IsDesignTime); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.PreConstruct
	void Set Tool Tip Owner(struct UWidget* Owner); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.Set Tool Tip Owner
	void ExecuteUbergraph_Basic_ToolTip_CutCorner(int32_t EntryPoint); // Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.ExecuteUbergraph_Basic_ToolTip_CutCorner
};

