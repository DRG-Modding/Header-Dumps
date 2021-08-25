// WidgetBlueprintGeneratedClass TextField_SeeThrough.TextField_SeeThrough_C
// Size: 0x265 (Inherited: 0x230)
struct UTextField_SeeThrough_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* TextAnim; // 0x238(0x08)
	struct UBorder* Border_1; // 0x240(0x08)
	struct UTextBlock* TXT_Main; // 0x248(0x08)
	struct TArray<struct FText> texts; // 0x250(0x10)
	int32_t TextSize; // 0x260(0x04)
	bool ShowBG; // 0x264(0x01)

	void SetShowBG(bool ShowBG); // Function TextField_SeeThrough.TextField_SeeThrough_C.SetShowBG
	void SetTextSize(int32_t TextSize); // Function TextField_SeeThrough.TextField_SeeThrough_C.SetTextSize
	void SetText(struct FText InText); // Function TextField_SeeThrough.TextField_SeeThrough_C.SetText
	void PreConstruct(bool IsDesignTime); // Function TextField_SeeThrough.TextField_SeeThrough_C.PreConstruct
	void ExecuteUbergraph_TextField_SeeThrough(int32_t EntryPoint); // Function TextField_SeeThrough.TextField_SeeThrough_C.ExecuteUbergraph_TextField_SeeThrough
};

