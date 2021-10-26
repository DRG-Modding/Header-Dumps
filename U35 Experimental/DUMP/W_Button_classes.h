// WidgetBlueprintGeneratedClass W_Button.W_Button_C
// Size: 0x270 (Inherited: 0x230)
struct UW_Button_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* ButtonTextBlock; 
	UPROPERTY(BlueprintReadWrite) UButton* SpawnButton; 
	UPROPERTY(BlueprintReadWrite) FText Button Text; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Button Clicked; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_Button(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Button Clicked__DelegateSignature();
};

