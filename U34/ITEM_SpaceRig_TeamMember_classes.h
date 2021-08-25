// WidgetBlueprintGeneratedClass ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C
// Size: 0x300 (Inherited: 0x230)
struct UITEM_SpaceRig_TeamMember_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBorder* Border_CharacterLevel; // 0x238(0x08)
	struct UBorder* Border_CharacterName; // 0x240(0x08)
	struct UBorder* Border_PlayerName; // 0x248(0x08)
	struct UBorder* Border_PlayerRank; // 0x250(0x08)
	struct UUI_MaskedImage_C* CharIcon; // 0x258(0x08)
	struct UTextBlock* ClassLevel; // 0x260(0x08)
	struct UImage* ICON_CharacterLevel; // 0x268(0x08)
	struct UImage* Icon_Host; // 0x270(0x08)
	struct UImage* Icon_PlayerRank; // 0x278(0x08)
	struct UImage* Image_1; // 0x280(0x08)
	struct UTextBlock* IncomingPlayerNameTxt; // 0x288(0x08)
	struct UITM_RetirementBadge_C* ITM_RetirementBadge; // 0x290(0x08)
	struct UOverlay* Overlay_1; // 0x298(0x08)
	struct UImage* PlayerIconBG; // 0x2a0(0x08)
	struct UImage* PlayerIconBorder; // 0x2a8(0x08)
	struct UCircularThrobber* PlayerOnHisWayIndicator; // 0x2b0(0x08)
	struct UTextBlock* PlayerRank; // 0x2b8(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x2c0(0x08)
	struct UTextBlock* TXT_CharacterName; // 0x2c8(0x08)
	struct UTextBlock* TXT_PlayerName; // 0x2d0(0x08)
	struct UUI_NameTags_C* UI_NameTags; // 0x2d8(0x08)
	struct UUI_NameTags_C* UI_NameTags_C_1; // 0x2e0(0x08)
	struct APlayerCharacter* PlayerCharacter; // 0x2e8(0x08)
	struct AFSDPlayerState* PlayerState; // 0x2f0(0x08)
	struct AFSDPlayerState* NewVar_1; // 0x2f8(0x08)

	void Update(struct APlayerCharacter* Character, struct AFSDPlayerState* Player); // Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update
	void PreConstruct(bool IsDesignTime); // Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct
	void Construct(); // Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct
	void ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int32_t EntryPoint); // Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember
};

