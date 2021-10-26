// WidgetBlueprintGeneratedClass ITM_HealthBarPercentWWarning.ITM_HealthBarPercentWWarning_C
// Size: 0x269 (Inherited: 0x230)
struct UITM_HealthBarPercentWWarning_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* PingWarning; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_RightGradient; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_RightIcon; 
	UPROPERTY(BlueprintReadWrite) UImage* Line_RightPercent; 
	UPROPERTY(BlueprintReadWrite) UImage* Line_RightPercent2; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* Text_RightPercent; 
	UPROPERTY(BlueprintReadWrite) bool ShowUpLine; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void SetText(FText Text, bool PingWarning);
	UFUNCTION(BlueprintCallable) void PingFinished();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ITM_HealthBarPercentWWarning(int32_t EntryPoint);
};

