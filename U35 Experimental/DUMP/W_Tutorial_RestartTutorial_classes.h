// WidgetBlueprintGeneratedClass W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C
// Size: 0x288 (Inherited: 0x278)
struct UW_Tutorial_RestartTutorial_C : UW_TutorialContent_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	FTimerHandle TimerHandle; // 0x280(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnCloseTutorial();
	void ExecuteUbergraph_W_Tutorial_RestartTutorial(int32_t EntryPoint);
};

