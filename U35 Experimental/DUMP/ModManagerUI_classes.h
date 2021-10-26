// WidgetBlueprintGeneratedClass ModManagerUI.ModManagerUI_C
// Size: 0x298 (Inherited: 0x230)
struct UModManagerUI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* CloseButtonImage; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* CloseButtonLabel; 
	UPROPERTY(BlueprintReadWrite) UButton* CloseMenuButton; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* MainContentCanvas; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* ModAuthor; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* ModInfoPanel; 
	UPROPERTY(BlueprintReadWrite) UScrollBox* ModList; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* ModNameAndVersion; 
	UPROPERTY(BlueprintReadWrite) UWidgetSwitcher* ModUIHost; 
	UPROPERTY(BlueprintReadWrite) UScrollBox* ModUIScrollBox; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* WindowTitle; 
	UPROPERTY(BlueprintReadWrite) AModManager_C* Manager ; 

	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__ModList_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	UFUNCTION(BlueprintCallable) void BndEvt__ModUIScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ModManagerUI(int32_t EntryPoint);
};

