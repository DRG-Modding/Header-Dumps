// WidgetBlueprintGeneratedClass UI_PipelineBuilder_Crosshair.UI_PipelineBuilder_Crosshair_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_PipelineBuilder_Crosshair_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* Box; 
	UPROPERTY(BlueprintReadWrite) UImage* IMG_Status; 
	UPROPERTY(BlueprintReadWrite) UUI_GenericLabel_C* Txt_Status; 

	UFUNCTION(BlueprintCallable) void SetState(enum class EPlaceableObstructionType State);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_PipelineBuilder_Crosshair(int32_t EntryPoint);
};

