// WidgetBlueprintGeneratedClass HUD_TutorialLevelManager.HUD_TutorialLevelManager_C
// Size: 0x298 (Inherited: 0x278)
struct UHUD_TutorialLevelManager_C : UTutorialLevelWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UW_TutorialContent_Base_C* BP_TutorialContentWidget_Base; // 0x280(0x08)
	UVerticalBox* WidgetHolder; // 0x288(0x08)
	UTutorialContentWidget* CurrContentWidget; // 0x290(0x08)

	void OnNewActiveTutorial(UTutorialContentWidget* Widget);
	void Construct();
	void ExecuteUbergraph_HUD_TutorialLevelManager(int32_t EntryPoint);
};

