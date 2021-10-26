// WidgetBlueprintGeneratedClass OnScreenIndicator_ActiveButton.OnScreenIndicator_ActiveButton_C
// Size: 0x258 (Inherited: 0x238)
struct UOnScreenIndicator_ActiveButton_C : UFSDInWorldWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Arrow; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Icon; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* RootCanvas; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_OnScreenIndicator_ActiveButton(int32_t EntryPoint);
};

