// WidgetBlueprintGeneratedClass HUD_ActionHoldProgress.HUD_ActionHoldProgress_C
// Size: 0x270 (Inherited: 0x250)
struct UHUD_ActionHoldProgress_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UHUD_DefaultLabel_C* ActionText; // 0x258(0x08)
	UProgressBar* HoldingProgress; // 0x260(0x08)
	UInvalidationBox* Invalidation; // 0x268(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnActionHoldProgress(FText Description, float Progress);
	void ExecuteUbergraph_HUD_ActionHoldProgress(int32_t EntryPoint);
};

