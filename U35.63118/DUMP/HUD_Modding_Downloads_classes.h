// WidgetBlueprintGeneratedClass HUD_Modding_Downloads.HUD_Modding_Downloads_C
// Size: 0x2e9 (Inherited: 0x230)
struct UHUD_Modding_Downloads_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimOpenClose; // 0x238(0x08)
	UVerticalBox* EntryBox; // 0x240(0x08)
	UTextBlock* TextHeadline; // 0x248(0x08)
	FString PreviewName; // 0x250(0x10)
	TArray<FString> PreviewPendingNames; // 0x260(0x10)
	bool PreviewDownloading; // 0x270(0x01)
	int32_t PreviewProgress; // 0x274(0x04)
	int32_t PreviewTotal; // 0x278(0x04)
	FTimerHandle HideHandle; // 0x280(0x08)
	bool IsOpen; // 0x288(0x01)
	bool Downloading; // 0x289(0x01)
	UHUD_Modding_Downloads_Entry_C* CurrentEntry; // 0x290(0x08)
	TMap<FString, enum class EUGCPackageError> PreviewFailed; // 0x298(0x50)
	bool IsDesignTime; // 0x2e8(0x01)

	void ShowFailedToInstall(TMap<FString, enum class EUGCPackageError> InFailed);
	void SetOpen(bool InIsOpen);
	void GetEntry(FString InModName, UHUD_Modding_Downloads_Entry_C* OutEntry, FString OutName);
	void SetDownloadProgress(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void Construct();
	void OnErrorInstalling(FString ModName, enum class EUGCPackageError ErrorType);
	void PreConstruct(bool IsDesignTime);
	void OnDownloadProgress(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void OnAnimFinished();
	void HideFromHUD();
	void Destruct();
	void Simulate();
	void OnDownloadFinished(FString ModName, FString ModId);
	void ExecuteUbergraph_HUD_Modding_Downloads(int32_t EntryPoint);
};
