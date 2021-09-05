// WidgetBlueprintGeneratedClass HUD_PlayerDown.HUD_PlayerDown_C
// Size: 0x2d8 (Inherited: 0x250)
struct UHUD_PlayerDown_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x258(0x08)
	UImage* Brackets01; // 0x260(0x08)
	UImage* Brackets02; // 0x268(0x08)
	UUI_AdvancedLabel_C* CamCycleLabel; // 0x270(0x08)
	UWidgetSwitcher* CanvasSwitcher; // 0x278(0x08)
	UTextBlock* ClassLabel; // 0x280(0x08)
	UUI_AdvancedLabel_C* HelpLabel; // 0x288(0x08)
	UHUD_ActivatablePerks_C* HUD_ActivatablePerks; // 0x290(0x08)
	UHUD_Armor_Base_C* HUD_Armor_Base; // 0x298(0x08)
	UHUD_Health_Base_C* HUD_Health_Base; // 0x2a0(0x08)
	UCanvasPanel* PlayerCanvas; // 0x2a8(0x08)
	UTextBlock* PlayerName; // 0x2b0(0x08)
	UScreenOverlay_Incapacitated_C* ScreenOverlay_Incapacitated; // 0x2b8(0x08)
	UCanvasPanel* ShouldCamCanvas; // 0x2c0(0x08)
	UTextBlock* TextBlock_1; // 0x2c8(0x08)
	UAudioComponent* StaticNoiseAudio; // 0x2d0(0x08)

	enum class ESlateVisibility GetCycleCameraVisibility();
	void Construct();
	void OnDownCameraTargetChanged(APlayerCharacter* Target);
	void PreConstruct(bool IsDesignTime);
	void End Player Down();
	void ReceiveNewVisibility(enum class ESlateVisibility NewVisibility);
	void ExecuteUbergraph_HUD_PlayerDown(int32_t EntryPoint);
};

