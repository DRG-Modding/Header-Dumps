// WidgetBlueprintGeneratedClass ITM_Modding_ModioModName.ITM_Modding_ModioModName_C
// Size: 0x292 (Inherited: 0x230)
struct UITM_Modding_ModioModName_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* LinkButton; // 0x238(0x08)
	UUI_ModdingProgressBar_C* ModdingProgressBar; // 0x240(0x08)
	UCircularThrobber* ModName_Loading; // 0x248(0x08)
	UTextBlock* Modname_Text; // 0x250(0x08)
	FString ModName; // 0x258(0x10)
	float LoadingRadius; // 0x268(0x04)
	int32_t FontSize; // 0x26c(0x04)
	FString ModURL; // 0x270(0x10)
	FString ModId; // 0x280(0x10)
	bool Finished; // 0x290(0x01)
	enum class EUGCApprovalStatus ModioModStatus; // 0x291(0x01)

	void GetModStatus(enum class EUGCApprovalStatus Status);
	void OnDownloadExtractMod(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void GetModName(FString ModName);
	void GetModId(FString ModId);
	void SetValues(FString InModName);
	void Construct();
	void OnModioName(FString ModioModName, FString ModioModVersion, FString ModioModURL, enum class EUGCApprovalStatus ModioModStatus);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnModDownloadExtractProgressFinished_Event(FString ModName, FString ModId);
	void ExecuteUbergraph_ITM_Modding_ModioModName(int32_t EntryPoint);
};

