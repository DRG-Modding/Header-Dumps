// WidgetBlueprintGeneratedClass Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C
// Size: 0x260 (Inherited: 0x230)
struct UWidget_HandheldTablet_UseProgress_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines; // 0x238(0x08)
	UImage* UseImage; // 0x240(0x08)
	UProgressBar* UseProgress; // 0x248(0x08)
	APlayerCharacter* Character; // 0x250(0x08)
	UUsableComponentBase* Usable; // 0x258(0x08)

	void UpdateIcon();
	void GetUsableIcon(UTexture2D* OutTexture);
	void UpdateProgress();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Widget_HandheldTablet_UseProgress(int32_t EntryPoint);
};

