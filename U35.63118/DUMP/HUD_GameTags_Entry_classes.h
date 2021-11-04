// WidgetBlueprintGeneratedClass HUD_GameTags_Entry.HUD_GameTags_Entry_C
// Size: 0x268 (Inherited: 0x230)
struct UHUD_GameTags_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* BranchText; // 0x238(0x08)
	UImage* Image_Background; // 0x240(0x08)
	UImage* Image_Outline; // 0x248(0x08)
	FText TagName; // 0x250(0x18)

	void SetText(FText InText);
	void PreConstruct(bool IsDesignTime);
	void SetVisible(bool InVisible);
	void ExecuteUbergraph_HUD_GameTags_Entry(int32_t EntryPoint);
};

