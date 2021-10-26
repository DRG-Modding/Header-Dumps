// WidgetBlueprintGeneratedClass UI_SteamLoading.UI_SteamLoading_C
// Size: 0x2f8 (Inherited: 0x270)
struct UUI_SteamLoading_C : UWindowWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* FadeIn; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* FadeOut; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* BlinkText; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonScalable2_C* Basic_ButtonScalable2; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; 
	UPROPERTY(BlueprintReadWrite) UBlurBackground_C* BlurBackground; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* DisconnectReasonText; 
	UPROPERTY(BlueprintReadWrite) UImage* FadeOverlay; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TEXT_Header; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_1; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_2; 
	UPROPERTY(BlueprintReadWrite) UCircularThrobber* Twitch_Loading; 
	UPROPERTY(BlueprintReadWrite) UWarningBox_C* WarningBox; 
	UPROPERTY(BlueprintReadWrite) UWarningBox_C* WarningBox_1; 

	UFUNCTION(BlueprintCallable) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	UFUNCTION(BlueprintCallable) void FadeIt(bool FadeIn, float Duration);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Close();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_SteamLoading(int32_t EntryPoint);
};

