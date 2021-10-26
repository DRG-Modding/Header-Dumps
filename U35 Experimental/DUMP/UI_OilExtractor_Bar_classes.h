// WidgetBlueprintGeneratedClass UI_OilExtractor_Bar.UI_OilExtractor_Bar_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_OilExtractor_Bar_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Full; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* ProgressBar_42; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_71; 

	UFUNCTION(BlueprintCallable) void SetFilledPercentage(float PercentFull);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_OilExtractor_Bar(int32_t EntryPoint);
};

