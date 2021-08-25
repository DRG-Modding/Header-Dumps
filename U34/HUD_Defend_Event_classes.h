// WidgetBlueprintGeneratedClass HUD_Defend_Event.HUD_Defend_Event_C
// Size: 0x350 (Inherited: 0x230)
struct UHUD_Defend_Event_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig; // 0x238(0x08)
	struct UImage* DefenderActive_01; // 0x240(0x08)
	struct UImage* DefenderActive_02; // 0x248(0x08)
	struct UImage* DefenderActive_03; // 0x250(0x08)
	struct UImage* DefenderActive_04; // 0x258(0x08)
	struct UImage* DefenderInactive_01; // 0x260(0x08)
	struct UImage* DefenderInactive_02; // 0x268(0x08)
	struct UImage* DefenderInactive_03; // 0x270(0x08)
	struct UImage* DefenderInactive_04; // 0x278(0x08)
	struct UProgressBar* DefenseProgress; // 0x280(0x08)
	struct UHUD_DefaultLabel_C* Failure; // 0x288(0x08)
	struct UHUD_DefaultLabel_C* Header; // 0x290(0x08)
	struct URetainerBox* RetainerBox_1; // 0x298(0x08)
	struct UHUD_DefaultLabel_C* Sucess_Done; // 0x2a0(0x08)
	struct UVerticalBox* VerticalBox_Complete; // 0x2a8(0x08)
	struct UVerticalBox* VerticalBox_Failure; // 0x2b0(0x08)
	struct UVerticalBox* VerticalBox_InProgress; // 0x2b8(0x08)
	struct AEVENT_Defense_Base_C* Event; // 0x2c0(0x08)
	struct FLinearColor ProgressColor; // 0x2c8(0x10)
	struct FText HeaderText; // 0x2d8(0x18)
	struct TArray<struct UImage*> DefenderBlocks; // 0x2f0(0x10)
	struct FLinearColor NoDefenderColor; // 0x300(0x10)
	struct FLinearColor HasDefenderColor; // 0x310(0x10)
	struct FText SuccesText; // 0x320(0x18)
	struct FText FailureText; // 0x338(0x18)

	void UpdateDefenderBlocks(int32_t DefenderCount); // Function HUD_Defend_Event.HUD_Defend_Event_C.UpdateDefenderBlocks
	void AddDefendersToArray(); // Function HUD_Defend_Event.HUD_Defend_Event_C.AddDefendersToArray
	void Construct(); // Function HUD_Defend_Event.HUD_Defend_Event_C.Construct
	void ProgressUpdated(float NewProgress); // Function HUD_Defend_Event.HUD_Defend_Event_C.ProgressUpdated
	void PreConstruct(bool IsDesignTime); // Function HUD_Defend_Event.HUD_Defend_Event_C.PreConstruct
	void success(); // Function HUD_Defend_Event.HUD_Defend_Event_C.success
	void Defenders Updated(int32_t DefenderCount); // Function HUD_Defend_Event.HUD_Defend_Event_C.Defenders Updated
	void Failed(); // Function HUD_Defend_Event.HUD_Defend_Event_C.Failed
	void ExecuteUbergraph_HUD_Defend_Event(int32_t EntryPoint); // Function HUD_Defend_Event.HUD_Defend_Event_C.ExecuteUbergraph_HUD_Defend_Event
};

