// WidgetBlueprintGeneratedClass 041_MatSelectionUI.041_MatSelectionUI_C
// Size: 0x7a8 (Inherited: 0x230)
struct U041_MatSelectionUI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UButton* ChutesMisc; 
	UPROPERTY(BlueprintReadWrite) UButton* Clear; 
	UPROPERTY(BlueprintReadWrite) UButton* Close; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* CurrentPage; 
	UPROPERTY(BlueprintReadWrite) UButton* LegsTopBody; 
	UPROPERTY(BlueprintReadWrite) UButton* Lights; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* LoadedMats; 
	UPROPERTY(BlueprintReadWrite) UButton* MainBody; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* MatName; 
	UPROPERTY(BlueprintReadWrite) UButton* NextPage; 
	UPROPERTY(BlueprintReadWrite) UButton* PreviousPage; 
	UPROPERTY(BlueprintReadWrite) UButton* Randomise; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* RandomisePerMission; 
	UPROPERTY(BlueprintReadWrite) UComboBoxString* SaveSlot; 
	UPROPERTY(BlueprintReadWrite) FButtonStyle Active Button Style; 
	UPROPERTY(BlueprintReadWrite) FButtonStyle Inactive Button Style; 
	UPROPERTY(BlueprintReadWrite) AMod041_C* Main Mod; 
	UPROPERTY(BlueprintReadWrite) int32_t Total Pages; 
	UPROPERTY(BlueprintReadWrite) int32_t Current Page; 

	UFUNCTION(BlueprintCallable) void BndEvt__ResetButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__ResetButton_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__ResetButton_4_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__ResetButton_6_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Close_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__PreviousPage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__NextPage_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__RandomisePerMission_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Lights_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Update Mat Count();
	UFUNCTION(BlueprintCallable) void BndEvt__SaveSlot_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, enum class ESelectInfo SelectionType);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_041_MatSelectionUI(int32_t EntryPoint);
};

