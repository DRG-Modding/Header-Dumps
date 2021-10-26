// WidgetBlueprintGeneratedClass UI_BlackOverlay.UI_BlackOverlay_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_BlackOverlay_C : UFSDLevelLoadingPersistentWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* FullscreenImage; // 0x238(0x08)
	UUI_AdvancedLabel_C* LoaderText; // 0x240(0x08)
	UImage* ScaledImage; // 0x248(0x08)
	UImage* Shadow; // 0x250(0x08)
	UOverlay* TextOverlay; // 0x258(0x08)
	float Fade; // 0x260(0x04)
	bool ToSpaceRig; // 0x264(0x01)
	UTexture* loadingImage; // 0x268(0x08)

	void SetProgress(float InFade, bool InToSpacerig, UTexture* InLoadingImage);
	void PreConstruct(bool IsDesignTime);
	void SetFadeProgress(float Fade, bool ToSpaceRig, UTexture* loadingImage);
	void ExecuteUbergraph_UI_BlackOverlay(int32_t EntryPoint);
};

