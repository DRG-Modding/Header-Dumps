// WidgetBlueprintGeneratedClass HUD_Frozen.HUD_Frozen_C
// Size: 0x28c (Inherited: 0x250)
struct UHUD_Frozen_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x258(0x08)
	UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_1; // 0x260(0x08)
	UBorder* Border_1; // 0x268(0x08)
	UBorder* Border_2; // 0x270(0x08)
	UUI_AdvancedLabel_C* InstructionsLabel; // 0x278(0x08)
	UProgressBar* UnfreezeProgressBar; // 0x280(0x08)
	float CurrentProgress; // 0x288(0x04)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void SetProgress(float CurrentProgress);
	void ExecuteUbergraph_HUD_Frozen(int32_t EntryPoint);
};

