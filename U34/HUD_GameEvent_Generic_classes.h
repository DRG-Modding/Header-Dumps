// WidgetBlueprintGeneratedClass HUD_GameEvent_Generic.HUD_GameEvent_Generic_C
// Size: 0x288 (Inherited: 0x230)
struct UHUD_GameEvent_Generic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	struct UCanvasPanel* Canvas; // 0x248(0x08)
	struct UTextBlock* DATA_Header; // 0x250(0x08)
	struct UTextBlock* DATA_Objective; // 0x258(0x08)
	struct UTextBlock* DATA_ObjectiveCounter; // 0x260(0x08)
	struct UTextBlock* DATA_Timer; // 0x268(0x08)
	struct UHorizontalBox* ObjectiveHolder; // 0x270(0x08)
	struct UVerticalBox* VerticalBox_InProgress; // 0x278(0x08)
	struct AGameEvent* GameEvent; // 0x280(0x08)

	void RegisterGameEvent(struct AGameEvent* GameEvent); // Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.RegisterGameEvent
	void UpdateTime(float CurrentProgress); // Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.UpdateTime
	void ShutDown(); // Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ShutDown
	void Construct(); // Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.Construct
	void ProgressChanged(float CurrentProgress); // Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ProgressChanged
	void NumberObjectivesChanged(int32_t stageCompleted); // Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.NumberObjectivesChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.PreConstruct
	void ExecuteUbergraph_HUD_GameEvent_Generic(int32_t EntryPoint); // Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ExecuteUbergraph_HUD_GameEvent_Generic
};

