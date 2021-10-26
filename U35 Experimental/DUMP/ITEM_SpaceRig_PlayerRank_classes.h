// WidgetBlueprintGeneratedClass ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C
// Size: 0x2a8 (Inherited: 0x250)
struct UITEM_SpaceRig_PlayerRank_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBorder* Border_NameDivider2; // 0x258(0x08)
	UBorder* Border_PlayerName; // 0x260(0x08)
	UBorder* Border_PlayerRank; // 0x268(0x08)
	UTextBlock* DataCredits; // 0x270(0x08)
	UICON_Rank_C* ICON_Rank; // 0x278(0x08)
	UImage* Image_140; // 0x280(0x08)
	UITM_TopBar_ResourceCounter_C* ITM_TopBar_ResourceCounter; // 0x288(0x08)
	UTextBlock* PlayerRank; // 0x290(0x08)
	UTextBlock* TXT_PlayerName; // 0x298(0x08)
	UUI_NameTags_C* UI_NameTags; // 0x2a0(0x08)

	void SetPlayerName();
	void Construct();
	void Update();
	void OnCreditsChanged_Event();
	void OnPlayerProgressChanged(AFSDPlayerState* PlayerState, FPlayerProgress Progress);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITEM_SpaceRig_PlayerRank(int32_t EntryPoint);
};

