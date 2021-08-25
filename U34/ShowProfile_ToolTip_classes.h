// WidgetBlueprintGeneratedClass ShowProfile_ToolTip.ShowProfile_ToolTip_C
// Size: 0x2c8 (Inherited: 0x230)
struct UShowProfile_ToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UImage* BackgroundImage; // 0x248(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x250(0x08)
	struct UTextBlock* CountryTxt; // 0x258(0x08)
	struct UTextBlock* ServernameTxt; // 0x260(0x08)
	struct URichTextSizable* ShowProfileTxt; // 0x268(0x08)
	struct FText Text; // 0x270(0x18)
	struct FVector2D Position; // 0x288(0x08)
	struct FVector2D Alignment; // 0x290(0x08)
	struct FText serverName; // 0x298(0x18)
	struct FText CountryName; // 0x2b0(0x18)

	void FadeIn(float Duration); // Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.FadeIn
	void SetPostionAndAlignment(struct FVector2D InPosition, struct FVector2D InAlignment); // Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetPostionAndAlignment
	void SetText(struct FText ToolTip, struct FText Region, struct FText Name); // Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetText
	void SetTarget(struct UWidget* Target Widget); // Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetTarget
	void PreConstruct(bool IsDesignTime); // Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.PreConstruct
	void Set Tool Tip Owner(struct UWidget* Owner); // Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.Set Tool Tip Owner
	void ExecuteUbergraph_ShowProfile_ToolTip(int32_t EntryPoint); // Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.ExecuteUbergraph_ShowProfile_ToolTip
};

