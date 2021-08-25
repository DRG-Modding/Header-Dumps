// WidgetBlueprintGeneratedClass ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C
// Size: 0x2a8 (Inherited: 0x250)
struct UITEM_SpaceRig_PlayerRank_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBorder* Border_NameDivider2; // 0x258(0x08)
	struct UBorder* Border_PlayerName; // 0x260(0x08)
	struct UBorder* Border_PlayerRank; // 0x268(0x08)
	struct UTextBlock* DataCredits; // 0x270(0x08)
	struct UICON_Rank_C* ICON_Rank; // 0x278(0x08)
	struct UImage* Image_140; // 0x280(0x08)
	struct UITM_TopBar_ResourceCounter_C* ITM_TopBar_ResourceCounter; // 0x288(0x08)
	struct UTextBlock* PlayerRank; // 0x290(0x08)
	struct UTextBlock* TXT_PlayerName; // 0x298(0x08)
	struct UUI_NameTags_C* UI_NameTags; // 0x2a0(0x08)

	void Construct(); // Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Construct
	void Update(); // Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Update
	void OnCreditsChanged_Event(); // Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnCreditsChanged_Event
	void OnPlayerProgressChanged(struct AFSDPlayerState* PlayerState, struct FPlayerProgress Progress); // Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnPlayerProgressChanged
	void PreConstruct(bool IsDesignTime); // Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.PreConstruct
	void ExecuteUbergraph_ITEM_SpaceRig_PlayerRank(int32_t EntryPoint); // Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.ExecuteUbergraph_ITEM_SpaceRig_PlayerRank
};

