// WidgetBlueprintGeneratedClass Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C
// Size: 0x242 (Inherited: 0x230)
struct UBasic_InputSpecific_Widget_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UNamedSlot* Content; // 0x238(0x08)
	enum class ESlateVisibility ControllerVisibility; // 0x240(0x01)
	enum class ESlateVisibility OtherVisibility; // 0x241(0x01)

	void Construct();
	void OnInputSourceChanged(enum class EFSDInputSource InputSource);
	void ExecuteUbergraph_Basic_InputSpecific_Widget(int32_t EntryPoint);
};

