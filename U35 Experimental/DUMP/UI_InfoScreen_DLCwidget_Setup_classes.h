// WidgetBlueprintGeneratedClass UI_InfoScreen_DLCwidget_Setup.UI_InfoScreen_DLCwidget_Setup_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_InfoScreen_DLCwidget_Setup_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Idle; 
	UPROPERTY(BlueprintReadWrite) UButton* Button_1; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_BG; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Flash; 
	UPROPERTY(BlueprintReadWrite) UTexture2D* Image; 
	UPROPERTY(BlueprintReadWrite) UGameDLC* GameDLC; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnClicked; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnHovered; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnUnhovered; 

	UFUNCTION(BlueprintCallable) void PlayAnim();
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_InfoScreen_DLCwidget_Setup(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnUnhovered__DelegateSignature(UGameDLC* dlc);
	UFUNCTION(BlueprintCallable) void OnHovered__DelegateSignature(UGameDLC* dlc);
	UFUNCTION(BlueprintCallable) void OnClicked__DelegateSignature(UGameDLC* dlc);
};

