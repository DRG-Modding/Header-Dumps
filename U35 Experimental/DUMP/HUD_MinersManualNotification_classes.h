// WidgetBlueprintGeneratedClass HUD_MinersManualNotification.HUD_MinersManualNotification_C
// Size: 0x260 (Inherited: 0x230)
struct UHUD_MinersManualNotification_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UImage* Image_Background; // 0x240(0x08)
	UTextBlock* PageText; // 0x248(0x08)
	UTextBlock* TextBlock_Headline; // 0x250(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x258(0x08)

	void PreConstruct(bool IsDesignTime);
	void Show(FText Text, float TimeOnScreen);
	void OnFinished();
	void ExecuteUbergraph_HUD_MinersManualNotification(int32_t EntryPoint);
};

