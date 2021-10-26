// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Widget.UI_PipelineBuilder_Widget_C
// Size: 0x280 (Inherited: 0x230)
struct UUI_PipelineBuilder_Widget_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* BarSlope; 
	UPROPERTY(BlueprintReadWrite) UImage* InvalidBackground; 
	UPROPERTY(BlueprintReadWrite) UFSDLabelWidget* LabelLength; 
	UPROPERTY(BlueprintReadWrite) UFSDLabelWidget* LabelObstruction; 
	UPROPERTY(BlueprintReadWrite) UFSDLabelWidget* LabelSlope; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* ProgressBarLength; 
	UPROPERTY(BlueprintReadWrite) USlider* SliderElevation; 
	UPROPERTY(BlueprintReadWrite) USlider* SliderObstruction; 
	UPROPERTY(BlueprintReadWrite) UImage* ValidBackground; 

	UFUNCTION(BlueprintCallable) void SetUI(enum class EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent);
	UFUNCTION(BlueprintCallable) void SetState(enum class EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_PipelineBuilder_Widget(int32_t EntryPoint);
};

