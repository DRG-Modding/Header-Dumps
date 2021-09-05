// WidgetBlueprintGeneratedClass HUD_GameEvent_Generic.HUD_GameEvent_Generic_C
// Size: 0x288 (Inherited: 0x230)
struct UHUD_GameEvent_Generic_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UCanvasPanel* Canvas; // 0x248(0x08)
	UTextBlock* DATA_Header; // 0x250(0x08)
	UTextBlock* DATA_Objective; // 0x258(0x08)
	UTextBlock* DATA_ObjectiveCounter; // 0x260(0x08)
	UTextBlock* DATA_Timer; // 0x268(0x08)
	UHorizontalBox* ObjectiveHolder; // 0x270(0x08)
	UVerticalBox* VerticalBox_InProgress; // 0x278(0x08)
	AGameEvent* GameEvent; // 0x280(0x08)

	void RegisterGameEvent(AGameEvent* GameEvent);
	void UpdateTime(float CurrentProgress);
	void ShutDown();
	void Construct();
	void ProgressChanged(float CurrentProgress);
	void NumberObjectivesChanged(int32_t stageCompleted);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_GameEvent_Generic(int32_t EntryPoint);
};

