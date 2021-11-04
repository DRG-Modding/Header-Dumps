// WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C
// Size: 0x29c (Inherited: 0x230)
struct UTOOLTIP_ServerEntry_Team_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	UVerticalBox* ContentBox; // 0x240(0x08)
	FSlateFontInfo ResourceFont; // 0x248(0x50)
	int32_t MaxIcons; // 0x298(0x04)

	void SetData(UITM_ServerList_Entry_PlayerIcons_C* TeamWidget, TArray<UPlayerCharacterID*> Players, bool IsClassLocked);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int32_t EntryPoint);
};

