// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Widget.UI_PipelineBuilder_Widget_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_PipelineBuilder_Widget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BarSlope; // 0x238(0x08)
	struct UImage* InvalidBackground; // 0x240(0x08)
	struct UFSDLabelWidget* LabelLength; // 0x248(0x08)
	struct UFSDLabelWidget* LabelObstruction; // 0x250(0x08)
	struct UFSDLabelWidget* LabelSlope; // 0x258(0x08)
	struct UProgressBar* ProgressBarLength; // 0x260(0x08)
	struct USlider* SliderElevation; // 0x268(0x08)
	struct USlider* SliderObstruction; // 0x270(0x08)
	struct UImage* ValidBackground; // 0x278(0x08)

	void SetUI(enum class EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent); // Function UI_PipelineBuilder_Widget.UI_PipelineBuilder_Widget_C.SetUI
	void SetState(enum class EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent); // Function UI_PipelineBuilder_Widget.UI_PipelineBuilder_Widget_C.SetState
	void ExecuteUbergraph_UI_PipelineBuilder_Widget(int32_t EntryPoint); // Function UI_PipelineBuilder_Widget.UI_PipelineBuilder_Widget_C.ExecuteUbergraph_UI_PipelineBuilder_Widget
};

