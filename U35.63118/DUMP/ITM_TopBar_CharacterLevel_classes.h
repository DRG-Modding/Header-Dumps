// WidgetBlueprintGeneratedClass ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C
// Size: 0x278 (Inherited: 0x250)
struct UITM_TopBar_CharacterLevel_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UTextBlock* CharacterLevel; // 0x258(0x08)
	UBorder* LevelBG; // 0x260(0x08)
	UHorizontalBox* LineBox; // 0x268(0x08)
	float Width; // 0x270(0x04)
	float Right Padding; // 0x274(0x04)

	void FromPlayerState(APlayerState* PlayerState);
	void SetCharacterLevel(int32_t CharacterLevel);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnPlayerCharacterSpawned(APlayerCharacter* PlayerCharacter);
	void OnCharacterStatsChanged_Event(AFSDPlayerState* PlayerState);
	void ExecuteUbergraph_ITM_TopBar_CharacterLevel(int32_t EntryPoint);
};

