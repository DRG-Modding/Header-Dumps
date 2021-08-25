// WidgetBlueprintGeneratedClass UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C
// Size: 0x2d8 (Inherited: 0x270)
struct UUI_Bar_UnlockBeerPopup_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* Fill; // 0x278(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x280(0x08)
	struct UImage* Glow; // 0x288(0x08)
	struct UImage* ICON_label; // 0x290(0x08)
	struct UImage* Image_1; // 0x298(0x08)
	struct UImage* Image_105; // 0x2a0(0x08)
	struct UProgressBar* ProgressBar_BeerBG; // 0x2a8(0x08)
	struct UProgressBar* ProgressBar_BeerFG; // 0x2b0(0x08)
	struct UUI_RunningMultiText_C* UI_RunningMultiText; // 0x2b8(0x08)
	struct UDrinkableDataAsset* DrinkableData; // 0x2c0(0x08)
	struct FMulticastInlineDelegate OnUnlockAnimFinished; // 0x2c8(0x10)

	void SequenceEvent__ENTRYPOINTUI_Bar_UnlockBeerPopup_1(); // Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.SequenceEvent__ENTRYPOINTUI_Bar_UnlockBeerPopup_1
	void SetDrink(struct UDrinkableDataAsset* InDrinkableData); // Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.SetDrink
	void OnTurnOffTextRunner(); // Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnTurnOffTextRunner
	void OnShown(); // Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnShown
	void OnClosed(); // Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnClosed
	void ExecuteUbergraph_UI_Bar_UnlockBeerPopup(int32_t EntryPoint); // Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.ExecuteUbergraph_UI_Bar_UnlockBeerPopup
	void OnUnlockAnimFinished__DelegateSignature(); // Function UI_Bar_UnlockBeerPopup.UI_Bar_UnlockBeerPopup_C.OnUnlockAnimFinished__DelegateSignature
};

