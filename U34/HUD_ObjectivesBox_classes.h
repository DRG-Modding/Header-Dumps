// WidgetBlueprintGeneratedClass HUD_ObjectivesBox.HUD_ObjectivesBox_C
// Size: 0x2b8 (Inherited: 0x230)
struct UHUD_ObjectivesBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* ShowObjectives; // 0x238(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x240(0x08)
	struct UHorizontalBox* DeepDiveBox; // 0x248(0x08)
	struct UUI_GenericLabel_C* DeepDiveElite; // 0x250(0x08)
	struct UUI_GenericLabel_C* DeepDiveStage; // 0x258(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* DeepDiveWindow; // 0x260(0x08)
	struct UHUD_DefaultLabel_C* NoObjectives; // 0x268(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x270(0x08)
	struct UInvalidationBox* ValidationBox; // 0x278(0x08)
	struct UVerticalBox* VerticalBox_GameEvent; // 0x280(0x08)
	struct UVerticalBox* VerticalBox_Optional; // 0x288(0x08)
	struct UVerticalBox* VerticalBox_Primary; // 0x290(0x08)
	struct UVerticalBox* VerticalBox_Secondary; // 0x298(0x08)
	struct APlayerCharacter* Character; // 0x2a0(0x08)
	bool LaserpointerEquipped; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct UHUDVisibilityGroup* VisibilityGroup; // 0x2b0(0x08)

	void CreateObjectiveWidget(struct UObjective* Objective); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget
	void Construct(); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct
	void OnObjectiveAdded(struct UObjective* Objective); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded
	void OnLaserPointerPressed(); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerPressed
	void OnLaserPointerReleased(); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerReleased
	void ShowDynamically(); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ShowDynamically
	void Setup Deep Dive Label(); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Setup Deep Dive Label
	void OnGameEventCompletedEvent(struct FText GameEventName); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnGameEventCompletedEvent
	void SetVisible(bool InVisible, bool animate); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.SetVisible
	void AnimFinished(); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.AnimFinished
	void OnObjectiveWidgetUpdated(struct UObjectiveWidget* InObjectiveWidget); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveWidgetUpdated
	void OnOptionalWidgetUpdated(struct UOptionalObjectiveWidget* InOptionalObjectiveWidget); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnOptionalWidgetUpdated
	void ExecuteUbergraph_HUD_ObjectivesBox(int32_t EntryPoint); // Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox
};

