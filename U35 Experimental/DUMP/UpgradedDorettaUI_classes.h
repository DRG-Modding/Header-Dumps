// WidgetBlueprintGeneratedClass UpgradedDorettaUI.UpgradedDorettaUI_C
// Size: 0x360 (Inherited: 0x230)
struct UUpgradedDorettaUI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Defense1; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Deposit1; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Deposit2; 
	UPROPERTY(BlueprintReadWrite) UImage* DrilldozerIcon; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Light1; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Pipe1; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Pipe2; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Turret1; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Turret2; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Turret3; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Turret4; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Waste1; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Save Changes Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Turret 1 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Turret 2 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Turret 3 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Turret 4 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Deposit 1 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Deposit 2 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Pipe 1 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Pipe 2 Requested; 
	UPROPERTY(BlueprintReadWrite) UUpgradedDorettaSaveGame_C* Upgraded Doretta Save Game; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Light 1 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Waste 1 Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Defense 1 Requested; 

	UFUNCTION(BlueprintCallable) void Set Settings(UUpgradedDorettaSaveGame_C* Settings, bool Turret 1, bool Turret 2, bool Turret 3, bool Turret 4, bool Deposit 1, bool Deposit 2, bool Pipe 1, bool Pipe 2, bool Light 1, bool Waste 1, bool Defense 1);
	UFUNCTION(BlueprintCallable) void Get Settings(UUpgradedDorettaSaveGame_C* Settings);
	UFUNCTION(BlueprintCallable) void BndEvt__ToggleHalloween_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__ToggleDeposit1_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__ToggleDeposit2_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__ToggleTurret3_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__ToggleTurret4_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__TogglePipe1_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__TogglePipe2_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Turret1_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Speed_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Defense_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void BndEvt__Spotlight_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UpgradedDorettaUI(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void Defense 1 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Waste 1 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Light 1 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Pipe 2 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Pipe 1 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Deposit 2 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Deposit 1 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Turret 4 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Turret 3 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Turret 2 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Turret 1 Requested__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Save Changes Requested__DelegateSignature();
};

