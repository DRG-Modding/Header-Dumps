// WidgetBlueprintGeneratedClass ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_ServerEntry_TeamLine_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* PlayerIcon; // 0x238(0x08)
	UTextBlock* PlayerText; // 0x240(0x08)
	FSlateFontInfo ResourceFont; // 0x248(0x50)
	UTexture2D* Icon; // 0x298(0x08)
	FLinearColor IconTint; // 0x2a0(0x10)
	FText Text; // 0x2b0(0x18)

	void SetPlayerData(UTexture2D* InIcon, FLinearColor InIconTint, FText Text);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_ServerEntry_TeamLine(int32_t EntryPoint);
};

