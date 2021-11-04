// WidgetBlueprintGeneratedClass UI_ModdingProgressBar.UI_ModdingProgressBar_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_ModdingProgressBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UProgressBar* ActionProgressBar; // 0x238(0x08)
	USizeBox* HeightSizeBox; // 0x240(0x08)
	UBasic_Label_C* LabelAction; // 0x248(0x08)
	int32_t Height; // 0x250(0x04)
	bool PreviewDownloading; // 0x254(0x01)
	int32_t PreviewProgress; // 0x258(0x04)
	int32_t PreviewTotal; // 0x25c(0x04)
	int32_t Width; // 0x260(0x04)
	enum class EVerticalAlignment VerticalAlignment; // 0x264(0x01)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x265(0x01)
	bool IsDownloading; // 0x266(0x01)
	int32_t CurrentProgress; // 0x268(0x04)
	int32_t CurrentTotal; // 0x26c(0x04)

	void GetTotal(int32_t Total);
	void Error(enum class EUGCPackageError InErrorType);
	void FinishExtracting();
	FText Int2Text(int32_t Value);
	void SetProgress(bool Downloading, int32_t Progress, int32_t Total);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ModdingProgressBar(int32_t EntryPoint);
};

