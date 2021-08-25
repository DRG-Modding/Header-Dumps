// WidgetBlueprintGeneratedClass Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C
// Size: 0x260 (Inherited: 0x230)
struct UWidget_HandheldTablet_UseProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines; // 0x238(0x08)
	struct UImage* UseImage; // 0x240(0x08)
	struct UProgressBar* UseProgress; // 0x248(0x08)
	struct APlayerCharacter* Character; // 0x250(0x08)
	struct UUsableComponentBase* Usable; // 0x258(0x08)

	void UpdateIcon(); // Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.UpdateIcon
	void GetUsableIcon(struct UTexture2D* OutTexture); // Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.GetUsableIcon
	void UpdateProgress(); // Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.UpdateProgress
	void PreConstruct(bool IsDesignTime); // Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.PreConstruct
	void Construct(); // Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.Tick
	void ExecuteUbergraph_Widget_HandheldTablet_UseProgress(int32_t EntryPoint); // Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.ExecuteUbergraph_Widget_HandheldTablet_UseProgress
};

