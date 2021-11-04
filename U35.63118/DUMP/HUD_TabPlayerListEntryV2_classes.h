// WidgetBlueprintGeneratedClass HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C
// Size: 0x2f8 (Inherited: 0x230)
struct UHUD_TabPlayerListEntryV2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_SupplyBar_C* AmmoBar; // 0x238(0x08)
	UBorder* Border_CharacterLevel; // 0x240(0x08)
	UBorder* Border_PlayerRank; // 0x248(0x08)
	UTextBlock* DATA_ClassName; // 0x250(0x08)
	UTextBlock* DATA_PlayerName; // 0x258(0x08)
	UVerticalBox* InfoBox; // 0x260(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x268(0x08)
	UITM_HealthBar_C* ITM_HealthBar; // 0x270(0x08)
	UTextBlock* PingText; // 0x278(0x08)
	UNamedSlot* PutStuffHere_Rightside; // 0x280(0x08)
	UUI_NameTags_C* UI_NameTags; // 0x288(0x08)
	UUI_PlayerSpeaking_C* UI_PlayerSpeaking; // 0x290(0x08)
	UVerticalBox* VerticalBox_AmmoHealth; // 0x298(0x08)
	AFSDPlayerState* PlayerState; // 0x2a0(0x08)
	FSlateFontInfo NameFont; // 0x2a8(0x50)

	void UpdatePlayerClass();
	void UpdateVolatileStats();
	void Set Data(AFSDPlayerState* State);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ShowInfoBar(bool shouldShow);
	void CharacterChanged(APlayerCharacter* PlayerCharacter);
	void ExecuteUbergraph_HUD_TabPlayerListEntryV2(int32_t EntryPoint);
};

