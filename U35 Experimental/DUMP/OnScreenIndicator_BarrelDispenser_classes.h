// WidgetBlueprintGeneratedClass OnScreenIndicator_BarrelDispenser.OnScreenIndicator_BarrelDispenser_C
// Size: 0x250 (Inherited: 0x238)
struct UOnScreenIndicator_BarrelDispenser_C : UFSDInWorldWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_582; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_2; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_OnScreenIndicator_BarrelDispenser(int32_t EntryPoint);
};

