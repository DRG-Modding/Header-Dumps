// WidgetBlueprintGeneratedClass LoreScreen_Template.LoreScreen_Template_C
// Size: 0x2c1 (Inherited: 0x230)
struct ULoreScreen_Template_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* MovieIntro; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UImage* HeaderImage; // 0x248(0x08)
	UImage* Image_Background; // 0x250(0x08)
	UImage* Image_Gradient; // 0x258(0x08)
	UImage* Image_MovieBackground; // 0x260(0x08)
	ULore_Content_Text_Header_C* Lore_Content_Text_Header; // 0x268(0x08)
	UImage* MovieCanvas; // 0x270(0x08)
	UOverlay* Overlay_Holder; // 0x278(0x08)
	UOverlay* Overlay_MovieCanvas; // 0x280(0x08)
	UNamedSlot* PutStuffHere; // 0x288(0x08)
	UScrollBox* ScrollBox_Holder; // 0x290(0x08)
	USizeBox* SizeBox_OuterSizer; // 0x298(0x08)
	UMediaPlayer* MediaPlayer; // 0x2a0(0x08)
	UMediaTexture* MediaTexture; // 0x2a8(0x08)
	FMulticastInlineDelegate OnShown; // 0x2b0(0x10)
	bool CanScroll; // 0x2c0(0x01)

	void SetHeadline(FText SetHeadline, UTexture2D* Icon, FObjectiveMissionIcon MissionIcon);
	void PreConstruct(bool IsDesignTime);
	void SetHeaderMovie(UMediaSource* MediaSource);
	void SetHeaderImage(UTexture2D* HeaderImage, bool Strech, float VerticalFillPercent, bool UseGradient);
	void SetHeaderMaterial(UMaterialInterface* Material, FVector2D Size);
	void OnOpened(FString OpenedUrl);
	void ExecuteUbergraph_LoreScreen_Template(int32_t EntryPoint);
	void OnShown__DelegateSignature();
};

