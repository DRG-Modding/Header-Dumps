// WidgetBlueprintGeneratedClass LoreScreen_Template.LoreScreen_Template_C
// Size: 0x2c1 (Inherited: 0x230)
struct ULoreScreen_Template_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* MovieIntro; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UImage* HeaderImage; // 0x248(0x08)
	struct UImage* Image_Background; // 0x250(0x08)
	struct UImage* Image_Gradient; // 0x258(0x08)
	struct UImage* Image_MovieBackground; // 0x260(0x08)
	struct ULore_Content_Text_Header_C* Lore_Content_Text_Header; // 0x268(0x08)
	struct UImage* MovieCanvas; // 0x270(0x08)
	struct UOverlay* Overlay_Holder; // 0x278(0x08)
	struct UOverlay* Overlay_MovieCanvas; // 0x280(0x08)
	struct UNamedSlot* PutStuffHere; // 0x288(0x08)
	struct UScrollBox* ScrollBox_Holder; // 0x290(0x08)
	struct USizeBox* SizeBox_OuterSizer; // 0x298(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x2a0(0x08)
	struct UMediaTexture* MediaTexture; // 0x2a8(0x08)
	struct FMulticastInlineDelegate OnShown; // 0x2b0(0x10)
	bool CanScroll; // 0x2c0(0x01)

	void SetHeadline(struct FText SetHeadline, struct UTexture2D* Icon, struct FObjectiveMissionIcon MissionIcon); // Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline
	void PreConstruct(bool IsDesignTime); // Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct
	void SetHeaderMovie(struct UMediaSource* MediaSource); // Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie
	void SetHeaderImage(struct UTexture2D* HeaderImage, bool Strech, float VerticalFillPercent, bool UseGradient); // Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage
	void SetHeaderMaterial(struct UMaterialInterface* Material, struct FVector2D Size); // Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMaterial
	void OnOpened(struct FString OpenedUrl); // Function LoreScreen_Template.LoreScreen_Template_C.OnOpened
	void ExecuteUbergraph_LoreScreen_Template(int32_t EntryPoint); // Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template
	void OnShown__DelegateSignature(); // Function LoreScreen_Template.LoreScreen_Template_C.OnShown__DelegateSignature
};

