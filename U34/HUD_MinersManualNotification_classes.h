// WidgetBlueprintGeneratedClass HUD_MinersManualNotification.HUD_MinersManualNotification_C
// Size: 0x260 (Inherited: 0x230)
struct UHUD_MinersManualNotification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Intro; // 0x238(0x08)
	struct UImage* Image_Background; // 0x240(0x08)
	struct UTextBlock* PageText; // 0x248(0x08)
	struct UTextBlock* TextBlock_Headline; // 0x250(0x08)
	struct UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x258(0x08)

	void PreConstruct(bool IsDesignTime); // Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.PreConstruct
	void Show(struct FText Text, float TimeOnScreen); // Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.Show
	void OnFinished(); // Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.OnFinished
	void ExecuteUbergraph_HUD_MinersManualNotification(int32_t EntryPoint); // Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.ExecuteUbergraph_HUD_MinersManualNotification
};

