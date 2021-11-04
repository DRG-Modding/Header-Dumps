// WidgetBlueprintGeneratedClass PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C
// Size: 0x2d0 (Inherited: 0x270)
struct UPopUp_CommunityGoal_SelectNewFaction_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x278(0x08)
	UBlurBackground_C* BlurBackground; // 0x280(0x08)
	UBasic_ButtonScalable_C* Close; // 0x288(0x08)
	UTextBlock* DATA_Header; // 0x290(0x08)
	UITM_FactionSelect_C* ITM_FactionSelect; // 0x298(0x08)
	UITM_FactionSelect_C* ITM_FactionSelect_195; // 0x2a0(0x08)
	FMulticastInlineDelegate CheckState; // 0x2a8(0x10)
	int32_t Fee; // 0x2b8(0x04)
	UCommunityGoalFaction* Faction1; // 0x2c0(0x08)
	UCommunityGoalFaction* Faction2; // 0x2c8(0x08)

	void Initialize(int32_t Fee, UCommunityGoalFaction* Faction1, UCommunityGoalFaction* Faction2);
	void Construct();
	void Faction1Selected();
	void Faction2Selected();
	void BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction(int32_t EntryPoint);
	void CheckState__DelegateSignature(bool Changed);
};

