// WidgetBlueprintGeneratedClass ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C
// Size: 0x28a (Inherited: 0x230)
struct UITEM_SpaceRig_PersonalCharacterLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCanvasPanel* CanvasPanel_Base; // 0x238(0x08)
	struct UITM_CharacterBuffIcon_C* ITM_CharacterBuffIcon; // 0x240(0x08)
	struct UITM_CharacterData_C* ITM_CharacterData; // 0x248(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x250(0x08)
	struct FLinearColor Tint_Edge; // 0x258(0x10)
	struct FLinearColor Tint_Class; // 0x268(0x10)
	struct AFSDPlayerState* PlayerState; // 0x278(0x08)
	struct APlayerCharacter* SelectedCharacter; // 0x280(0x08)
	bool TOGGLE: PlayerName; // 0x288(0x01)
	bool TOGGLE: XP Display; // 0x289(0x01)

	void Construct(); // Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct
	void Update(struct APlayerCharacter* Character); // Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update
	void OnPlayerCharacterSpawned(struct APlayerCharacter* PlayerCharacter); // Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned
	void OnCharacterStatsChanged_Event(struct AFSDPlayerState* PlayerState); // Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event
	void ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int32_t EntryPoint); // Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel
};

