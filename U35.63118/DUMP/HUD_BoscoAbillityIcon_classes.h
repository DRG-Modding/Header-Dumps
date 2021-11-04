// WidgetBlueprintGeneratedClass HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C
// Size: 0x2ac (Inherited: 0x250)
struct UHUD_BoscoAbillityIcon_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Ping; // 0x258(0x08)
	UImage* Border; // 0x260(0x08)
	UProgressBar* FlareProduction; // 0x268(0x08)
	UInventoryComponent* Inventory; // 0x270(0x08)
	int32_t Index; // 0x278(0x04)
	float LastProgress; // 0x27c(0x04)
	UBoscoAbillityComponent* Abillity; // 0x280(0x08)
	FLinearColor FilledColor; // 0x288(0x10)
	FLinearColor UnFilledColor; // 0x298(0x10)
	float PreviewProgress; // 0x2a8(0x04)

	void SetProgress(float Percent, bool DisableAnim);
	void Init(int32_t Index, UBoscoAbillityComponent* Abillity);
	void PreConstruct(bool IsDesignTime);
	void On Flare Production Finished();
	void OnChargeUsed(int32_t aCurrentCharges);
	void ExecuteUbergraph_HUD_BoscoAbillityIcon(int32_t EntryPoint);
};

