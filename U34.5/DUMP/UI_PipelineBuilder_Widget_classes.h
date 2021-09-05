// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Widget.UI_PipelineBuilder_Widget_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_PipelineBuilder_Widget_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BarSlope; // 0x238(0x08)
	UImage* InvalidBackground; // 0x240(0x08)
	UFSDLabelWidget* LabelLength; // 0x248(0x08)
	UFSDLabelWidget* LabelObstruction; // 0x250(0x08)
	UFSDLabelWidget* LabelSlope; // 0x258(0x08)
	UProgressBar* ProgressBarLength; // 0x260(0x08)
	USlider* SliderElevation; // 0x268(0x08)
	USlider* SliderObstruction; // 0x270(0x08)
	UImage* ValidBackground; // 0x278(0x08)

	void SetUI(enum class EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent);
	void SetState(enum class EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent);
	void ExecuteUbergraph_UI_PipelineBuilder_Widget(int32_t EntryPoint);
};

