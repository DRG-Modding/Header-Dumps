// WidgetBlueprintGeneratedClass ITM_PendingMod.ITM_PendingMod_C
// Size: 0x299 (Inherited: 0x230)
struct UITM_PendingMod_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Background; // 0x238(0x08)
	UImage* Image_Separator; // 0x240(0x08)
	UBorder* MainBorder; // 0x248(0x08)
	UUI_ModdingProgressBar_C* ModdingProgressBar; // 0x250(0x08)
	UTextBlock* ModNameTextBox; // 0x258(0x08)
	UTextBlock* PendingLongText; // 0x260(0x08)
	UTextBlock* PendingShortText; // 0x268(0x08)
	UWidgetSwitcher* StateSwitcher; // 0x270(0x08)
	FString ModName; // 0x278(0x10)
	FMulticastInlineDelegate OnActivationChanged; // 0x288(0x10)
	bool PendingInstall; // 0x298(0x01)

	void OnDownloadExtractProgress(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void SetColors();
	void SetData(FString InModName, bool InPendingInstall);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_PendingMod(int32_t EntryPoint);
	void OnActivationChanged__DelegateSignature();
};

