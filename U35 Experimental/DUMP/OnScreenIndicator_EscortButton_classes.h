// WidgetBlueprintGeneratedClass OnScreenIndicator_EscortButton.OnScreenIndicator_EscortButton_C
// Size: 0x250 (Inherited: 0x238)
struct UOnScreenIndicator_EscortButton_C : UFSDInWorldWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Arrow; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Icon; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_OnScreenIndicator_EscortButton(int32_t EntryPoint);
};

