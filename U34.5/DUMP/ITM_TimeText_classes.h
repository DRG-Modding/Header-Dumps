// WidgetBlueprintGeneratedClass ITM_TimeText.ITM_TimeText_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_TimeText_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Text_Timer; // 0x238(0x08)
	FSlateFontInfo Font; // 0x240(0x50)

	void SetData(FTimespan Timespan);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_TimeText(int32_t EntryPoint);
};

