// WidgetBlueprintGeneratedClass ModManagerNotificationUI.ModManagerNotificationUI_C
// Size: 0x280 (Inherited: 0x230)
struct UModManagerNotificationUI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBackgroundBlur* Blur; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* KeyBinding; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* MainContentCanvas; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* ModsLoaded; 
	UPROPERTY(BlueprintReadWrite) FText MenuKeyBinding; 
	UPROPERTY(BlueprintReadWrite) int32_t ModCount; 
	UPROPERTY(BlueprintReadWrite) float TimerRate; 
	UPROPERTY(BlueprintReadWrite) float Fade Duration; 
	UPROPERTY(BlueprintReadWrite) float X; 

	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void Fade();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ModManagerNotificationUI(int32_t EntryPoint);
};

