// WidgetBlueprintGeneratedClass UI_FuelLine_Builder.UI_FuelLine_Builder_C
// Size: 0x250 (Inherited: 0x230)
struct UUI_FuelLine_Builder_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UUI_AdvancedLabel_C* CancelLabel; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* DistanceProgress; 
	UPROPERTY(BlueprintReadWrite) UUI_AdvancedLabel_C* FireLabel; 

	UFUNCTION(BlueprintCallable) void SetProgress(float InPercent);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_FuelLine_Builder(int32_t EntryPoint);
};

