// WidgetBlueprintGeneratedClass HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C
// Size: 0x2f8 (Inherited: 0x230)
struct UHUD_TabPlayerListEntryV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_SupplyBar_C* AmmoBar; // 0x238(0x08)
	struct UBorder* Border_CharacterLevel; // 0x240(0x08)
	struct UBorder* Border_PlayerRank; // 0x248(0x08)
	struct UTextBlock* DATA_ClassName; // 0x250(0x08)
	struct UTextBlock* DATA_PlayerName; // 0x258(0x08)
	struct UVerticalBox* InfoBox; // 0x260(0x08)
	struct UImage* IsTalking; // 0x268(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x270(0x08)
	struct UITM_HealthBar_C* ITM_HealthBar; // 0x278(0x08)
	struct UTextBlock* PingText; // 0x280(0x08)
	struct UNamedSlot* PutStuffHere_Rightside; // 0x288(0x08)
	struct UUI_NameTags_C* UI_NameTags; // 0x290(0x08)
	struct UVerticalBox* VerticalBox_AmmoHealth; // 0x298(0x08)
	struct AFSDPlayerState* PlayerState; // 0x2a0(0x08)
	struct FSlateFontInfo NameFont; // 0x2a8(0x50)

	void UpdatePlayerClass(); // Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdatePlayerClass
	void UpdateVolatileStats(); // Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdateVolatileStats
	void Set Data(struct AFSDPlayerState* State); // Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Set Data
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Tick
	void PreConstruct(bool IsDesignTime); // Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.PreConstruct
	void ShowInfoBar(bool shouldShow); // Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ShowInfoBar
	void CharacterChanged(struct APlayerCharacter* PlayerCharacter); // Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.CharacterChanged
	void ExecuteUbergraph_HUD_TabPlayerListEntryV2(int32_t EntryPoint); // Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ExecuteUbergraph_HUD_TabPlayerListEntryV2
};

