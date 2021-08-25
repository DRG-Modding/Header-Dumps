// WidgetBlueprintGeneratedClass ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_ServerEntry_TeamLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* PlayerIcon; // 0x238(0x08)
	struct UTextBlock* PlayerText; // 0x240(0x08)
	struct FSlateFontInfo ResourceFont; // 0x248(0x50)
	struct UTexture2D* Icon; // 0x298(0x08)
	struct FLinearColor IconTint; // 0x2a0(0x10)
	struct FText Text; // 0x2b0(0x18)

	void SetPlayerData(struct UTexture2D* InIcon, struct FLinearColor InIconTint, struct FText Text); // Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData
	void PreConstruct(bool IsDesignTime); // Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct
	void ExecuteUbergraph_ITM_ServerEntry_TeamLine(int32_t EntryPoint); // Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine
};

