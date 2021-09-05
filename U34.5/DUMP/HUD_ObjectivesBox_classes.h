// WidgetBlueprintGeneratedClass HUD_ObjectivesBox.HUD_ObjectivesBox_C
// Size: 0x2b8 (Inherited: 0x230)
struct UHUD_ObjectivesBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ShowObjectives; // 0x238(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x240(0x08)
	UHorizontalBox* DeepDiveBox; // 0x248(0x08)
	UUI_GenericLabel_C* DeepDiveElite; // 0x250(0x08)
	UUI_GenericLabel_C* DeepDiveStage; // 0x258(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* DeepDiveWindow; // 0x260(0x08)
	UHUD_DefaultLabel_C* NoObjectives; // 0x268(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x270(0x08)
	UInvalidationBox* ValidationBox; // 0x278(0x08)
	UVerticalBox* VerticalBox_GameEvent; // 0x280(0x08)
	UVerticalBox* VerticalBox_Optional; // 0x288(0x08)
	UVerticalBox* VerticalBox_Primary; // 0x290(0x08)
	UVerticalBox* VerticalBox_Secondary; // 0x298(0x08)
	APlayerCharacter* Character; // 0x2a0(0x08)
	bool LaserpointerEquipped; // 0x2a8(0x01)
	UHUDVisibilityGroup* VisibilityGroup; // 0x2b0(0x08)

	void CreateObjectiveWidget(UObjective* Objective);
	void Construct();
	void OnObjectiveAdded(UObjective* Objective);
	void OnLaserPointerPressed();
	void OnLaserPointerReleased();
	void ShowDynamically();
	void Setup Deep Dive Label();
	void OnGameEventCompletedEvent(FText GameEventName);
	void SetVisible(bool InVisible, bool animate);
	void AnimFinished();
	void OnObjectiveWidgetUpdated(UObjectiveWidget* InObjectiveWidget);
	void OnOptionalWidgetUpdated(UOptionalObjectiveWidget* InOptionalObjectiveWidget);
	void ExecuteUbergraph_HUD_ObjectivesBox(int32_t EntryPoint);
};

