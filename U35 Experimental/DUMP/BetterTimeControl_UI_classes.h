// WidgetBlueprintGeneratedClass BetterTimeControl_UI.BetterTimeControl_UI_C
// Size: 0x2e0 (Inherited: 0x230)
struct UBetterTimeControl_UI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UButton* BtnChangeHUD; 
	UPROPERTY(BlueprintReadWrite) UButton* BtnResetSlider; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* HideToClient; 
	UPROPERTY(BlueprintReadWrite) UInputKeySelector* IKSDecrement; 
	UPROPERTY(BlueprintReadWrite) UInputKeySelector* IKSIncrement; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* OverallVBox; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* ShowToClient; 
	UPROPERTY(BlueprintReadWrite) USlider* TimeSlider; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TxtSliderVal; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate TimeControl; 
	UPROPERTY(BlueprintReadWrite) float TimeDilation; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate IKSDecrementChanged; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate IKSIncrementChanged; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate ToggleHUD; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate ResetSlider; 
	UPROPERTY(BlueprintReadWrite) FNone* SaveData; 

	UFUNCTION(BlueprintCallable) FText Get_Value_Text_1();
	UFUNCTION(BlueprintCallable) void BndEvt__TimeSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	UFUNCTION(BlueprintCallable) void BndEvt__IKSDecrement_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
	UFUNCTION(BlueprintCallable) void BndEvt__IKSIncrement_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
	UFUNCTION(BlueprintCallable) void BndEvt__BtnChangeHUD_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__BtnResetSlider_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BetterTimeControl_UI(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void ResetSlider__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ToggleHUD__DelegateSignature();
	UFUNCTION(BlueprintCallable) void IKSIncrementChanged__DelegateSignature(FKey NewKey);
	UFUNCTION(BlueprintCallable) void IKSDecrementChanged__DelegateSignature(FKey NewKey);
	UFUNCTION(BlueprintCallable) void TimeControl__DelegateSignature(float NewTimeValue);
};

