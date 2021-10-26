// WidgetBlueprintGeneratedClass W_ProfileEntry.W_ProfileEntry_C
// Size: 0x2b0 (Inherited: 0x230)
struct UW_ProfileEntry_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UButton* EditButton; 
	UPROPERTY(BlueprintReadWrite) UImage* Image; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_2; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_709; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* LabelCount; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* LabelLoadoutA; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* LabelLoadoutB; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* LabelLoadoutC; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* LabelRandomPercentage; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TitleLabel; 
	UPROPERTY(BlueprintReadWrite) FGuid Spawn Profile ID; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Edit Button Clicked; 
	UPROPERTY(BlueprintReadWrite) bool Is Random Pooled; 
	UPROPERTY(BlueprintReadWrite) float Random Weight; 

	UFUNCTION(BlueprintCallable) void Set Random Percentage(float percentage);
	UFUNCTION(BlueprintCallable) void Set Count(int32_t count);
	UFUNCTION(BlueprintCallable) void Set Loadouts(bool Loadout A, bool Loadout B, bool Loadout C);
	UFUNCTION(BlueprintCallable) void Set Name(FString Title);
	UFUNCTION(BlueprintCallable) void Set Details(FGuid Profile ID, FString Title, bool Is Loadout A, bool Is Loadout B, bool Is Loadout C, int32_t Spawn Count, bool Is Random Pooled, float Random Weight);
	UFUNCTION(BlueprintCallable) void BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_ProfileEntry(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Edit Button Clicked__DelegateSignature(FGuid Profile ID);
};

