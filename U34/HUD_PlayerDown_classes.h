// WidgetBlueprintGeneratedClass HUD_PlayerDown.HUD_PlayerDown_C
// Size: 0x2d8 (Inherited: 0x250)
struct UHUD_PlayerDown_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall; // 0x258(0x08)
	struct UImage* Brackets01; // 0x260(0x08)
	struct UImage* Brackets02; // 0x268(0x08)
	struct UUI_AdvancedLabel_C* CamCycleLabel; // 0x270(0x08)
	struct UWidgetSwitcher* CanvasSwitcher; // 0x278(0x08)
	struct UTextBlock* ClassLabel; // 0x280(0x08)
	struct UUI_AdvancedLabel_C* HelpLabel; // 0x288(0x08)
	struct UHUD_ActivatablePerks_C* HUD_ActivatablePerks; // 0x290(0x08)
	struct UHUD_Armor_Base_C* HUD_Armor_Base; // 0x298(0x08)
	struct UHUD_Health_Base_C* HUD_Health_Base; // 0x2a0(0x08)
	struct UCanvasPanel* PlayerCanvas; // 0x2a8(0x08)
	struct UTextBlock* PlayerName; // 0x2b0(0x08)
	struct UScreenOverlay_Incapacitated_C* ScreenOverlay_Incapacitated; // 0x2b8(0x08)
	struct UCanvasPanel* ShouldCamCanvas; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2c8(0x08)
	struct UAudioComponent* StaticNoiseAudio; // 0x2d0(0x08)

	enum class ESlateVisibility GetCycleCameraVisibility(); // Function HUD_PlayerDown.HUD_PlayerDown_C.GetCycleCameraVisibility
	void Construct(); // Function HUD_PlayerDown.HUD_PlayerDown_C.Construct
	void OnDownCameraTargetChanged(struct APlayerCharacter* Target); // Function HUD_PlayerDown.HUD_PlayerDown_C.OnDownCameraTargetChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerDown.HUD_PlayerDown_C.PreConstruct
	void End Player Down(); // Function HUD_PlayerDown.HUD_PlayerDown_C.End Player Down
	void ReceiveNewVisibility(enum class ESlateVisibility NewVisibility); // Function HUD_PlayerDown.HUD_PlayerDown_C.ReceiveNewVisibility
	void ExecuteUbergraph_HUD_PlayerDown(int32_t EntryPoint); // Function HUD_PlayerDown.HUD_PlayerDown_C.ExecuteUbergraph_HUD_PlayerDown
};

