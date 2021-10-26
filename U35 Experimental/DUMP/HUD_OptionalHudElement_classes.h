// WidgetBlueprintGeneratedClass HUD_OptionalHudElement.HUD_OptionalHudElement_C
// Size: 0x24a (Inherited: 0x230)
struct UHUD_OptionalHudElement_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UNamedSlot* Content; // 0x238(0x08)
	UHUDVisibilityGroup* VisibilityGroup; // 0x240(0x08)
	enum class ESlateVisibility VisibleMode; // 0x248(0x01)
	enum class ESlateVisibility HiddenMode; // 0x249(0x01)

	void Construct();
	void ExecuteUbergraph_HUD_OptionalHudElement(int32_t EntryPoint);
};

