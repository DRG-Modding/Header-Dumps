// WidgetBlueprintGeneratedClass OnScreenIndicator_Arrow.OnScreenIndicator_Arrow_C
// Size: 0x248 (Inherited: 0x238)
struct UOnScreenIndicator_Arrow_C : UFSDInWorldWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Arrow; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_OnScreenIndicator_Arrow(int32_t EntryPoint);
};

