// WidgetBlueprintGeneratedClass 041_ManagerUI.041_ManagerUI_C
// Size: 0x270 (Inherited: 0x230)
struct U041_ManagerUI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Chutes; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* ExtendedMats; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Legs; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Lights; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* MainBody; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* UUUCompat; 
	UPROPERTY(BlueprintReadWrite) AMod041_C* Main Mod; 

	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__UUUCompat_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__ExtendedMats_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__MainBody_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Legs_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Chutes_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Lights_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_041_ManagerUI(int32_t EntryPoint);
};

