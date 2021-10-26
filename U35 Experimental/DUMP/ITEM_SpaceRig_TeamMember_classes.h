// WidgetBlueprintGeneratedClass ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C
// Size: 0x308 (Inherited: 0x230)
struct UITEM_SpaceRig_TeamMember_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Border_CharacterLevel; // 0x238(0x08)
	UBorder* Border_CharacterName; // 0x240(0x08)
	UBorder* Border_PlayerName; // 0x248(0x08)
	UBorder* Border_PlayerRank; // 0x250(0x08)
	UUI_MaskedImage_C* CharIcon; // 0x258(0x08)
	UTextBlock* ClassLevel; // 0x260(0x08)
	UImage* ICON_CharacterLevel; // 0x268(0x08)
	UImage* Icon_Host; // 0x270(0x08)
	UImage* Icon_PlayerRank; // 0x278(0x08)
	UImage* Icon_SonyTeamLeader; // 0x280(0x08)
	UImage* Image_1; // 0x288(0x08)
	UTextBlock* IncomingPlayerNameTxt; // 0x290(0x08)
	UITM_RetirementBadge_C* ITM_RetirementBadge; // 0x298(0x08)
	UOverlay* Overlay_1; // 0x2a0(0x08)
	UImage* PlayerIconBG; // 0x2a8(0x08)
	UImage* PlayerIconBorder; // 0x2b0(0x08)
	UCircularThrobber* PlayerOnHisWayIndicator; // 0x2b8(0x08)
	UTextBlock* PlayerRank; // 0x2c0(0x08)
	UWidgetSwitcher* StateSwitcher; // 0x2c8(0x08)
	UTextBlock* TXT_CharacterName; // 0x2d0(0x08)
	UTextBlock* TXT_PlayerName; // 0x2d8(0x08)
	UUI_NameTags_C* UI_NameTags; // 0x2e0(0x08)
	UUI_NameTags_C* UI_NameTags_C_1; // 0x2e8(0x08)
	APlayerCharacter* PlayerCharacter; // 0x2f0(0x08)
	AFSDPlayerState* PlayerState; // 0x2f8(0x08)
	AFSDPlayerState* NewVar_1; // 0x300(0x08)

	void SetPlayerName();
	void Update(APlayerCharacter* Character, AFSDPlayerState* Player);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int32_t EntryPoint);
};

