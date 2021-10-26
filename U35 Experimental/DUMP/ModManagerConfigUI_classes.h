// WidgetBlueprintGeneratedClass ModManagerConfigUI.ModManagerConfigUI_C
// Size: 0x270 (Inherited: 0x230)
struct UModManagerConfigUI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* KeyBindingBox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* NotificationsCheckBox; 
	UPROPERTY(BlueprintReadWrite) UButton* RecordButton; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* RecordButtonText; 
	UPROPERTY(BlueprintReadWrite) TArray<FKey> DownKeys; 
	UPROPERTY(BlueprintReadWrite) FString DownKeysText; 

	UFUNCTION(BlueprintCallable) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	UFUNCTION(BlueprintCallable) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
};

