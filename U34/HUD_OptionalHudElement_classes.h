// WidgetBlueprintGeneratedClass HUD_OptionalHudElement.HUD_OptionalHudElement_C
// Size: 0x24a (Inherited: 0x230)
struct UHUD_OptionalHudElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UNamedSlot* Content; // 0x238(0x08)
	struct UHUDVisibilityGroup* VisibilityGroup; // 0x240(0x08)
	enum class ESlateVisibility VisibleMode; // 0x248(0x01)
	enum class ESlateVisibility HiddenMode; // 0x249(0x01)

	void Construct(); // Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.Construct
	void ExecuteUbergraph_HUD_OptionalHudElement(int32_t EntryPoint); // Function HUD_OptionalHudElement.HUD_OptionalHudElement_C.ExecuteUbergraph_HUD_OptionalHudElement
};

