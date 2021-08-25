// WidgetBlueprintGeneratedClass HUD_Frozen.HUD_Frozen_C
// Size: 0x28c (Inherited: 0x250)
struct UHUD_Frozen_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x258(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_1; // 0x260(0x08)
	struct UBorder* Border_1; // 0x268(0x08)
	struct UBorder* Border_2; // 0x270(0x08)
	struct UUI_AdvancedLabel_C* InstructionsLabel; // 0x278(0x08)
	struct UProgressBar* UnfreezeProgressBar; // 0x280(0x08)
	float CurrentProgress; // 0x288(0x04)

	void PreConstruct(bool IsDesignTime); // Function HUD_Frozen.HUD_Frozen_C.PreConstruct
	void Construct(); // Function HUD_Frozen.HUD_Frozen_C.Construct
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState); // Function HUD_Frozen.HUD_Frozen_C.OnCharacterStateChanged_Event
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_Frozen.HUD_Frozen_C.Tick
	void SetProgress(float CurrentProgress); // Function HUD_Frozen.HUD_Frozen_C.SetProgress
	void ExecuteUbergraph_HUD_Frozen(int32_t EntryPoint); // Function HUD_Frozen.HUD_Frozen_C.ExecuteUbergraph_HUD_Frozen
};

