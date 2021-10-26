// WidgetBlueprintGeneratedClass W_TabButton.W_TabButton_C
// Size: 0x271 (Inherited: 0x230)
struct UW_TabButton_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* Button_TextBlock; 
	UPROPERTY(BlueprintReadWrite) UButton* TabButton; 
	UPROPERTY(BlueprintReadWrite) FText Button Text; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Event Tab Button Clicked; 
	UPROPERTY(BlueprintReadWrite) bool Is Active State; 

	UFUNCTION(BlueprintCallable) void Set Active State(bool Active);
	UFUNCTION(BlueprintCallable) void Set Buttons Tint Alpha(float alpha);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_TabButton(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void Event Tab Button Clicked__DelegateSignature(FText Tab Name);
};

