// WidgetBlueprintGeneratedClass ShowProfile_ToolTip.ShowProfile_ToolTip_C
// Size: 0x2c8 (Inherited: 0x230)
struct UShowProfile_ToolTip_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimFadeIn; // 0x238(0x08)
	UWidgetAnimation* Intro; // 0x240(0x08)
	UImage* BackgroundImage; // 0x248(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x250(0x08)
	UTextBlock* CountryTxt; // 0x258(0x08)
	UTextBlock* ServernameTxt; // 0x260(0x08)
	URichTextSizable* ShowProfileTxt; // 0x268(0x08)
	FText Text; // 0x270(0x18)
	FVector2D Position; // 0x288(0x08)
	FVector2D Alignment; // 0x290(0x08)
	FText serverName; // 0x298(0x18)
	FText CountryName; // 0x2b0(0x18)

	void FadeIn(float Duration);
	void SetPostionAndAlignment(FVector2D InPosition, FVector2D InAlignment);
	void SetText(FText ToolTip, FText Region, FText Name);
	void SetTarget(UWidget* Target Widget);
	void PreConstruct(bool IsDesignTime);
	void Set Tool Tip Owner(UWidget* Owner);
	void ExecuteUbergraph_ShowProfile_ToolTip(int32_t EntryPoint);
};

