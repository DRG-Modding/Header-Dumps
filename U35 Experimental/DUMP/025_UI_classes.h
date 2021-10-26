// WidgetBlueprintGeneratedClass 025_UI.025_UI_C
// Size: 0x2a8 (Inherited: 0x230)
struct U025_UI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* AllowClipping; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* BETC; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Bosco; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* DeathTransitionTime; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Doretta; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Molly; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* RememberZoom; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* ReviveTransitionTime; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* RotationSensitivity; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* TransitionTime; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* ZoomAmount; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* ZoomSpeed; 
	UPROPERTY(BlueprintReadWrite) U025_SaveData_C* Save Data; 
	UPROPERTY(BlueprintReadWrite) AMod025_C* Main Mod; 

	UFUNCTION(BlueprintCallable) void BndEvt__RotationSpeed_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	UFUNCTION(BlueprintCallable) void BndEvt__ZoomSpeed_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	UFUNCTION(BlueprintCallable) void BndEvt__TransitionSpeed_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__ZoomAmount_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	UFUNCTION(BlueprintCallable) void BndEvt__DeathTransitionTime_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	UFUNCTION(BlueprintCallable) void BndEvt__DeathTransitionTime_1_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	UFUNCTION(BlueprintCallable) void BndEvt__AllowClipping_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Doretta_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Bosco_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Molly_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__BETC_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__RememberZoom_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_025_UI(int32_t EntryPoint);
};

