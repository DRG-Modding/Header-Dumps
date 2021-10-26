// WidgetBlueprintGeneratedClass ITM_MenuBackground.ITM_MenuBackground_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_MenuBackground_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_BackgroundBlack; // 0x238(0x08)
	UImage* Image_BackgroundGradient; // 0x240(0x08)
	UImage* Image_GradientTop; // 0x248(0x08)
	FSlateColor TopTint; // 0x250(0x28)
	FSlateColor MiddleTint; // 0x278(0x28)
	FSlateColor BottomTint; // 0x2a0(0x28)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MenuBackground(int32_t EntryPoint);
};

