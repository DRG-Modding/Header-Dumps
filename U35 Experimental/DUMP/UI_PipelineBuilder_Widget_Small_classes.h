// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Widget_Small.UI_PipelineBuilder_Widget_Small_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_PipelineBuilder_Widget_Small_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_276; 
	UPROPERTY(BlueprintReadWrite) UOverlay* InvalidBox; 
	UPROPERTY(BlueprintReadWrite) UUI_GenericLabel_C* UI_GenericLabel; 
	UPROPERTY(BlueprintReadWrite) UOverlay* ValidBox; 

	UFUNCTION(BlueprintCallable) void SetStats(float Length, UFSDLabelWidget* DistTextBox, UFSDLabelWidget* VolumnTextBox);
	UFUNCTION(BlueprintCallable) void SetState(enum class EPlaceableObstructionType BuildingState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_PipelineBuilder_Widget_Small(int32_t EntryPoint);
};

