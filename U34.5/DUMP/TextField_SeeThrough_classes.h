// WidgetBlueprintGeneratedClass TextField_SeeThrough.TextField_SeeThrough_C
// Size: 0x265 (Inherited: 0x230)
struct UTextField_SeeThrough_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* TextAnim; // 0x238(0x08)
	UBorder* Border_1; // 0x240(0x08)
	UTextBlock* TXT_Main; // 0x248(0x08)
	TArray<FText> texts; // 0x250(0x10)
	int32_t TextSize; // 0x260(0x04)
	bool ShowBG; // 0x264(0x01)

	void SetShowBG(bool ShowBG);
	void SetTextSize(int32_t TextSize);
	void SetText(FText InText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TextField_SeeThrough(int32_t EntryPoint);
};

