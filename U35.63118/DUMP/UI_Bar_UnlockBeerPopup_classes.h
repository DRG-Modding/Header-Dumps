// WidgetBlueprintGeneratedClass UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C
// Size: 0x2d8 (Inherited: 0x270)
struct UUI_Bar_UnlockBeerPopup_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* Fill; // 0x278(0x08)
	UBlurBackground_C* BlurBackground; // 0x280(0x08)
	UImage* Glow; // 0x288(0x08)
	UImage* ICON_label; // 0x290(0x08)
	UImage* Image_1; // 0x298(0x08)
	UImage* Image_105; // 0x2a0(0x08)
	UProgressBar* ProgressBar_BeerBG; // 0x2a8(0x08)
	UProgressBar* ProgressBar_BeerFG; // 0x2b0(0x08)
	UUI_RunningMultiText_C* UI_RunningMultiText; // 0x2b8(0x08)
	UDrinkableDataAsset* DrinkableData; // 0x2c0(0x08)
	FMulticastInlineDelegate OnUnlockAnimFinished; // 0x2c8(0x10)

	void SequenceEvent__ENTRYPOINTUI_Bar_UnlockBeerPopup_1();
	void SetDrink(UDrinkableDataAsset* InDrinkableData);
	void OnTurnOffTextRunner();
	void OnShown();
	void OnClosed();
	void ExecuteUbergraph_UI_Bar_UnlockBeerPopup(int32_t EntryPoint);
	void OnUnlockAnimFinished__DelegateSignature();
};

