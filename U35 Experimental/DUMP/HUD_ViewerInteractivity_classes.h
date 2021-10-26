// WidgetBlueprintGeneratedClass HUD_ViewerInteractivity.HUD_ViewerInteractivity_C
// Size: 0x268 (Inherited: 0x230)
struct UHUD_ViewerInteractivity_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Pulsing; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* MessageTextBlock; 
	UPROPERTY(BlueprintReadWrite) UBackgroundBlur* Notification; 
	UPROPERTY(BlueprintReadWrite) TArray<FString> Pending Notifications; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle Queue Timer; 

	UFUNCTION(BlueprintCallable) void Add Notification(FString Notification Text);
	UFUNCTION(BlueprintCallable) void Set Notification Text(FString Text);
	UFUNCTION(BlueprintCallable) void Event Queue Timer Tick();
	UFUNCTION(BlueprintCallable) void OnInitialized();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_ViewerInteractivity(int32_t EntryPoint);
};

