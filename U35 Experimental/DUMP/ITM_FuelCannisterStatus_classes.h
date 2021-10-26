// WidgetBlueprintGeneratedClass ITM_FuelCannisterStatus.ITM_FuelCannisterStatus_C
// Size: 0x271 (Inherited: 0x230)
struct UITM_FuelCannisterStatus_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* FuelProgressBar; 
	UPROPERTY(BlueprintReadWrite) UImage* Img_Complete; 
	UPROPERTY(BlueprintReadWrite) UImage* Img_Outline; 
	UPROPERTY(BlueprintReadWrite) UITM_CharacterIcon_C* ITM_CharacterIcon; 
	UPROPERTY(BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_1; 
	UPROPERTY(BlueprintReadWrite) float MaxLoad; 
	UPROPERTY(BlueprintReadWrite) int32_t CannisterIndex; 
	UPROPERTY(BlueprintReadWrite) AExtractorItem* extractor; 
	UPROPERTY(BlueprintReadWrite) bool Full; 

	UFUNCTION(BlueprintCallable) void SetProgress(float CurrentLoad);
	UFUNCTION(BlueprintCallable) void Reset();
	UFUNCTION(BlueprintCallable) bool ReadyForExtractor();
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void OnCurrentLoadChangedEvent(float FloatValue);
	UFUNCTION(BlueprintCallable) void SetExtractor(AExtractorItem* extractor);
	UFUNCTION(BlueprintCallable) void OnDestroyed(AActor* DestroyedActor);
	UFUNCTION(BlueprintCallable) void CharacterChanged(ACharacter* Character);
	UFUNCTION(BlueprintCallable) void ForceFull();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ITM_FuelCannisterStatus(int32_t EntryPoint);
};

