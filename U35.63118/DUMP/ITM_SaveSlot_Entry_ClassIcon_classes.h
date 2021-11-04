// WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_SaveSlot_Entry_ClassIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* PlayerIcon; // 0x238(0x08)
	UTextBlock* Text_Star; // 0x240(0x08)
	FSlateFontInfo ResourceFont; // 0x248(0x50)
	UTexture2D* Icon; // 0x298(0x08)
	FLinearColor IconTint; // 0x2a0(0x10)

	void SetPlayerData(UTexture2D* InIcon, FLinearColor InIconTint);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon(int32_t EntryPoint);
};

