// WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_SaveSlot_Entry_ClassIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* PlayerIcon; // 0x238(0x08)
	struct UTextBlock* Text_Star; // 0x240(0x08)
	struct FSlateFontInfo ResourceFont; // 0x248(0x50)
	struct UTexture2D* Icon; // 0x298(0x08)
	struct FLinearColor IconTint; // 0x2a0(0x10)

	void SetPlayerData(struct UTexture2D* InIcon, struct FLinearColor InIconTint); // Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.SetPlayerData
	void PreConstruct(bool IsDesignTime); // Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.PreConstruct
	void ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon(int32_t EntryPoint); // Function ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C.ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon
};

