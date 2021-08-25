// WidgetBlueprintGeneratedClass ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C
// Size: 0x278 (Inherited: 0x250)
struct UITM_TopBar_CharacterLevel_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UTextBlock* CharacterLevel; // 0x258(0x08)
	struct UBorder* LevelBG; // 0x260(0x08)
	struct UHorizontalBox* LineBox; // 0x268(0x08)
	float Width; // 0x270(0x04)
	float Right Padding; // 0x274(0x04)

	void FromPlayerState(struct APlayerState* PlayerState); // Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.FromPlayerState
	void SetCharacterLevel(int32_t CharacterLevel); // Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.SetCharacterLevel
	void PreConstruct(bool IsDesignTime); // Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.PreConstruct
	void Construct(); // Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.Construct
	void OnPlayerCharacterSpawned(struct APlayerCharacter* PlayerCharacter); // Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnPlayerCharacterSpawned
	void OnCharacterStatsChanged_Event(struct AFSDPlayerState* PlayerState); // Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnCharacterStatsChanged_Event
	void ExecuteUbergraph_ITM_TopBar_CharacterLevel(int32_t EntryPoint); // Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.ExecuteUbergraph_ITM_TopBar_CharacterLevel
};

