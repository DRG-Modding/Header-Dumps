// WidgetBlueprintGeneratedClass HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C
// Size: 0x2ac (Inherited: 0x250)
struct UHUD_BoscoAbillityIcon_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* Ping; // 0x258(0x08)
	struct UImage* Border; // 0x260(0x08)
	struct UProgressBar* FlareProduction; // 0x268(0x08)
	struct UInventoryComponent* Inventory; // 0x270(0x08)
	int32_t Index; // 0x278(0x04)
	float LastProgress; // 0x27c(0x04)
	struct UBoscoAbillityComponent* Abillity; // 0x280(0x08)
	struct FLinearColor FilledColor; // 0x288(0x10)
	struct FLinearColor UnFilledColor; // 0x298(0x10)
	float PreviewProgress; // 0x2a8(0x04)

	void SetProgress(float Percent, bool DisableAnim); // Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress
	void Init(int32_t Index, struct UBoscoAbillityComponent* Abillity); // Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init
	void PreConstruct(bool IsDesignTime); // Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct
	void On Flare Production Finished(); // Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished
	void OnChargeUsed(int32_t aCurrentCharges); // Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed
	void ExecuteUbergraph_HUD_BoscoAbillityIcon(int32_t EntryPoint); // Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon
};

