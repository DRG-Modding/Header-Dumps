// WidgetBlueprintGeneratedClass HUD_Modding_Downloads_Entry.HUD_Modding_Downloads_Entry_C
// Size: 0x296 (Inherited: 0x230)
struct UHUD_Modding_Downloads_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USizeBox* ContentSizeBox; // 0x238(0x08)
	UImage* Img_Completed; // 0x240(0x08)
	UBasic_Label_C* LabelModName; // 0x248(0x08)
	UUI_ModdingProgressBar_C* ModdingProgressBar; // 0x250(0x08)
	FString ModName; // 0x258(0x10)
	float Progress; // 0x268(0x04)
	FString PreviewName; // 0x270(0x10)
	bool PreviewDownloading; // 0x280(0x01)
	int32_t PreviewDownloaded; // 0x284(0x04)
	int32_t PreviewTotal; // 0x288(0x04)
	int32_t Downloaded; // 0x28c(0x04)
	int32_t Total; // 0x290(0x04)
	bool Downloading; // 0x294(0x01)
	bool IsFinished; // 0x295(0x01)

	void GetIsFinished(bool IsFinished);
	void Error(enum class EUGCPackageError InErrorType);
	void Finish();
	void GetProgress(float Progress);
	void GetModName(FString ModName);
	void SetProgress(FString InModName, bool InDownloading, int32_t InDownloaded, int32_t InTotal);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_Modding_Downloads_Entry(int32_t EntryPoint);
};

