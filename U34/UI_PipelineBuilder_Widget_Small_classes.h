// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Widget_Small.UI_PipelineBuilder_Widget_Small_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_PipelineBuilder_Widget_Small_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_276; // 0x238(0x08)
	struct UOverlay* InvalidBox; // 0x240(0x08)
	struct UUI_GenericLabel_C* UI_GenericLabel; // 0x248(0x08)
	struct UOverlay* ValidBox; // 0x250(0x08)

	void SetStats(float Length, struct UFSDLabelWidget* DistTextBox, struct UFSDLabelWidget* VolumnTextBox); // Function UI_PipelineBuilder_Widget_Small.UI_PipelineBuilder_Widget_Small_C.SetStats
	void SetState(enum class EPlaceableObstructionType BuildingState); // Function UI_PipelineBuilder_Widget_Small.UI_PipelineBuilder_Widget_Small_C.SetState
	void ExecuteUbergraph_UI_PipelineBuilder_Widget_Small(int32_t EntryPoint); // Function UI_PipelineBuilder_Widget_Small.UI_PipelineBuilder_Widget_Small_C.ExecuteUbergraph_UI_PipelineBuilder_Widget_Small
};

