// WidgetBlueprintGeneratedClass HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C
// Size: 0x2c8 (Inherited: 0x250)
struct UHUDWarning_DrillDozerCellDestroyed_C : UHUDWarningWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* RightCellDead; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* LeftCellDead; 
	UPROPERTY(BlueprintReadWrite) UImage* BG_Gradient; 
	UPROPERTY(BlueprintReadWrite) UImage* DrillDozer_Background; 
	UPROPERTY(BlueprintReadWrite) UImage* DrillDozer_Background_Caterpillar; 
	UPROPERTY(BlueprintReadWrite) UImage* IconLeft; 
	UPROPERTY(BlueprintReadWrite) UImage* IconRight; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Left; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Main; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Right; 
	UPROPERTY(BlueprintReadWrite) UImage* NoiseImage; 
	UPROPERTY(BlueprintReadWrite) UOverlay* Overlay_Outer; 
	UPROPERTY(BlueprintReadWrite) USoundBase* PingSound; 
	UPROPERTY(BlueprintReadWrite) bool ShouldDestroyAfterPing; 
	UPROPERTY(BlueprintReadWrite) float TimeBetweenSound; 

	UFUNCTION(BlueprintCallable) void SetData(UTexture2D* Texture, USoundBase* PingSound);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void Ping(bool DestroyAfterPing);
	UFUNCTION(BlueprintCallable) void LeftFinished();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void RightFinished();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUDWarning_DrillDozerCellDestroyed(int32_t EntryPoint);
};

