// WidgetBlueprintGeneratedClass ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_TopBar_CharacterIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_CharacterData_C* ITM_CharacterData; // 0x238(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x240(0x08)
	struct APlayerCharacter* SelectedCharacter; // 0x248(0x08)
	struct AFSDPlayerState* PlayerState; // 0x250(0x08)

	void FromPlayerState(struct APlayerState* PlayerState, struct APlayerCharacter* SelectedCharacter); // Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.FromPlayerState
	void SetHeroData(float XP Progress, int32_t Times Retired, bool IsHost, struct APlayerCharacter* Character); // Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.SetHeroData
	void Update(struct APlayerCharacter* Character); // Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Update
	void Construct(); // Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Construct
	void OnPlayerCharacterSpawned(struct APlayerCharacter* PlayerCharacter); // Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.OnPlayerCharacterSpawned
	void ExecuteUbergraph_ITM_TopBar_CharacterIcon(int32_t EntryPoint); // Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.ExecuteUbergraph_ITM_TopBar_CharacterIcon
};

