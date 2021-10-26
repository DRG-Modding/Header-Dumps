// WidgetBlueprintGeneratedClass Basic_ButtonMultiline.Basic_ButtonMultiline_C
// Size: 0x2c0 (Inherited: 0x230)
struct UBasic_ButtonMultiline_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_WindowBG_C* Basic_Menu_WindowBG; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Bottom; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_Top; 
	UPROPERTY(BlueprintReadWrite) UButton* Button_1; 
	UPROPERTY(BlueprintReadWrite) UImage* IMG_Brackets; 
	UPROPERTY(BlueprintReadWrite) UImage* IMG_Overlay; 
	UPROPERTY(BlueprintReadWrite) USizeBox* SizeBox_1; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TXT_ButtonText; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Clicked; 
	UPROPERTY(BlueprintReadWrite) FText Text; 
	UPROPERTY(BlueprintReadWrite) int32_t Font Size; 
	UPROPERTY(BlueprintReadWrite) FVector2D Button Size; 
	UPROPERTY(BlueprintReadWrite) bool Overlay; 
	UPROPERTY(BlueprintReadWrite) USoundBase* HoveredSound; 
	UPROPERTY(BlueprintReadWrite) USoundBase* PressedSound; 

	UFUNCTION(BlueprintCallable) void SetButtonText(FText NewParam);
	UFUNCTION(BlueprintCallable) void SetFontSize(int32_t NewParam);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Basic_ButtonMultiline(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Clicked__DelegateSignature();
};

