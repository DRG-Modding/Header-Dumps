// WidgetBlueprintGeneratedClass ITM_Modding_ModioModName.ITM_Modding_ModioModName_C
// Size: 0x292 (Inherited: 0x230)
struct UITM_Modding_ModioModName_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UButton* LinkButton; 
	UPROPERTY(BlueprintReadWrite) UUI_ModdingProgressBar_C* ModdingProgressBar; 
	UPROPERTY(BlueprintReadWrite) UCircularThrobber* ModName_Loading; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* Modname_Text; 
	UPROPERTY(BlueprintReadWrite) FString ModName; 
	UPROPERTY(BlueprintReadWrite) float LoadingRadius; 
	UPROPERTY(BlueprintReadWrite) int32_t FontSize; 
	UPROPERTY(BlueprintReadWrite) FString ModURL; 
	UPROPERTY(BlueprintReadWrite) FString ModId; 
	UPROPERTY(BlueprintReadWrite) bool Finished; 
	UPROPERTY(BlueprintReadWrite) enum class EUGCApprovalStatus ModioModStatus; 

	UFUNCTION(BlueprintCallable) void OnModOverlayClosed(FString LastURL);
	UFUNCTION(BlueprintCallable) void GetModStatus(enum class EUGCApprovalStatus Status);
	UFUNCTION(BlueprintCallable) void OnDownloadExtractMod(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	UFUNCTION(BlueprintCallable) void GetModName(FString ModName);
	UFUNCTION(BlueprintCallable) void GetModId(FString ModId);
	UFUNCTION(BlueprintCallable) void SetValues(FString InModName);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void OnModioName(FString ModioModName, FString ModioModVersion, FString ModioModURL, enum class EUGCApprovalStatus ModioModStatus);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void OnModDownloadExtractProgressFinished_Event(FString ModName, FString ModId);
	UFUNCTION(BlueprintCallable) void Destruct();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ITM_Modding_ModioModName(int32_t EntryPoint);
};

