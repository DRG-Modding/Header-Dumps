// WidgetBlueprintGeneratedClass ITM_Job_Section_Header.ITM_Job_Section_Header_C
// Size: 0x260 (Inherited: 0x230)
struct UITM_Job_Section_Header_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* BG_Gradient; // 0x238(0x08)
	UTextBlock* TextBlock_Header; // 0x240(0x08)
	FText HeaderText; // 0x248(0x18)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Job_Section_Header(int32_t EntryPoint);
};

