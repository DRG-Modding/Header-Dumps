// WidgetBlueprintGeneratedClass W_TitleBar.W_TitleBar_C
// Size: 0x268 (Inherited: 0x230)
struct UW_TitleBar_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_157; 
	UPROPERTY(BlueprintReadWrite) FText Group Text; 
	UPROPERTY(BlueprintReadWrite) FString Game Object Name; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_TitleBar(int32_t EntryPoint);
};

