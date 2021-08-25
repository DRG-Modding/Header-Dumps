// WidgetBlueprintGeneratedClass ITM_CharacterData.ITM_CharacterData_C
// Size: 0x2f4 (Inherited: 0x230)
struct UITM_CharacterData_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_CharacterLevel; // 0x238(0x08)
	struct UTextBlock* DATA_CharName; // 0x240(0x08)
	struct UTextBlock* DATA_PlayerName; // 0x248(0x08)
	struct UTextBlock* DATA_PlayerRank; // 0x250(0x08)
	struct UTextBlock* DATA_xp; // 0x258(0x08)
	struct UBorder* Holder_CharLevel; // 0x260(0x08)
	struct UBorder* Holder_CharName; // 0x268(0x08)
	struct UBorder* Holder_PlayerName; // 0x270(0x08)
	struct UBorder* Holder_PlayerRank; // 0x278(0x08)
	struct UVerticalBox* Holder_XP; // 0x280(0x08)
	struct USizeBox* Holder_XPbar; // 0x288(0x08)
	struct UImage* ICON_CharacterLevel; // 0x290(0x08)
	struct UImage* Image_3; // 0x298(0x08)
	struct UImage* Image_7; // 0x2a0(0x08)
	struct UBorder* OuterBorder; // 0x2a8(0x08)
	struct USizeBox* SizeBox_2; // 0x2b0(0x08)
	struct USizeBox* SizeBox_5; // 0x2b8(0x08)
	struct USizeBox* SizeBox_6; // 0x2c0(0x08)
	struct USpacer* Spacer_1; // 0x2c8(0x08)
	struct UUI_Character_Supplies_C* UI_Character_Supplies; // 0x2d0(0x08)
	struct UProgressBar* XPbar_Base; // 0x2d8(0x08)
	struct UProgressBar* XPbar_Edge; // 0x2e0(0x08)
	float Width; // 0x2e8(0x04)
	bool ShowPlayerName; // 0x2ec(0x01)
	bool ShowPlayerRank; // 0x2ed(0x01)
	bool ShowCharacterName; // 0x2ee(0x01)
	bool ShowCharacterLevel; // 0x2ef(0x01)
	bool ShowXPbar; // 0x2f0(0x01)
	bool ShowXPcounter; // 0x2f1(0x01)
	bool ShowSupplies; // 0x2f2(0x01)
	bool ShowHealth; // 0x2f3(0x01)

	void FromPlayerState(struct AFSDPlayerState* InPlayerState, struct APlayerCharacter* OptionalCharacterClass); // Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerState
	void FromPlayerCharacter(struct APlayerCharacter* SetCharacter); // Function ITM_CharacterData.ITM_CharacterData_C.FromPlayerCharacter
	void SetData(struct FString PlayerName, struct FText HeroName, int32_t PlayerRank, int32_t CharacterLevel, float LevelProgress, int32_t CurrentXP, int32_t RequiredXP, struct AFSDPlayerState* PlayerState); // Function ITM_CharacterData.ITM_CharacterData_C.SetData
	void SetToggles(bool PlayerName, bool PlayerRank, bool CharacterName, bool CharacterLevel, bool XPcounter, bool XPbar, bool Supplies); // Function ITM_CharacterData.ITM_CharacterData_C.SetToggles
	void PreConstruct(bool IsDesignTime); // Function ITM_CharacterData.ITM_CharacterData_C.PreConstruct
	void ExecuteUbergraph_ITM_CharacterData(int32_t EntryPoint); // Function ITM_CharacterData.ITM_CharacterData_C.ExecuteUbergraph_ITM_CharacterData
};

