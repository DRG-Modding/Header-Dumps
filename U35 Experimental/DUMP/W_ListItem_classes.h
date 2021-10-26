// WidgetBlueprintGeneratedClass W_ListItem.W_ListItem_C
// Size: 0x298 (Inherited: 0x230)
struct UW_ListItem_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UButton* CullButton; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_2; 
	UPROPERTY(BlueprintReadWrite) UButton* SpawnButton; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* SpawnButtonText; 
	UPROPERTY(BlueprintReadWrite) FText Name; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Spawn Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Cull Requested; 
	UPROPERTY(BlueprintReadWrite) FName Object ID; 

	UFUNCTION(BlueprintCallable) void BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Spawnbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_ListItem(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Spawn Requested__DelegateSignature(FName Object ID);
	UFUNCTION(BlueprintCallable) void On Cull Requested__DelegateSignature(FName Object ID);
};

