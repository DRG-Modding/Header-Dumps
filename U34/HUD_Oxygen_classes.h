// WidgetBlueprintGeneratedClass HUD_Oxygen.HUD_Oxygen_C
// Size: 0x291 (Inherited: 0x250)
struct UHUD_Oxygen_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* DangerAnim; // 0x258(0x08)
	struct UWidgetAnimation* Fueling; // 0x260(0x08)
	struct UImage* ARROW_Fueling; // 0x268(0x08)
	struct UBorder* Border_2; // 0x270(0x08)
	struct UTextBlock* DangerText; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UProgressBar* Oxygenbar; // 0x288(0x08)
	bool HoldBarColor; // 0x290(0x01)

	void OnOxygenChanged_Event_1(int32_t oxygenLevel); // Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenChanged_Event_1
	void OnOxygenReplenishingEvent_Event_1(bool IsActive); // Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenReplenishingEvent_Event_1
	void 40PercentOxygenLeft(); // Function HUD_Oxygen.HUD_Oxygen_C.40PercentOxygenLeft
	void SetProgress(float CurrentProgress); // Function HUD_Oxygen.HUD_Oxygen_C.SetProgress
	void Construct(); // Function HUD_Oxygen.HUD_Oxygen_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_Oxygen.HUD_Oxygen_C.PreConstruct
	void ExecuteUbergraph_HUD_Oxygen(int32_t EntryPoint); // Function HUD_Oxygen.HUD_Oxygen_C.ExecuteUbergraph_HUD_Oxygen
};

