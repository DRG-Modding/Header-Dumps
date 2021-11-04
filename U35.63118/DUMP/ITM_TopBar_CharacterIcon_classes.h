// WidgetBlueprintGeneratedClass ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_TopBar_CharacterIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_CharacterData_C* ITM_CharacterData; // 0x238(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x240(0x08)
	APlayerCharacter* SelectedCharacter; // 0x248(0x08)
	AFSDPlayerState* PlayerState; // 0x250(0x08)

	void FromPlayerState(APlayerState* PlayerState, APlayerCharacter* SelectedCharacter);
	void SetHeroData(float XP Progress, int32_t Times Retired, bool IsHost, APlayerCharacter* Character);
	void Update(APlayerCharacter* Character);
	void Construct();
	void OnPlayerCharacterSpawned(APlayerCharacter* PlayerCharacter);
	void ExecuteUbergraph_ITM_TopBar_CharacterIcon(int32_t EntryPoint);
};

