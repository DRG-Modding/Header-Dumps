// WidgetBlueprintGeneratedClass HUD_ActionHoldProgress.HUD_ActionHoldProgress_C
// Size: 0x270 (Inherited: 0x250)
struct UHUD_ActionHoldProgress_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UHUD_DefaultLabel_C* ActionText; // 0x258(0x08)
	struct UProgressBar* HoldingProgress; // 0x260(0x08)
	struct UInvalidationBox* Invalidation; // 0x268(0x08)

	void PreConstruct(bool IsDesignTime); // Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct
	void Construct(); // Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.Construct
	void OnActionHoldProgress(struct FText Description, float Progress); // Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress
	void ExecuteUbergraph_HUD_ActionHoldProgress(int32_t EntryPoint); // Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress
};

