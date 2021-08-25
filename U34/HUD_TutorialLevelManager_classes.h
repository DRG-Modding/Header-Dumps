// WidgetBlueprintGeneratedClass HUD_TutorialLevelManager.HUD_TutorialLevelManager_C
// Size: 0x298 (Inherited: 0x278)
struct UHUD_TutorialLevelManager_C : UTutorialLevelWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UW_TutorialContent_Base_C* BP_TutorialContentWidget_Base; // 0x280(0x08)
	struct UVerticalBox* WidgetHolder; // 0x288(0x08)
	struct UTutorialContentWidget* CurrContentWidget; // 0x290(0x08)

	void OnNewActiveTutorial(struct UTutorialContentWidget* Widget); // Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.OnNewActiveTutorial
	void Construct(); // Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.Construct
	void ExecuteUbergraph_HUD_TutorialLevelManager(int32_t EntryPoint); // Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.ExecuteUbergraph_HUD_TutorialLevelManager
};

