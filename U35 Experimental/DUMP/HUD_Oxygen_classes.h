// WidgetBlueprintGeneratedClass HUD_Oxygen.HUD_Oxygen_C
// Size: 0x291 (Inherited: 0x250)
struct UHUD_Oxygen_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* DangerAnim; // 0x258(0x08)
	UWidgetAnimation* Fueling; // 0x260(0x08)
	UImage* ARROW_Fueling; // 0x268(0x08)
	UBorder* Border_2; // 0x270(0x08)
	UTextBlock* DangerText; // 0x278(0x08)
	UImage* Image_2; // 0x280(0x08)
	UProgressBar* Oxygenbar; // 0x288(0x08)
	bool HoldBarColor; // 0x290(0x01)

	void OnOxygenChanged_Event_1(int32_t oxygenLevel);
	void OnOxygenReplenishingEvent_Event_1(bool IsActive);
	void 40PercentOxygenLeft();
	void SetProgress(float CurrentProgress);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_Oxygen(int32_t EntryPoint);
};

