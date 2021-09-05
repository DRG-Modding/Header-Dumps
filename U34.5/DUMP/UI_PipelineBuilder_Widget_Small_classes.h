// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Widget_Small.UI_PipelineBuilder_Widget_Small_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_PipelineBuilder_Widget_Small_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_276; // 0x238(0x08)
	UOverlay* InvalidBox; // 0x240(0x08)
	UUI_GenericLabel_C* UI_GenericLabel; // 0x248(0x08)
	UOverlay* ValidBox; // 0x250(0x08)

	void SetStats(float Length, UFSDLabelWidget* DistTextBox, UFSDLabelWidget* VolumnTextBox);
	void SetState(enum class EPlaceableObstructionType BuildingState);
	void ExecuteUbergraph_UI_PipelineBuilder_Widget_Small(int32_t EntryPoint);
};

