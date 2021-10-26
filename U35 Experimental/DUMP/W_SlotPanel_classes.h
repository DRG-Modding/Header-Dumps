// WidgetBlueprintGeneratedClass W_SlotPanel.W_SlotPanel_C
// Size: 0x268 (Inherited: 0x230)
struct UW_SlotPanel_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UNamedSlot* NamedSlot_195; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* RowTextBlock; 
	UPROPERTY(BlueprintReadWrite) UImage* Separator; 
	UPROPERTY(BlueprintReadWrite) FText Row Name; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_SlotPanel(int32_t EntryPoint);
};

