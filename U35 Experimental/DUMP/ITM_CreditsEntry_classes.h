// WidgetBlueprintGeneratedClass ITM_CreditsEntry.ITM_CreditsEntry_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_CreditsEntry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_Name; // 0x238(0x08)
	UTextBlock* DATA_Title; // 0x240(0x08)
	FText Title; // 0x248(0x18)
	FText Name; // 0x260(0x18)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_CreditsEntry(int32_t EntryPoint);
};

