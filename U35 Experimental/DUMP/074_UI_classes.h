// WidgetBlueprintGeneratedClass 074_UI.074_UI_C
// Size: 0x264 (Inherited: 0x230)
struct U074_UI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* KillBoscos; 
	UPROPERTY(BlueprintReadWrite) UButton* KillButton; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* SpawnBosco; 
	UPROPERTY(BlueprintReadWrite) UButton* SpawnButton; 
	UPROPERTY(BlueprintReadWrite) UPanelWidget* ModMenuUI; 
	UPROPERTY(BlueprintReadWrite) float OriginalBlurStrength; 

	UFUNCTION(BlueprintCallable) void ShowMainMenu(UPanelWidget* Row);
	UFUNCTION(BlueprintCallable) void HideMainMenu(UPanelWidget* Row);
	UFUNCTION(BlueprintCallable) void BndEvt__KillButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_074_UI(int32_t EntryPoint);
};

