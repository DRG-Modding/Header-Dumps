// WidgetBlueprintGeneratedClass ITM_TimeText.ITM_TimeText_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_TimeText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* Text_Timer; // 0x238(0x08)
	struct FSlateFontInfo Font; // 0x240(0x50)

	void SetData(struct FTimespan Timespan); // Function ITM_TimeText.ITM_TimeText_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_TimeText.ITM_TimeText_C.PreConstruct
	void ExecuteUbergraph_ITM_TimeText(int32_t EntryPoint); // Function ITM_TimeText.ITM_TimeText_C.ExecuteUbergraph_ITM_TimeText
};

