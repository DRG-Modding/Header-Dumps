// WidgetBlueprintGeneratedClass UI_InfoScreen_DLCwidget.UI_InfoScreen_DLCwidget_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_InfoScreen_DLCwidget_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Hover; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Click; 
	UPROPERTY(BlueprintReadWrite) UButton* BannerButton; 
	UPROPERTY(BlueprintReadWrite) USizeBox* BannerSizer; 
	UPROPERTY(BlueprintReadWrite) UWidgetSwitcher* SwitcherDLC; 
	UPROPERTY(BlueprintReadWrite) float Width; 
	UPROPERTY(BlueprintReadWrite) float SegmentTime (seconds); 
	UPROPERTY(BlueprintReadWrite) TArray<UGameDLC*> SteamDLCs; 
	UPROPERTY(BlueprintReadWrite) TArray<UGameDLC*> XboxDLCs; 
	UPROPERTY(BlueprintReadWrite) TArray<UGameDLC*> PS4DLCs; 

	UFUNCTION(BlueprintCallable) void GetAvailableDLCs(TArray<UGameDLC*> DLCs);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void ShowNextWidget();
	UFUNCTION(BlueprintCallable) void On Banner Clicked(UGameDLC* dlc);
	UFUNCTION(BlueprintCallable) void BndEvt__BannerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__BannerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void AnimClick();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_InfoScreen_DLCwidget(int32_t EntryPoint);
};

