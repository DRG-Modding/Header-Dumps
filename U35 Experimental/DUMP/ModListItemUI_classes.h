// WidgetBlueprintGeneratedClass ModListItemUI.ModListItemUI_C
// Size: 0x2aa (Inherited: 0x230)
struct UModListItemUI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* ButtonText; 
	UPROPERTY(BlueprintReadWrite) UImage* Highlight; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* MainCanvas; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* ModEnabledCheckBox; 
	UPROPERTY(BlueprintReadWrite) UButton* OpenModUIButton; 
	UPROPERTY(BlueprintReadWrite) FString ModName; 
	UPROPERTY(BlueprintReadWrite) FString ModVersion; 
	UPROPERTY(BlueprintReadWrite) FString ModAuthor; 
	UPROPERTY(BlueprintReadWrite) int32_t ModUIIndex; 
	UPROPERTY(BlueprintReadWrite) bool ModAllowDisable; 
	UPROPERTY(BlueprintReadWrite) bool ModEnabled; 
	UPROPERTY(BlueprintReadWrite) UModManagerUI_C* MainUI; 
	UPROPERTY(BlueprintReadWrite) AModManager_C* ModManager; 
	UPROPERTY(BlueprintReadWrite) bool Initialised; 
	UPROPERTY(BlueprintReadWrite) bool Selected; 

	UFUNCTION(BlueprintCallable) void BndEvt__OpenUI_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__OpenUI_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__OpenUI_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__ModEnabledCheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void ForceSelectMod();
	UFUNCTION(BlueprintCallable) void Unselect();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ModListItemUI(int32_t EntryPoint);
};

