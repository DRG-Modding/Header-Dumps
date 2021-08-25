// WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C
// Size: 0x29c (Inherited: 0x230)
struct UTOOLTIP_ServerEntry_Team_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow; // 0x238(0x08)
	struct UVerticalBox* ContentBox; // 0x240(0x08)
	struct FSlateFontInfo ResourceFont; // 0x248(0x50)
	int32_t MaxIcons; // 0x298(0x04)

	void SetData(struct UITM_ServerList_Entry_PlayerIcons_C* TeamWidget, struct TArray<struct APlayerCharacter*> Players, bool IsClassLocked); // Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.SetData
	void PreConstruct(bool IsDesignTime); // Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.PreConstruct
	void ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int32_t EntryPoint); // Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Team
};

